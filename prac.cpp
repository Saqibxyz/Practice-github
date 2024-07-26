#include <bits/stdc++.h>
using namespace std;
int beautySum(string str)
{

    int sum = 0;
    vector<string> words;
    for (int i = 0; i < str.length(); i++)
    {
        string subStr;

        for (int j = i; j < str.length(); j++)
        {
            subStr += str[j];
            words.push_back(subStr);
        }
    }
    for (auto it = words.begin(); it != words.end(); ++it)
    {
        string temp = *it;
        vector<int> temps(26, 0);
        for (int i = 0; i < temp.length(); i++)
        {
            temps[temp[i] - 'a']++;
        }
        int maxi = *max_element(temps.begin(), temps.end());
        int mini = *min_element(temps.begin(), temps.end());
        if (maxi - mini > 0)
            sum += maxi - mini;
    }
    return sum;
}
int main()
{
    beautySum("aabcb");
    return 0;
}