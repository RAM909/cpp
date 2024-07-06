#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> intersectarr;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            intersectarr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return intersectarr;
}