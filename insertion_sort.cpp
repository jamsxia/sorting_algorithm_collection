#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertion_sort(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0 && nums[j] < nums[j - 1]; --j)
        {
            swap(nums[j], nums[j - 1]);
        }
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(16);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(21);
    vector<int> temp(nums.size());
    insertion_sort(nums, nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}