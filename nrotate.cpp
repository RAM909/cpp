vector<int> rotateArray(vector<int> arr, int n, int k)
{
    k = k % n;
    int temp[k];

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - 3] = arr[i];
    }
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }

    return arr;
}
