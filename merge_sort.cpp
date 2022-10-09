#include <vector>
#include <iostream>
using namespace std;
void merge_sort(vector<int> &nums, int l, int r, vector<int> &tmp)
{
    if (l + 1 >= r)
    {
        return;
    }
    int m = l + (r - l) / 2;
    merge_sort(nums, l, m, tmp);
    merge_sort(nums, m, r, tmp);
    int p = l, q = m, i = l;
    while (p < m || q < r)
    {
        if (q >= r || (p < m && nums[p] <= nums[q]))
        {
            tmp[i++] = nums[p++];
        }
        else
        {
            tmp[i++] = nums[q++];
        }
    }
    for (i = l; i < r; i++)
    {
        nums[i] = tmp[i];
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
    vector<int> tmp(nums.size());
    merge_sort(nums, 0, nums.size(), tmp);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}
