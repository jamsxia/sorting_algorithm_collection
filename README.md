# sorting_algorithm_collection
When I studied algorithm, I was confused about which algorithm can be particualry suiable in which situation. Thus, in order to have a clear understanding of sorting algorithm, I will upload five types of algorithm here, including : quick_sort, merge_sort, selection_sort, bubble_sort, insertion_sort. Plus, I will make word explanation here in Readme.

All files are written in c++. If you are the guy who only stick to leetcode, there is some necessary tricks in writing real cpluplus file. 


# Quick sort
*quick sort is based on sorting by comparison to a "key". Just to be easy, I persoanlly prefer to set that key as the first element in a vector. Each time you have two pointers, pointing to the starting point and ending point and in while loop, they are approaching to the middle until they find some element larger than that key(left), and element smaller than that key(right).Once these number are finded, they need to change places in a vector.  After each loop, the result should be in the form that [a,a,a,a,key,b,b,b,b] where a belongs to the values that are smaller than key and b refers to the value that are larger than key. Repeat the in the same way in subpart of the vector*

# Merge sort
*The key of merge sort is the method called divide and couquer: a method that breaks a larger question into simper and smaller one. Specifically, what we do is that we break a long vector into two smaller ones each time, using recursion. In order to break a vector, we have left, middle and right pointers. Recuring merge sort between left and middle, and middle and right. The time that we cannot ever divide is when the left pointer is larger than the right pointer. After breaking, we can compare value in two sub-vectors and by comparing them, we put them into a new temperary vector with two specific conditions: inside while loop.*

# insertion sort
*Using two loops, the first loop sets the starting points and regions for searching, and the second loop looks up each item in that set region. Since the region start from one, the starting point and increases by one each time, so that if the new element in the end of region is smaller than the previous one, swap(what the second loop does)*

# bubble sort
*using two loops else well. Different from insertion sort, the second loop can never reach the end of the vector. We can imagine that by constanting swaping bigger one with smaller elements, we are "pushing" the largest "bubble" into the end. Since the inner loop starts from the beginning and to i-1, where i refers to the region's size, constantly shrinking. There is one condition that if all "bubbles" are sorted in correct order already, then we do not need to "push" any longer. Thus, a boolean varaiable is set to check whether this situation once occurs.

# selection sort
*selection sort's main purpose is to keep the sorted small part not change ever since it is settles. To achoieve this, two loops are needed. The first loop sets the starting point and the second loop restricts the searching area starting from the starting point to the end. By comparting the end of starting area(starting point) to every element in the searching area, we can find the current smallest element. After the second loop, we can ensure that the end of starting area is the largest number we can obtain*
