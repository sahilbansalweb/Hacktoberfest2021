#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<float> &A)
{
    vector<float> buckets[A.size()];
    // Putting each element into appropriate bucket
    for (int i = 0; i < A.size(); i++)
    {
        int bucketIndex = A[i] * A.size();
        buckets[bucketIndex].push_back(A[i]);
    }
    // Sorting elements in each bucket
    for (int i = 0; i < A.size(); i++)
        sort(buckets[i].begin(), buckets[i].end());
    int i = 0;
    // Concatenating all the sorted buckets
    for (int j = 0; j < A.size(); j++)
        for (int b = 0; b < buckets[j].size(); b++)
        {
            A[i] = buckets[j][b];
            i++;
        }
}

int main()
{
    vector<float> A = {0.32, 0.44, 0.31, 0.37, 0.17, 0.51, 0.18, 0.16, 0.17, 0.11};
    bucketSort(A);
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << ' ';
    cout << endl;
    return 0;
}
