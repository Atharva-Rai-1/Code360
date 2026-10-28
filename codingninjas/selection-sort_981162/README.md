<h2><a href="https://www.naukri.com/code360/problems/selection-sort_981162" target="_blank" rel="noopener noreferrer">Selection Sort</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/selection-sort_981162) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="selection-sort-is-one-of-the-sorting-algorithms-that-works-by-repeatedly-finding-the-minimum-element-from-the-unsorted-part-of-the-array-and-putting-it-at-the-beginning-of-the-unsorted-region-of-the-array">Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.</h4>

<h4 id="you-are-given-an-unsorted-array-consisting-of-n-non-negative-integers-your-task-is-to-sort-the-array-in-non-decreasing-order-using-the-selection-sort-algorithm">You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.</h4>

<h5 id="for-example">For Example:</h5>

<pre><code>Selection Sort implementation for the given array:  {29,72,98,13,87,66,52,51,36} is shown below :-
</code></pre>

<p><img src="https://files.codingninjas.in/capture2-6720.JPG" alt="Alt text"></p>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of input contains an integer &#39;T&#39; representing the number of test cases. Then the test case follows.

The first line of each test case contains integer &#39;N&#39; denoting the size of the array.

The second line of each test case contains &#39;N&#39; single space-separated integers representing the array elements.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>The only line of output of each test case should contain the given array sorted in non-decreasing order.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You do not need to print anything, and it has already been taken care of. Just implement the given function. Also, you need to update the given array in place only.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 100
1 &lt;= N &lt;= 100
1 &lt;= Arr[i] &lt;= 1000

Where &#39;T&#39; represents the number of test cases, &#39;N&#39; represents the size of the array, and &#39;Arr[i]&#39; represents the elements of the array.
Time Limit: 1 sec
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>1
5
6 2 8 4 10
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>2 4 6 8 10
</code></pre>

<h5 id="explanation">Explanation :</h5>

<pre><code>In the first step, the minimum element is 2. Thus it is swapped with the starting element of the unsorted region.
In the second step, 4 is the minimum element. Now, it is swapped with the starting element of the unsorted region.
Similarly, in the third step, the minimum element is 6, which is swapped accordingly.
In the final step, all elements are arranged as per the non-decreasing order. Thus the array is sorted. 
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>2
2
1 2
4
4 3 2 1
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>1 2
1 2 3 4
</code></pre>
