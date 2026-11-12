<h2><a href="https://www.naukri.com/code360/problems/min-heap_4691801" target="_blank" rel="noopener noreferrer">Min Heap</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | Java |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/min-heap_4691801) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="implement-the-min-heap-data-structure">Implement the Min Heap data structure.</h4>

<h4 id="you-will-be-given-2-types-of-queries">You will be given 2 types of queries:-</h4>

<pre><code>0 X
Insert X in the heap.

1
Print the minimum element from the heap and remove it.
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line will contain the integer &#39;T&#39;, denoting the number of test cases.

For each test case, the first line will contain a single integer &#39;N&#39;, the number of queries.

Then, each of the next ‘N’ lines contains two types of query either 0 ‘X’ or 1.
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, output the answer for query of type 1.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You don&#39;t need to print anything. It has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 5
1 &lt;= N &lt;= 10^5
1 &lt;= X &lt;= 50

Time Limit: 1 sec
</code></pre>


<h5 id="sample-input-1">Sample Input 1 :</h5>

<pre><code>2
3
0 2
0 1
1
2
0 1
1
</code></pre>

<h5 id="sample-output-1">Sample Output 1 :</h5>

<pre><code>1
1
</code></pre>

<h5 id="explanation-of-sample-input-1">Explanation Of Sample Input 1 :</h5>

<pre><code>For the first test case:-
Insert 2 in the heap and currently, 2 is the smallest element in the heap.
Insert 1 in the heap and now the smallest element is 1.
Return and remove the smallest element which is 1.

For the second test case:-
Insert 1 in the heap and currently, 1 is the smallest element in the heap.
Return the smallest element from the heap which is 1 and remove it.
</code></pre>

<h5 id="sample-input-2">Sample Input 2 :</h5>

<pre><code>2
5
0 5
1
0 43
0 15
0 5
2
0 4
1
</code></pre>

<h5 id="sample-output-2">Sample Output 2 :</h5>

<pre><code>5
4
</code></pre>
