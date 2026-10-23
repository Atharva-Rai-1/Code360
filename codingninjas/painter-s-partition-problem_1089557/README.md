<h2><a href="https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557" target="_blank" rel="noopener noreferrer">Painter's Partition Problem</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="given-an-array-list-of-length-n-where-the-array-list-represents-the-boards-and-each-element-of-the-given-array-list-represents-the-length-of-each-board-some-k-numbers-of-painters-are-available-to-paint-these-boards-consider-that-each-unit-of-a-board-takes-1-unit-of-time-to-paint">Given an array/list of length <em><strong>‘n’</strong></em>, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some <em><strong>‘k’</strong></em> numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.</h4>

<p><br></p>

<h4 id="you-are-supposed-to-return-the-area-of-the-minimum-time-to-get-this-job-done-of-painting-all-the-n-boards-under-a-constraint-that-any-painter-will-only-paint-the-continuous-sections-of-boards">You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.</h4>

<p><br></p>

<h5 id="example">Example :</h5>

<pre><code>Input: arr = [2, 1, 5, 6, 2, 3], k = 2

Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can&#39;t be painted in less than 11 units of time.
</code></pre>

<p><br/></p>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line contains two integers ‘n’ and ‘k’ denoting the number of elements in the array/list and number of painters available.

The second line contains ‘n’ single space-separated integers denoting the elements of the array/list.
</code></pre>

<p><br/></p>

<h5 id="output-format">Output format :</h5>

<pre><code>Return the minimum time required to get the job done.
</code></pre>

<p><br/></p>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything; it has already been taken care of.
</code></pre>


<h5 id="sample-input-1">Sample Input 1 :</h5>

<pre><code>4 2
10 20 30 40
</code></pre>

<p><br/></p>

<h5 id="sample-output-1">Sample Output 1 :</h5>

<pre><code>60
</code></pre>

<p><br/></p>

<h5 id="explanation-for-sample-input-1">Explanation For Sample Input 1 :</h5>

<pre><code>In this test case, we can divide the first 3 boards for one painter and the last board for the second painter.
</code></pre>

<p><br/></p>

<h5 id="sample-input-2">Sample Input 2 :</h5>

<pre><code>2 2
48 90
</code></pre>

<p><br/></p>

<h5 id="sample-output-2">Sample Output 2 :</h5>

<pre><code>90
</code></pre>

<p><br/></p>

<h5 id="expected-time-complexity">Expected Time Complexity:</h5>

<pre><code>Try to do this in O(n*log(n)).
</code></pre>

<p><br/></p>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= n &lt;= 10^5
1 &lt;= k &lt;= n
1 &lt;= arr[i] &lt;= 10^9

Time Limit: 1 sec.
</code></pre>
