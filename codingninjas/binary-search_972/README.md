<h2><a href="https://www.naukri.com/code360/problems/binary-search_972" target="_blank" rel="noopener noreferrer">Binary Search</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/binary-search_972) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-an-integer-array-a-of-size-n-sorted-in-non-decreasing-order-you-are-also-given-an-integer-target-your-task-is-to-write-a-function-to-search-for-target-in-the-array-a-if-it-exists-return-its-index-in-0-based-indexing-if-target-is-not-present-in-the-array-a-return-1">You are given an integer array <strong><em>&#39;A&#39;</strong></em> of size <strong><em>&#39;N&#39;</strong></em>, sorted in non-decreasing order. You are also given an integer <em><strong>&#39;target&#39;</strong></em>. Your task is to write a function to search for <em><strong>&#39;target&#39;</strong></em> in the array <em><strong>&#39;A&#39;</strong></em>. If it exists, return its index in 0-based indexing. If <em><strong>&#39;target&#39;</strong></em> is not present in the array <em><strong>&#39;A&#39;</strong></em>, return -1.</h4>

<p><br></p>

<h5 id="note">Note:</h5>

<pre><code>You must write an algorithm whose time complexity is O(LogN)
</code></pre>

<p><br></p>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line contains an Integer &#39;N&#39;, which denotes the size of the array/list.

The second line contains &#39;N&#39; single space-separated integers representing the elements in the array/list.

The third line contains the value of &#39;target&#39; to be searched for in the array/list.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>Return the index at which &#39;target&#39; is present for each test case, -1 otherwise.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= N &lt;= 10^5
1 &lt;= A[i] &lt;= 10^9
1 &lt;= target &lt;= 10^9
Time Limit: 1 sec
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>7
1 3 7 9 11 12 45
3
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>1
</code></pre>

<h5 id="explanation-of-sample-output-1">Explanation of sample output 1:</h5>

<pre><code>nums = [1, 3, 7, 9, 11, 12, 45],
The index of element &#39;3&#39; is 1.
Hence, the answer is &#39;1&#39;.
</code></pre>

<p><br></p>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>7
1 2 3 4 5 6 7
9
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>-1
</code></pre>

<h5 id="explanation-of-sample-output-2">Explanation of sample output 2:</h5>

<pre><code>nums = [1, 2, 3, 4, 5, 6, 7],
Element &#39;9&#39; doesn&#39;t exist.
Hence, the answer is &#39;-1&#39;.
</code></pre>

<p><br></p>
