string read(int n, vector<int> book, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (book[i] + book[j] == target)
                return "YES";
            break;
        }
    }
    return "NO";
}

string read(int n, vector<int> book, int target)
{
    int left = 0;
    int right = n - 1;
    sort(book.begin(), book.end());
    while (left < right)
    {
        int sum = book[left] + book[right];
        if (sum == target)
        {
            return "YES";
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "NO";
}
