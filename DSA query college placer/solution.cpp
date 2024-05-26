#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMissedone(int *arr1, int n)
{
    if (n == 0)
        return make_pair(-1, -1);

    if (n == 1)
        return make_pair(1, -1);
    int miss = -1;
    int select = -1;

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += arr1[i];

    miss = (n * (n + 1) / 2) - sum;

    sort(arr1, arr1 + (n - 1));

    int ind = n - miss - 1;

    if (ind >= 0 && ind < n - 1)
    {
        select = arr1[ind];
    }
    return make_pair(miss, select);
}
int main()
{
    int n;
    cin >> n;
    int arr1[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        int ele;
        cin >> ele;
        arr1[i] = ele;
    }
    pair<int, int> ans = findMissedone(arr1, n);
    cout << ans.first << " " << ans.second;
    return 0;
}