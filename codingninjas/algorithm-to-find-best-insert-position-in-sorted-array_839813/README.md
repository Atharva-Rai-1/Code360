<h2><a href="https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813" target="_blank" rel="noopener noreferrer">Search Insert Position</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-a-sorted-array-arr-of-distinct-values-and-a-target-value-m-you-need-to-search-for-the-index-of-the-target-value-in-the-array">You are given a sorted array <em><strong>&#39;arr&#39;</strong></em> of distinct values and a target value <em><strong>&#39;m&#39;</strong></em>. You need to search for the index of the target value in the array.</h4>

<p><br/></p>

<h5 id="note">Note:</h5>

<pre><code>1. If the value is present in the array, return its index.
2. If the value is absent, determine the index where it would be inserted in the array while maintaining the sorted order. 
3. The given array has distinct integers.
4. The given array may be empty.
</code></pre>

<p><br/></p>

<p><br/></p>

<h5 id="example">Example:</h5>

<pre><code>Input:  arr = [1, 2, 4, 7],  m = 6 

Output: 3

Explanation: If the given array &#39;arr&#39; is: [1, 2, 4, 7] and m = 6. We insert m = 6 in the array and get &#39;arr&#39; as: [1, 2, 4, 6, 7]. The position of 6 is 3 (according to 0-based indexing)
</code></pre>

<p><br/></p>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line contains two space-separated integers, &#39;n&#39; and &#39;m&#39;, representing the length of the array and the target integer.

The second line contains &#39;n&#39; space-separated integers, arr[i] representing the given array.
</code></pre>

<p><br/></p>

<h5 id="output-format">Output Format:</h5>

<pre><code>Print a single line containing a single integer denoting the position of &#39;m&#39; in the final array on a new line.
</code></pre>

<p><br/></p>

<h5 id="expected-time-complexity">Expected Time Complexity:</h5>

<pre><code>Try to solve the problem in O(log n).
</code></pre>

<p><br/></p>

<h5 id="constraints">Constraints:</h5>

<pre><code>0 ≤ n ≤ 10 ^ 5
1 ≤ m ≤ 10 ^ 9
1 ≤ arr[i] ≤ 10 ^ 9

Where &#39;arr[i]&#39; is the array element at index &#39;i&#39;.

Time Limit: 1 sec.
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>4 9
1 2 4 7
</code></pre>

<p><br/></p>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>4
</code></pre>

<p><br/>  </p>

<h5 id="explanation-of-input-1">Explanation of Input 1:</h5>

<pre><code>The given array &#39;arr&#39; is: [1, 2, 4, 7] and m = 9. We insert m = 9 in the array and get &#39;arr&#39; as: [1, 2, 4, 7, 9]. The position of 9 is 4 (according to 0-based indexing).
</code></pre>

<p><br/></p>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>3 1
2 5 7
</code></pre>

<p><br/></p>

<h5 id="sample-output-2">Sample Output 2</h5>

<pre><code>0
</code></pre>

<p><br/></p>

<h5 id="explanation-of-input-2">Explanation of Input 2:</h5>

<pre><code>The given array &#39;arr&#39; is: [2, 5, 7] and m = 1. We insert m = 1 in the array and get &#39;arr&#39; as: [1, 2, 5, 7]. The position of 1 is 0 (according to 0-based indexing)
</code></pre>

<p><br/></p>

<h5 id="sample-input-3">Sample Input 3:</h5>

<pre><code>4 2
1 2 4 7
</code></pre>

<p><br/></p>

<h5 id="sample-output-3">Sample Output 3:</h5>

<pre><code>1
</code></pre>

<p><br/></p>

<h5 id="explanation-of-input-3">Explanation of Input 3:</h5>

<pre><code>The given array &#39;arr&#39; is: [1, 2, 4, 7] and m = 2. We already have 2 in &#39;A&#39;. The position of 2 is 1 (according to 0-based indexing)
</code></pre>

<p><br/></p>
