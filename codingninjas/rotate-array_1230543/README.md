<h2><a href="https://www.naukri.com/code360/problems/rotate-array_1230543" target="_blank" rel="noopener noreferrer">Rotate array</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/rotate-array_1230543) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="given-an-array-arr-with-n-elements-the-task-is-to-rotate-the-array-to-the-left-by-k-steps-where-k-is-non-negative">Given an array <em><strong>&#39;arr&#39;</strong></em> with <em><strong>&#39;n&#39;</strong></em>  elements, the task is to rotate the array to the left by <em><strong>&#39;k&#39;</strong></em> steps, where &#39;k&#39; is non-negative.</h4>

<p><br></p>

<h5 id="example">Example:</h5>

<pre><code>&#39;arr &#39;= [1,2,3,4,5]
&#39;k&#39; = 1  rotated array = [2,3,4,5,1]
&#39;k&#39; = 2  rotated array = [3,4,5,1,2]
&#39;k&#39; = 3  rotated array = [4,5,1,2,3] and so on.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line contains an integer &#39;n&#39; representing the size of the array.

The second line contains &#39;n&#39; space-separated integers representing the elements of the array.

The last line contains an integer &#39;k&#39; representing the number of times the array has to be rotated in the left direction. 
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>The output contains &#39;n&#39; space-separated integers representing the Rotated array elements.
</code></pre>

<h5 id="note">Note:-</h5>

<pre><code>You don’t need to print anything. Just implement the given function.
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>8
7 5 2 11 2 43 1 1
2
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>2 11 2 43 1 1 7 5
</code></pre>

<h5 id="explanation-of-sample-input-1">Explanation of Sample Input 1:</h5>

<pre><code>Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>4
5 6 7 8
3
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>8 5 6 7
</code></pre>

<h5 id="explanation-of-sample-input-2">Explanation of Sample Input 2:</h5>

<pre><code>Rotate 1 steps to the left: 6 7 8 5
Rotate 2 steps to the left: 7 8 5 6
Rotate 2 steps to the left: 8 5 6 7
</code></pre>

<h5 id="expected-time-complexity">Expected Time Complexity:</h5>

<pre><code>O(n), where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= &#39;n&#39; &lt;= 10^3
1 &lt;= &#39;arr&#39;[i] &lt;= 10^9
1 &lt;= &#39;k&#39; &lt; &#39;n&#39;
</code></pre>

<p><br/></p>

<h5 id="hints">Hints:</h5>

<pre><code>1. For an index ‘i’, find where it lands after k swaps.
2. When performing rotation once observe how the positions of all elements change.
</code></pre>
