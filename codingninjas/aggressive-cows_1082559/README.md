<h2><a href="https://www.naukri.com/code360/problems/aggressive-cows_1082559" target="_blank" rel="noopener noreferrer">Aggressive Cows</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/aggressive-cows_1082559) |

## Topics

---

## Problem Statement

<h4 id="you-are-given-an-array-arr-consisting-of-n-integers-which-denote-the-position-of-a-stall">You are given an array <strong><em>&#39;arr&#39;</strong></em> consisting of <strong><em>&#39;n&#39;</strong></em> integers which denote the position of a stall.</h4>

<p><br/></p>

<h4 id="you-are-also-given-an-integer-k-which-denotes-the-number-of-aggressive-cows">You are also given an integer <strong><em>&#39;k&#39;</strong></em> which denotes the number of aggressive cows.</h4>

<p><br/></p>

<h4 id="you-are-given-the-task-of-assigning-stalls-to-k-cows-such-that-the-minimum-distance-between-any-two-of-them-is-the-maximum-possible">You are given the task of assigning stalls to &#39;k&#39; cows such that the minimum distance between any two of them is the maximum possible.</h4>

<p><br/></p>

<h4 id="print-the-maximum-possible-minimum-distance">Print the maximum possible minimum distance.</h4>

<p><br/></p>

<h5 id="example">Example:</h5>

<pre><code>Input: &#39;n&#39; = 3, &#39;k&#39; = 2 and &#39;arr&#39; = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
</code></pre>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line contains two integers ‘n’ and ‘k’ denoting the number of elements in the array and the number of aggressive cows.

The second line contains ‘n’ single space-separated integers denoting the position of the stalls.
</code></pre>

<p><br/></p>

<h5 id="output-format">Output format :</h5>

<pre><code>Return the largest possible minimum distance between cows.
</code></pre>

<p><br/></p>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything; it has already been handled.
</code></pre>


<h5 id="sample-input-1">Sample Input 1 :</h5>

<pre><code>6 4
0 3 4 7 10 9
</code></pre>

<p><br/></p>

<h5 id="sample-output-1">Sample Output 1 :</h5>

<pre><code>3
</code></pre>

<p><br/></p>

<h5 id="explanation-to-sample-input-1">Explanation to Sample Input 1 :</h5>

<pre><code>The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.
</code></pre>

<p><br/></p>

<h5 id="sample-input-2">Sample Input 2 :</h5>

<pre><code>5 2
4 2 1 3 6
</code></pre>

<p><br/></p>

<h5 id="sample-output-2">Sample Output 2 :</h5>

<pre><code>5
</code></pre>

<p><br/></p>

<h5 id="expected-time-complexity">Expected time complexity:</h5>

<pre><code>Can you solve this in O(n * log(n)) time complexity?
</code></pre>

<p><br/></p>

<h5 id="constraints">Constraints :</h5>

<pre><code>2 &lt;= &#39;n&#39; &lt;= 10 ^ 5
2 &lt;= &#39;k&#39; &lt;= n
0 &lt;= &#39;arr[i]&#39; &lt;= 10 ^ 9
Time Limit: 1 sec.
</code></pre>
