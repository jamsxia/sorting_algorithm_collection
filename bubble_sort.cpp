
#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &nums, int n)
{
    bool swapped;
    for (int i = 1; i < n; i++)
    {
        swapped = false;
        for (int j = 1; j < n - i + 1; j++)
        {
            if (nums[j] < nums[j - 1])
            {
                swap(nums[j], nums[j - 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
        xx
    }
}
int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(15);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(21);
    vector<int> temp(nums.size());
    bubble_sort(nums, nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}