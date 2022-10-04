#include <vector>
#include <iostream>
using namespace std;
void quick_sort(vector<int> &nums, int l, int r)
{
    if (l + 1 >= r)
        return;
    int first = l, last = r - 1, key = nums[first];
    while (first < last)
    {
        while (first < last && nums[last] >= key)
            last--;
        nums[first] = nums[last];
        while (first < last && nums[first] <= key)
            first++;
        nums[last] = nums[first];
    }
    nums[first] = key;
    quick_sort(nums, l, first);
    quick_sort(nums, first + 1, r);
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
    quick_sort(nums, 0, nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}