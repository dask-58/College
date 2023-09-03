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