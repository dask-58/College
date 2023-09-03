/* This code is a C++ program that performs a binary search on an array.
It takes an integer 'n' as input, representing the size of the array,
and an integer 'k' representing the number of queries to perform.
 For each query, it checks if a given element 'x' is present in the array 'a'.

 Input
 The first line of the input contains integers 𝑛 and 𝑘
 (1≤𝑛, 𝑘≤105), the length of the array and the number of queries. The second line contains 𝑛
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
