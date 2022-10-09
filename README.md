# sorting_algorithm_collection
When I studied algorithm, I was confused about which algorithm can be particualry suiable in which situation. Thus, in order to have a clear understanding of sorting algorithm, I will upload five types of algorithm here, including : quick_sort, merge_sort, selection_sort, bubble_sort, insertion_sort. Plus, I will make word explanation here in Readme.

All files are written in c++. If you are the guy who only stick to leetcode, there is some necessary tricks in writing real cpluplus file. 


# Quick sort
*quick sort is based on sorting by comparison to a "key". Just to be easy, I persoanlly prefer to set that key as the first element in a vector. Each time you have two pointers, pointing to the starting point and ending point and in while loop, they are approaching to the middle until they find some element larger than that key(left), and element smaller than that key(right).Once these number are finded, they need to change places in a vector.  After each loop, the result should be in the form that [a,a,a,a,key,b,b,b,b] where a belongs to the values that are smaller than key and b refers to the value that are larger than key. Repeat the in the same way in subpart of the vector*

# Merge sort
*The key of merge sort is the method called divide and couquer: a method that breaks a larger question into simper and smaller one. Specifically, what we do is that we break a long vector into two smaller ones each time, using recursion. In order to break a vector, we have left, middle and right pointers. Recuring merge sort between left and middle, and middle and right. The time that we cannot ever divide is when the left pointer is larger than the right pointer. After breaking, we can compare value in two sub-vectors and by comparing them, we put them into a new temperary vector with two specific conditions: inside while loop.*
