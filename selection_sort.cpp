
#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector<int> &nums, int n)
{
    int mid;
    for (int i = 0; i < n - 1; i++)
    {
        mid = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[mid] > nums[j])
                mid = j;
        }
        swap(nums[mid], nums[i]);
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
    selection_sort(nums, nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}