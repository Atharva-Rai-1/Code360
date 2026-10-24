<h2><a href="https://www.naukri.com/code360/problems/linear-search_624470" target="_blank" rel="noopener noreferrer">Linear Search</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/linear-search_624470) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-have-been-given-a-random-integer-array-list-arr-of-size-n-and-an-integer-x-you-need-to-search-for-the-integer-x-in-the-given-array-list-using-linear-search">You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using &#39;Linear Search&#39;.</h4>

<h4 id="you-have-been-required-to-return-the-index-at-which-x-is-present-in-the-array-list-if-x-has-multiple-occurrences-in-the-array-list-then-you-need-to-return-the-index-at-which-the-first-occurrence-of-x-would-be-encountered-in-case-x-is-not-present-in-the-array-list-then-return-1"> You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.</h4>

<h4 id="linear-search-is-a-method-for-finding-an-element-within-an-array-list-it-sequentially-checks-each-element-of-the-array-list-until-a-match-is-found-or-the-whole-array-list-has-been-searched">&#39;Linear search&#39; is a method for finding an element within an array/list. It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched.</h4>

<h5 id="input-format">Input format :</h5>

<pre><code>The first line contains an Integer &#39;t&#39; which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer &#39;N&#39; representing the size of the array/list.

Second line contains &#39;N&#39; single space separated integers representing the elements in the array/list.

Third line contains the value of X(integer to be searched in the given array/list)
</code></pre>

<h5 id="output-format">Output format :</h5>

<pre><code>For each test case, print the index at which X is present or -1, otherwise.

Output for every test case will be printed in a separate line.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= t &lt;= 10^2
0 &lt;= N &lt;= 10^5
-2 ^ 31 &lt;= X &lt;= (2 ^ 31) - 1
Time Limit: 1 sec
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>1
7
2 13 4 1 3 6 28
3
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>4
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>2
7
2 13 4 1 3 6 28
9
5
7 8 5 9 5      
5
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>-1
2
</code></pre>
