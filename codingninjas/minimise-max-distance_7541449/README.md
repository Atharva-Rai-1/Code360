<h2><a href="https://www.naukri.com/code360/problems/minimise-max-distance_7541449" target="_blank" rel="noopener noreferrer">Minimize Max Distance to Gas Station</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/minimise-max-distance_7541449) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-a-sorted-array-arr-of-length-n-which-contains-positive-integer-positions-of-n-gas-stations-on-the-x-axis">You are given a sorted array <strong><em>‘arr’</em></strong> of length <strong><em>‘n’</em></strong>, which contains positive integer positions of <strong><em>‘n’</em></strong> gas stations on the X-axis.</h4>

<p><br/></p>

<h4 id="you-are-also-given-an-integer-k">You are also given an integer <strong><em>‘k’</em></strong>.</h4>

<p><br/></p>

<h4 id="you-have-to-place-k-new-gas-stations-on-the-x-axis">You have to place &#39;k&#39; new gas stations on the X-axis.</h4>

<p><br/></p>

<h4 id="you-can-place-them-anywhere-on-the-non-negative-side-of-the-x-axis-even-on-non-integer-positions">You can place them anywhere on the non-negative side of the X-axis, even on non-integer positions.</h4>

<p><br/></p>

<h4 id="let-dist-be-the-maximum-value-of-the-distance-between-adjacent-gas-stations-after-adding-k-new-gas-stations">Let <strong><em> &#39;dist&#39; </em></strong> be the maximum value of the distance between adjacent gas stations after adding &#39;k&#39; new gas stations.</h4>

<h4 id="find-the-minimum-value-of-dist">Find the minimum value of dist.</h4>

<p><br/> </p>

<h5 id="example">Example:</h5>

<pre><code>Input: ‘n&#39; = 7 , ‘k’=6, ‘arr’ = {1,2,3,4,5,6,7}.

Answer: 0.5

Explanation:
We can place 6 gas stations at 1.5, 2.5, 3.5, 4.5, 5.5, 6.5. 

Thus the value of &#39;dist&#39; will be 0.5. It can be shown that we can&#39;t get a lower value of &#39;dist&#39; by placing 6 gas stations.
</code></pre>

<p><br/></p>

<h5 id="note">Note:</h5>

<pre><code>You will only see 1 or 0 in the output where:
  1 represents your answer is correct.
  0 represents your answer is wrong. 
Answers within 10^-6 of the actual answer will be accepted.
</code></pre>

<h5 id="input-format">Input format:</h5>

<pre><code>The first line contains two integers, &#39; n&#39; and &#39;k&#39;, representing the size of the array &#39;arr&#39; and the number of additional gas stations you need to place.
The second line contains &#39;n&#39; integers, denoting the array &#39;arr&#39; elements.
</code></pre>

<p><br/></p>

<h5 id="output-format">Output Format:</h5>

<pre><code>Return the minimum value of &#39;dist&#39;. 
</code></pre>

<p><br/></p>

<h5 id="note">Note:</h5>

<pre><code>You do not need to print anything. It has already been taken care of. Just implement the given function. 1 will be printed for answers with an error less than 10^-6 from the actual answer and 0 otherwise.
</code></pre>

<p><br/></p>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>5 4
1 2 3 4 5
</code></pre>

<p><br/></p>

<h5 id="expected-answer">Expected Answer:</h5>

<pre><code>0.5
</code></pre>

<p><br/></p>

<h5 id="output-printed-on-console">Output Printed On Console:</h5>

<pre><code>1
</code></pre>

<p><br/></p>

<h5 id="explanation-of-sample-output-1">Explanation of sample output 1:</h5>

<pre><code>k = 4, arr = {1,2,3,4,5} 

One of the possible ways to place 4 gas stations is {1,1.5,2,2.5,3,3.5,4,4.5,5}

Thus the maximum difference between adjacent gas stations is 0.5. 

Hence, the value of ‘dist’ is 0.5. It can be shown that there is no possible way to add 4 gas stations in such a way that the value of ‘dist’ is lower than this. (Note: 1 will be printed in the output for the correct answer). 
</code></pre>

<p><br/></p>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>10 1
1 2 3 4 5 6 7 8 9 10
</code></pre>

<p><br/></p>

<h5 id="expected-answer">Expected Answer:</h5>

<pre><code>1
</code></pre>

<p><br/></p>

<h5 id="output-printed-on-console">Output Printed On Console:</h5>

<pre><code>1
</code></pre>

<p><br/></p>

<h5 id="explanation-of-sample-output-2">Explanation of sample output 2:</h5>

<pre><code>k = 1, arr = {1,2,3,4,5,6,7,8,9,10} 

One of the possible ways to place 1 gas station is {1,1.5,2,3,4,5,6,7,8,9,10} 

Thus the maximum difference between adjacent gas stations is still 1. 

Hence, the value of ‘dist’ is 1. It can be shown that there is no possible way to add 1 gas station in such a way that the value of ‘dist’ is lower than this. (Note: 1 will be printed in the output for the correct answer). 
</code></pre>

<p><br></p>

<h5 id="expected-time-complexity">Expected Time Complexity</h5>

<pre><code>Try solving this in O(n*log(A)), where A is the maximum value in array &#39;arr&#39;.
</code></pre>

<p><br/></p>

<h5 id="constraints">Constraints:</h5>

<pre><code>2 &lt;= n &lt;= 10^5
1 &lt;= k &lt;= 10^6 
1 &lt;= arr[i] &lt;= 10^9

Time Limit: 1 sec
</code></pre>
