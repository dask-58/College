# BINARY SEARCH


---

**This readme file includes three different applications for binary search , with comments and links.**


---

# A [problem](https://codeforces.com/edu/course/2/lesson/6/1)

```cpp
/*
Code by proitdtderle
*/






/* This code is a C++ program that performs a binary search on an array.
It takes an integer 'n' as input, representing the size of the array,
and an integer 'k' representing the number of queries to perform.
 For each query, it checks if a given element 'x' is present in the array 'a'.

 Input
 The first line of the input contains integers 𝑛 and 𝑘
 (1≤𝑛, 𝑘 ≤ 105), the length of the array and the number of queries. The second line contains 𝑛
 elements of the array, sorted in non-decreasing order. The third line contains 𝑘
 queries. All array elements and queries are integers, each of which does not exceed 109
 in absolute value.

Output
For each of the 𝑘
 queries print YES in a separate line if this number occurs in the array, and NO otherwise.


Sample Input : 
10 10
1 61 126 217 2876 6127 39162 98126 712687 1000000000
100 6127 1 61 200 -10000 1 217 10000 1000000000


Sample Output : 
NO
YES
YES
YES
NO
NO
YES
YES
NO
YES


*/

#include <bits/stdc++.h>
#define ll long long  
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;  // Declare integers 'n' and 'k' for array size and queries.
    cin >> n >> k;  // Read values for 'n' and 'k'.

    vector<int> a(n);  // Declare a vector 'a' of size 'n' to store the array.

    // Read 'n' integers into the vector 'a'.
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Loop through each of the 'k' queries.
    for (int i = 0; i < k; i++) {
        int x;  // Declare an integer 'x' to store the query element.
        cin >> x;  // Read the query element 'x'.
        int low = 0;  // Initialize the lower bound of the search range.
        int high = n - 1;  // Initialize the upper bound of the search range.

        bool ok = false;  // Initialize a boolean flag 'ok' to false.

        // Perform a binary search within the current range.
        while (low <= high) {
            int mid = (high + low) / 2;  // Calculate the middle index.

            // Check if the element at the middle index is equal to 'x'.
            if (a[mid] == x) {
                ok = true;  // Set 'ok' to true if found.
                break;  // Exit the loop.
            } else if (a[mid] < x) {
                low = mid + 1;  // Update the lower bound if 'x' is greater.
            } else if (a[mid] > x) {
                high = mid - 1;  // Update the upper bound if 'x' is smaller.
            }
        }

        // Print "YES" if 'x' is found in the array, "NO" otherwise.
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;  // Exit the program.
}


/* Practice on 
https://codeforces.com/edu/course/2/lesson/6/1
*/
```


---

# B [problem](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B)

```cpp
/*
Given an array of 𝑛
 numbers, sorted in non-decreasing order, and 𝑘
 queries. For each query, print the maximum index of an array element not greater than the given one.

Input
The first line of the input contains integers 𝑛 and 𝑘 (0<𝑛,𝑘≤105), the length of the array and the number of queries. The second line contains 𝑛
 elements of the array, sorted in non-decreasing order. The third line contains 𝑘
 queries. All array elements and queries are integers, each of which does not exceed 2⋅109
 in absolute value.

Output
For each of the 𝑘
 queries, print the maximum index of an array element not greater than the given one. If there are none, print 0.

Sample Input : 
5 5
3 3 5 8 9
2 4 8 1 10


SAMPLE OUTPUT :
0
2
4
0
5

*/




//codeby proitdtdelre
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;  // Read the number of elements and queries
    vector<int> a(n);  // Initialize a vector to store the elements

    for (int i = 0; i < n; i++) {
        cin >> a[i];  // Read and store the elements of the array
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;  // Read the query value

        int low = -1;
        int high = n;

        // Binary search to find the position of the query value
        while (high > low + 1) /* This condition is to repeat the things(shifting of the low and high pointers untill the mid values ((min i : a[mid] > x)and (max i : a[mid]<= x))occur in neighbouring positions. )*/ 
        {
            int mid = (low + high) / 2;
            if (a[mid] > x) {
                high = mid;  // Narrow the search range to the left half
            } else {
                low = mid;  // Narrow the search range to the right half
            }
        }

        cout << high << "\n"; // Output the position of the query value
        // You can also output low + 1; it will be the same.
    }
    return 0;
}

// problem 
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
```
