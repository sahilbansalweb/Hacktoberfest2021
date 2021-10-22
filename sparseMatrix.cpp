#include <bits/stdc++.h>
using namespace std;

class Element
{
public:
    int i;
    int j;
    int x;
};

class Sparse
{
private:
    int m, n, num;
    Element *ele;

public:
    Sparse(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Element[this->num];
    }

    ~Sparse()
    {
        delete[] ele;
    }

    Sparse operator+(Sparse &s);
    friend istream &operator>>(istream &in, Sparse &s);
    friend ostream &operator<<(ostream &out, Sparse &s);
};

Sparse Sparse::operator+(Sparse &s2)
{
    if (m != s2.m || n != s2.n)
        return Sparse(0, 0, 0);
    Sparse *sum = new Sparse(m, n, num + s2.num);
    int i = 0, j = 0, k = 0;
    while (i < num && j < s2.num)
    {
        if (ele[i].i < s2.ele[j].i)
            sum->ele[k++] = ele[i++];
        else if (ele[i].i > s2.ele[j].i)
            sum->ele[k++] = s2.ele[j++];
        else
        {
            if (ele[i].j < s2.ele[j].j)
                sum->ele[k++] = ele[i++];
            else if (ele[i].j > s2.ele[j].j)
                sum->ele[k++] = s2.ele[j++];
            else
            {
                sum->ele[k] = ele[i++];
                sum->ele[k++].x += s2.ele[j++].x;
            }
        }
    }

    for (; i < num; i++)
        sum->ele[k++] = ele[i];
    for (; j < s2.num; j++)
        sum->ele[k++] = s2.ele[j];
    sum->num = k;
    return *sum;
}

istream &operator>>(istream &in, Sparse &s)
{
    cout << "Enter coordinates(row-wise serially) of non-zero elements followed by the element separated by space\n";
    for (int f = 0; f < s.num; f++)
    {
        cin >> s.ele[f].i >> s.ele[f].j >> s.ele[f].x;
    }
    return in;
}

ostream &operator<<(ostream &os, Sparse &s)
{
    int k = 0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (s.ele[k].i == i && s.ele[k].j == j)
                cout << s.ele[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return os;
}

int main()
{
    //storing sparsed matrix
    int m = 0, n = 0, num = 0;
    cout << "Enter dimensions of matrix \n";
    cin >> m >> n;
    cout << "Enter number of non zero elements: ";
    cin >> num;

    Sparse s1(m, n, num);
    cin >> s1;
    cout << endl;
    cout << s1;

    cout << "Do you want to enter another matrix and add it to the first one? y/n \n>>>>";
    char ch;
    cin >> ch;
    if (ch == 'y')
    {
        cout << "Enter number of non zero elements: ";
        int num2;
        cin >> num2;
        Sparse s2(m, n, num2);
        cin >> s2;
        Sparse sum = s1 + s2;
        cout << endl;
        cout << sum;
    }

    return 0;
}