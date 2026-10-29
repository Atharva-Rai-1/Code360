<h2><a href="https://www.naukri.com/code360/problems/quick-sort_983625" target="_blank" rel="noopener noreferrer">Quick Sort</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/quick-sort_983625) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-an-array-of-integers-you-need-to-sort-the-array-in-ascending-order-using-quick-sort">You are given an array of integers. You need to sort the array in ascending order using quick sort.</h4>

<h4 id="quick-sort-is-a-divide-and-conquer-algorithm-in-which-we-choose-a-pivot-point-and-partition-the-array-into-two-parts-i-e-left-and-right-the-left-part-contains-the-numbers-smaller-than-the-pivot-element-and-the-right-part-contains-the-numbers-larger-than-the-pivot-element-then-we-recursively-sort-the-left-and-right-parts-of-the-array">Quick sort is a divide and conquer algorithm in which we choose a pivot point and partition the array into two parts i.e, left and right. The left part contains the numbers smaller than the pivot element and the right part contains the numbers larger than the pivot element. Then we recursively sort the left and right parts of the array.</h4>

<h4 id="example">Example:</h4>

<pre><code>Let the array = [ 4, 2, 1, 5, 3 ]
Let pivot to be the rightmost number.
</code></pre>

<p><img src="https://files.codingninjas.in/screenshot_2020-12-21-untitled-diagram-drawio-diagrams-net-4-6773.png" alt="example"></p>

<h4 id="after-the-1st-level-partitioning-the-array-will-be-2-1-3-4-5-as-3-was-the-pivot-after-2nd-level-partitioning-the-array-will-be-1-2-3-4-5-as-1-was-the-pivot-for-the-left-part-and-5-was-the-pivot-for-the-right-part-now-our-array-is-sorted-and-there-is-no-need-to-divide-it-again">After the 1st level partitioning the array will be { 2, 1, 3, 4, 5 } as 3 was the pivot. After 2nd level partitioning the array will be { 1, 2, 3, 4, 5 } as 1 was the pivot for the left part and 5 was the pivot for the right part. Now our array is sorted and there is no need to divide it again.</h4>

<h5 id="input-format">Input format:</h5>

<pre><code>The first line of input contains an integer &#39;T&#39; denoting the number of queries or test cases. 

The first line of each input consists of an integer &#39;N&#39; denoting the size of the array.

The second line of each input consists of &#39;N&#39; space-separated integers denoting the elements of the array.
</code></pre>

<h5 id="output-format">Output format:</h5>

<pre><code>For each test case, print a single line containing space-separated integers denoting the elements of the array after sorting.

The output of each test case will be printed in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="follow-up">Follow Up</h5>

<pre><code>Can you solve this in the worst case NlogN complexity?
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 10 ^ 3
-10 ^ 9 &lt;= ARR[i] &lt;= 10 ^ 9

Where &#39;T&#39; is the number of test cases, &#39;N&#39; is the length of the array &#39;ARR&#39;, and &#39;ARR[i]&#39; is the array element at index i.

Time limit: 1 sec.
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>2
5
4 2 5 1 3
4     
6 2 4 1
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>1 2 3 4 5
1 2 4 6
</code></pre>

<h5 id="explanation-of-input-1">Explanation of Input 1:</h5>

<pre><code>Test case 1:
Given array =  [4, 2, 5, 1, 3]
Sorted array = [1, 2, 3, 4, 5]

Test case 2:
Given array =  [6, 2, 4, 1]
Sorted array = [1, 2, 4, 6]
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>2
5 
5 3 2 6 4
4
1 2 3 4
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>2 3 4 5 6
1 2 3 4
</code></pre>
