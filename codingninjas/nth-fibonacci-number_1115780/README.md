<h2><a href="https://www.naukri.com/code360/problems/nth-fibonacci-number_1115780" target="_blank" rel="noopener noreferrer">N-th Fibonacci Number</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/nth-fibonacci-number_1115780) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-an-integer-n-your-task-is-to-find-and-return-the-n-th-fibonacci-number-using-matrix-exponentiation">You are given an integer ‘N’, your task is to find and return the N’th Fibonacci number using matrix exponentiation.</h4>

<h4 id="since-the-answer-can-be-very-large-return-the-answer-modulo-10-9-7">Since the answer can be very large, return the answer modulo 10^9 +7.</h4>

<h5 id="fibonacci-number-is-calculated-using-the-following-formula">Fibonacci number is calculated using the following formula:</h5>

<pre><code>F(n) = F(n-1) + F(n-2), 
Where, F(1) = F(2) = 1.
</code></pre>

<h5 id="for-example">For Example:</h5>

<pre><code>For ‘N’ = 5, the output will be 5.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line contains a single integer ‘T’ denoting the number of test cases to be run. Then the test cases follow.

The first line of each test case contains a single integer ‘N’, representing the integer for which we have to find its equivalent Fibonacci number.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case, print a single integer representing the N’th Fibonacci number.

Return answer modulo 10^9 + 7.

Output for each test case will be printed in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You are not required to print anything; it has already been taken care of. Just implement the function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 10^5

Time Limit: 1 sec.
</code></pre>

<h5 id="follow-up">Follow Up:</h5>

<pre><code>Can you solve it in Time Complexity better than O(N)?
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>2
10
7
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>55
13
</code></pre>

<h5 id="explanation-for-sample-output-1">Explanation For Sample Output 1:</h5>

<pre><code>For the first test case, the 10th Fibonacci number is 55.
For the second test case, the 7th Fibonacci number is 13.
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>2
1
3
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>1
2
</code></pre>
