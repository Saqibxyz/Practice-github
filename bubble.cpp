#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[i])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
int main()
{
    vector<int> ab = {1, 4, 2, 5, 6};
    bubbleSort(ab);
    for (int i : ab)
    {
        cout << i << " ";
    }
    return 0;
}