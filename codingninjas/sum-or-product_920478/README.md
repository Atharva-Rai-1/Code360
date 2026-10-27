<h2><a href="https://www.naukri.com/code360/problems/sum-or-product_920478" target="_blank" rel="noopener noreferrer">Sum or Product</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/sum-or-product_920478) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-a-number-n-and-a-query-q-if-q-is-1-then-you-have-to-return-the-sum-of-all-integers-from-1-to-n-else-if-q-is-equal-to-2-then-you-have-to-return-the-product-of-all-integers-from-1-to-n-since-the-product-can-be-very-large-return-it-modulo-10-9-7">You are given a number ‘N’ and a query ‘Q.’ If ‘Q’ is 1, then you have to return the sum of all integers from 1 to ‘N,’ else if ‘Q’ is equal to 2 then you have to return the product of all integers from 1 to ‘N.’ Since the product can be very large, return it modulo 10 ^ 9 + 7.</h4>

<h4 id="for-example">For example</h4>

<pre><code>Given ‘N’ = 4, ‘Q’ = 1. 
Then the answer is 10 because the sum of all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 + 2 + 3 + 4 is equal to 10.
</code></pre>

<h5 id="input-format">Input format:</h5>

<pre><code>The first line of input contains an integer ‘T’ denoting the number of test cases.

Next, ‘T’ lines contain two space-separated integers ‘N’, where ‘N’ is the number given and ‘Q’, denoting the type of query.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>For each test case, You are supposed to return an integer denoting the sum or product of ‘N’ numbers.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You are not required to print the expected output; it has already been taken care of. Just implement the function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= ‘T’ &lt;= 10
1 &lt;= ‘N’ &lt;= 10^4
1 &lt;= ‘Q’ &lt;= 2

Time Limit: 1 sec.
</code></pre>


<h4 id="sample-input-1">Sample Input 1 :</h4>

<pre><code>2
4 1 
4 2
</code></pre>

<h4 id="sample-output-1">Sample Output 1 :</h4>

<pre><code>10
24 
</code></pre>

<h4 id="explanation-of-the-sample-input-1">Explanation of the Sample Input 1:</h4>

<pre><code>In the first test case, the answer is 10 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 + 2 + 3 + 4 is equal to 10.


In the second test case, the answer is 25 because all integers between 1 and 4 are 1, 2, 3, and 4. Hence 1 * 2 * 3 * 4 is equal to 24.
</code></pre>

<h4 id="sample-input-2">Sample Input 2 :</h4>

<pre><code>2
5 1
5 2 
</code></pre>

<h4 id="sample-output-2">Sample Output 2 :</h4>

<pre><code>15
120
</code></pre>
