/*
Given an array of 𝑛
 numbers, sorted in non-decreasing order, and 𝑘
 queries. For each query, print the minimum index of an array element not less than the given one.

Input
The first line of the input contains integers 𝑛
 and 𝑘
 (0<𝑛,𝑘≤105
), the length of the array and the number of queries. The second line contains 𝑛
 elements of the array, sorted in non-decreasing order. The third line contains 𝑘
 queries. All array elements and queries are integers, each of which does not exceed 2⋅109
 in absolute value.

Output
For each of the 𝑘
 queries, print the minimum index of an array element not less than the given one. If there are none, print 𝑛+1
.

SAMPLE INPUT :

5 5
3 3 5 8 9
2 4 8 1 10


SAMPLE OUTPUT : 
1
3
4
1
6

*/


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k; // Input the size of the array (n) and the number of queries (k)
    vector<int> a(n); // Create a vector to store n integers

    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input n integers and store them in the vector 'a'
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x; // Input the query value

        int low = -1; 
        int high = n;

        // Binary search to find the position of x in the sorted vector 'a'
        while (high > low + 1) {
            int mid = (low + high) / 2;
            if (a[mid] >= x) {
                high = mid;
            } else {
                low = mid;
            }
        }

        cout << high + 1 << "\n"; // Output the position of x in the sorted vector
    }
    return 0;
}


/*
RETURNS THE CLOSEST ELEMENT TO THE RIGHT , 

reference : 
https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
*/