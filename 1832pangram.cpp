class Solution
{
public:
    bool checkIfPangram(string sentence)
    {

        vector<int> hash(26, 0);
        int index;

        for (int i = 0; i < sentence.size(); i++)
        {
            index = sentence[i] - 'a';
            hash[index] = 1;
        }

        for (int i = 0; i < 26; i++)
        {
            if (hash[i] == 0)
            {
                return false;
            }
        }

        return true;
    }
};