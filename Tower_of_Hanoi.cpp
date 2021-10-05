#include <bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int d, char t1, char t2, char t3)
{
    if (d == 1)
    {
        cout << "\nShift top disk from tower" << t1 << " to tower" << t2;
        return;
    }
    TowerOfHanoi(d - 1, t1, t3, t2);
    cout << "\nShift top disk from tower" << t1 << " to tower" << t2;
    TowerOfHanoi(d - 1, t3, t2, t1);
}
int main()
{
    int disk;
    cout << "Enter the number of disks:";
    cin >> disk;
    if (disk < 1)
        cout << "There are no disks to shift";
    else
        cout << "There are " << disk << "disks in tower 1\n";
    TowerOfHanoi(disk, '1', '2', '3');
    cout << "\n\n"
         << disk << "disks in tower 1 are shifted to tower 2";

    return 0;
}