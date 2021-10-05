#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

/* 1)   Linear Search 
        Time Complexity: O(n)
        Significantaly slower

*/

int Linear_Search(vector<int> arr, int key)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

/*  2) Binary Search
    Only for Sorted arrays
    T(n) = T(n/2) + c 
    O(logn)

*/

int Binary_Search_Recursive(vector<int> arr, int left, int right, int key)
{
    if (right > 0)
    {
        int mid = left + (right - left) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
            return Binary_Search_Recursive(arr, mid + 1, right, key);

        return Binary_Search_Recursive(arr, left, mid - 1, key);
    }
    return -1;
}

int Binary_Search_Iterative(vector<int> arr, int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if x is present at mid
        if (arr[mid] == key)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < key)
            left = mid + 1;

        // If x is smaller, ignore right half
        else
            right = mid - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int array[] = {23, 37, 40, 49, 60, 71};
    vector<int> array1{80, 40, 30, 70, 100, 10, 50, 60, 20, 90}; //non-sorted array
    vector<int> array2{12, 23, 37, 40, 49, 60, 71, 85, 91, 99};  //sorted array

    int n1 = array1.size();
    int n2 = array2.size();

    int key = 60; //
    // int key=65;
    int result;

    // 1) Linear Search
    cout << "1)Linear Search\n";
    result = Linear_Search(array1, key);
    (result == -1)
        ? cout << "Element is not present in array\n\n"
        : cout << "Element is present at index " << result << "\n\n";

    // 2) Binary Search Recursive
    cout << "2)Binary Search Recursive\n";
    result = Binary_Search_Recursive(array2, 0, n1 - 1, key);
    (result == -1)
        ? cout << "Element is not present in array\n\n"
        : cout << "Element is present at index " << result << "\n\n";

    // 3) Binary Search Iterative
    cout << "2)Binary Search Iterative\n";
    result = Binary_Search_Iterative(array2, 0, n1 - 1, key);
    (result == -1)
        ? cout << "Element is not present in array\n\n"
        : cout << "Element is present at index " << result << "\n\n";

    return 0;
}