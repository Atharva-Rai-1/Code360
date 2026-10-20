<h2><a href="https://www.naukri.com/code360/problems/duplicate-in-array_893397" target="_blank" rel="noopener noreferrer">Duplicate In Array</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/duplicate-in-array_893397) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-are-given-an-array-arr-of-size-n-containing-each-number-between-1-and-n-1-at-least-once-there-is-a-single-integer-value-that-is-present-in-the-array-twice-your-task-is-to-find-the-duplicate-integer-value-present-in-the-array">You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.</h4>

<h4 id="for-example">For example:</h4>

<pre><code>Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>A duplicate number is always present in the given array.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of the input contains an integer, &#39;T,’ denoting the number of test cases.
The first line of each test case contains a single integer, &#39;N&#39;, denoting the number of elements in the array.
The second line of each test case contains &#39;N&#39; space-separated integers denoting the elements of the array &#39;ARR&#39;.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case, print a single integer - the duplicate element in the array.

Print the output of each test case in a separate line.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;=  T  &lt;= 10
2 &lt;=  N &lt;= 10 ^ 5
1 &lt;=  ARR[i]  &lt;= N - 1

Where &#39;T&#39; denotes the number of test cases, &#39;N&#39; denotes the number of elements in the array, and &#39;ARR[i]&#39; denotes the &#39;i-th&#39; element of the array &#39;ARR&#39;.

Time limit: 1 sec
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>1
3
</code></pre>

<h5 id="explanation-of-sample-input-1">Explanation of sample input 1:</h5>

<pre><code>For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>2
7
</code></pre>

<p><br/></p>

<h5 id="hints">Hints:</h5>

<pre><code>1. Simply calculate the frequency of each value.
2. Try to optimise the above approach by using an array to store the frequencies.
3. Think of a solution using Floyd’s cycle finding algorithm.
4. Try to think of a solution based on bitwise XOR.
</code></pre>
