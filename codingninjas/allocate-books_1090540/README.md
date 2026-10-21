<h2><a href="https://www.naukri.com/code360/problems/allocate-books_1090540" target="_blank" rel="noopener noreferrer">Allocate Books</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/allocate-books_1090540) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="given-an-array-arr-of-integer-numbers-arr-i-represents-the-number-of-pages-in-the-i-th-book">Given an array <em><strong>‘arr’</strong></em> of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.</h4>

<p><br /></p>

<h4 id="there-are-m-number-of-students-and-the-task-is-to-allocate-all-the-books-to-the-students">There are <em><strong>‘m’</strong></em> number of students, and the task is to allocate all the books to the students.</h4>

<p><br /></p>

<h4 id="allocate-books-in-such-a-way-that">Allocate books in such a way that:</h4>

<pre><code>1. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.
</code></pre>

<p><br /></p>

<h4 id="you-have-to-allocate-the-book-to-m-students-such-that-the-maximum-number-of-pages-assigned-to-a-student-is-minimum">You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.</h4>

<p><br /></p>

<h4 id="if-the-allocation-of-books-is-not-possible-return-1">If the allocation of books is not possible, return -1.</h4>

<p><br/></p>

<h5 id="example">Example:</h5>

<pre><code>Input: ‘n’ = 4 ‘m’ = 2 
‘arr’ = [12, 34, 67, 90]

Output: 113

Explanation: All possible ways to allocate the ‘4’ books to &#39;2&#39; students are:

12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

We are getting the minimum in the last case.

Hence answer is ‘113’.
</code></pre>

<h5 id="input-format">Input format:</h5>

<pre><code>The first line contains two space-separated integers ‘n’ denoting the number of books and ‘m’ denotes the number of students. 

The second line contains ‘n’ space-separated integers denoting the number of pages in each of ‘n’ books.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>Return the integer as described above.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>Do not print anything, just return the maximum number of pages that are assigned to a student is minimum.
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>4 2
12 34 67 90
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>113
</code></pre>

<h5 id="explanation-of-sample-input-1">Explanation of sample input 1:</h5>

<pre><code>All possible ways to allocate the ‘4’ books to &#39;2&#39; students are:

12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

We are getting the minimum in the last case.

Hence answer is ‘113’.
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>5 4
25 46 28 49 24
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>71
</code></pre>

<h5 id="explanation-of-sample-input-2">Explanation of sample input 2:</h5>

<pre><code>All possible ways to allocate the ‘5’ books to &#39;4&#39; students are:

25 | 46 | 28 | 49 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are &#39;25&#39;, &#39;46&#39;, &#39;28&#39;, and &#39;73&#39;. So the maximum is &#39;73&#39;.

25 | 46 | 28 49 | 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are &#39;25&#39;, &#39;46&#39;, &#39;77&#39;, and &#39;24&#39;. So the maximum is &#39;77&#39;.

25 | 46 28 | 49 | 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are &#39;25&#39;, &#39;74&#39;, &#39;49&#39;, and &#39;24&#39;. So the maximum is &#39;74&#39;.

25 46 | 28 | 49 | 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are &#39;71&#39;, &#39;28&#39;, &#39;49&#39;, and &#39;24&#39;. So the maximum is &#39;71&#39;.

We are getting the minimum in the last case.

Hence answer is ‘71’.
</code></pre>

<h5 id="expected-time-complexity">Expected time complexity:</h5>

<pre><code>The expected time complexity is O(n * log(s)), where ‘n’ is the number of integers in the array ‘arr’ and ‘s’ is the sum of all the elements of ‘arr’.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>2 &lt;= &#39;n&#39; &lt;= 10 ^ 3
1 &lt;= &#39;m&#39; &lt;= 10 ^ 3
1 &lt;= &#39;arr[i]&#39; &lt;= 10 ^ 9
The sum of all arr[i] does not exceed 10 ^ 9.

Where ‘n’ denotes the number of books and ‘m’ denotes the number of students. ‘arr[i]’ denotes an element at position ‘i’ in the sequence.

Time limit: 1 second
</code></pre>
