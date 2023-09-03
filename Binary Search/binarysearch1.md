# Binary Search


## Searching an item in an array

Suppose we have an array 𝑎=[𝑎1,𝑎2,…,𝑎𝑛], sorted in non-decreasing order. That is, the inequality 𝑎𝑖≤𝑎𝑖+1 is satisfied for the neighboring elements of the array. We need to quickly search for the position of the element 𝑥 in the array, that is, we need to find such 𝑖, then 𝑎<sub>𝑖</sub>=𝑥.

How would we search for the position of 𝑥? If you go from left to right through the array 𝑎, then this will work in O(𝑛) time, which is inefficient for a large array.

How to make it faster? Let's take advantage of the fact that the 𝑎 array is sorted. If we found out that for some 𝑗 it is true that 𝑎<sub>𝑗</sub>>𝑥, then the inequality will hold for all 𝑘>𝑗. Until the array consists of one element, we will proceed as follows:

- Let's look at the element that is in the middle of the array.
- If it is greater than 𝑥, then we cut off all elements to the right of it; otherwise, we cut off all elements to the left of it.

At the end of this procedure, we will have exactly one element in the array, which will either be equal to 𝑥 or not equal to 𝑥.

For example, for the array 𝑎=[3,5,8,13,18,19,21,27,32] and 𝑥=13, the algorithm will be executed as follows:

![img1](https://espresso.codeforces.com/66d5ce0e58550d6ac304b7b23c89cc595ff6f74f.png)

1. We consider the segment [𝑙,𝑟]=[1,9], the middle element is at the position 𝑙+𝑟/2=5.

![img2](https://espresso.codeforces.com/139d4aa64eaaff7a3b4c8fa732370d6647a1d7d3.png)

2. We consider the segment [𝑙,𝑟]=[1,4], the middle element is at the position 𝑙+𝑟/2=3.

![img3](https://espresso.codeforces.com/e2d4d5ed9f0ad0bb8b484004165926fb16714847.png)

3. We consider the segment [𝑙,𝑟]=[3,4], the middle element is at the position 𝑙+𝑟/2=4.
   

Why do we find the position of the element 𝑥 using this method (if it occurs in the array)? This follows from the sorted array. At each step, we remove from consideration the part of the array containing elements greater or less than 𝑥.

Why is it faster than a linear search? At each step of the algorithm, we reduce the length of the segment under consideration by 2 times, therefore, the steps of the algorithm will be done no more than log<sub>2</sub>𝑛. Thus, we got an algorithm that runs in O(log𝑛) time.

## Find closest in array

Let's learn how to solve the following problem — in a sorted array, you need to quickly find the element closest to the number 𝑥 (𝑥 changes from query to query).

If we needed to find an element exactly equal to 𝑥, then we could use a hash table. But if there is no 𝑥 element in the array, then the hash table will simply indicate this. In this case, we need to solve the following two tasks:

1. Find the maximum element not greater than 𝑥 (closest to 𝑥 on the left).
2. Find the minimum element not less than 𝑥 (closest to 𝑥 on the right).

Choosing from these two options the one that is closer to the number 𝑥, we will solve the problem (since all the elements to the left and to the right will only be further from 𝑥).

Consider a binary search algorithm for solving the first problem (maximum element not greater than 𝑥).

We are given an array 𝑎=[𝑎0,𝑎1,…,𝑎𝑛−1]. Let's create two pointers 𝑙 and 𝑟. They will be responsible for the boundaries of the segment under consideration. We will maintain the invariant that 𝑎𝑙≤𝑥 and 𝑎𝑟>𝑥. We put 𝑙 and 𝑟 so that the invariant holds. To do this, add -∞ to the beginning of the array (the index of this infinity will be -1), and to the end of the array +∞ (the index of this infinity will be 𝑛). Then set 𝑙 to -1 and 𝑟 to 𝑛. Obviously, the invariant is satisfied.

We will execute the following algorithm until 𝑙+1<𝑟 (until the pointers converge):

- Let 𝑚 — be the index of the midpoint of the segment [𝑙,𝑟];
- If 𝑎𝑚≤𝑥 then put 𝑙=𝑚. All elements to the left of 𝑚 are less than 𝑎𝑚;
- If 𝑎𝑚>𝑥 then put 𝑟=𝑚. All elements to the right of 𝑚 are greater than 𝑎𝑚.

Let's take an example 𝑎=[3,5,10,11,13,18,25,27,31], 𝑥=20.

![img4](https://espresso.codeforces.com/b8ec2cc0f2b93020015740b05abee4e9b531e8b0.png)

- Since 𝑥=20 is greater than 𝑎𝑚=13, then 𝑙=𝑚.

![img5](https://espresso.codeforces.com/b7d7b0653e5044189a31da38db8d2826047e2751.png)

- Since 𝑥=20 is less than 𝑎𝑚=25, then 𝑟=𝑚.
  
![img6](https://espresso.codeforces.com/adb05bcb0565eedb4043970469499c7a3e35bc42.png)

- Since 𝑥=20 is greater than 𝑎𝑚=18, then 𝑙=𝑚.
  
![img7](https://espresso.codeforces.com/f71ce64376c217377fabd37f3aa99142b0edbc82.png)

- Pointers converged.

Since the invariant is satisfied, then 𝑎𝑙≤𝑥, and 𝑎𝑟>𝑥, in this case, 𝑙 is the maximum of such indices, and 𝑟 is the minimum.

It remains only to choose from the elements 𝑎𝑙 and 𝑎𝑟 the one that is closer to 𝑥. In this example, it is 18.

## What happens in special cases?

- If all items are greater than 𝑥, then 𝑙=-1.
- If all items are less than 𝑥, then 𝑟=𝑛.

But since we set these elements equal to ±∞, the correctness of the algorithm will not be violated.
