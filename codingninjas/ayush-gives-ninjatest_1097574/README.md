<h2><a href="https://www.naukri.com/code360/problems/ayush-gives-ninjatest_1097574" target="_blank" rel="noopener noreferrer">Allocate Books</a></h2>

| | |
|---|---|
| **Difficulty** | Medium |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/ayush-gives-ninjatest_1097574) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="ayush-is-studying-for-ninjatest-which-will-be-held-after-n-days-and-to-score-good-marks-he-has-to-study-m-chapters-and-the-ith-chapter-requires-time-i-seconds-to-study-the-day-in-ayush-s-world-has-100-100-seconds-there-are-some-rules-that-are-followed-by-ayush-while-studying">Ayush is studying for ninjatest which will be held after &#39;N&#39; days, And to score good marks he has to study &#39;M&#39; chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.</h4>

<h4 id="1-he-reads-the-chapter-in-a-sequential-order-i-e-he-studies-i-1th-chapter-only-after-he-studies-ith-chapter">1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.</h4>

<h4 id="2-if-he-starts-some-chapter-on-a-particular-day-he-completes-it-that-day-itself">2. If he starts some chapter on a particular day he completes it that day itself.</h4>

<h4 id="3-he-wants-to-distribute-his-workload-over-n-days-so-he-wants-to-minimize-the-maximum-amount-of-time-he-studies-in-a-day">3. He wants to distribute his workload over &#39;N&#39; days, so he wants to minimize the maximum amount of time he studies in a day.</h4>

<h4 id="your-task-is-to-find-out-the-minimal-value-of-the-maximum-amount-of-time-for-which-ayush-studies-in-a-day-in-order-to-complete-all-the-m-chapters-in-no-more-than-n-days">Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the &#39;M&#39; chapters in no more than &#39;N&#39; days.</h4>

<h4 id="for-example">For example</h4>

<pre><code>if Ayush want to study 6 chapters in 3 days and the time that each chapter requires is as follows:
Chapter 1 = 30
Chapter 2 = 20
Chapter 3 = 10
Chapter 4 = 40
Chapter 5 = 5
Chapter 6 = 45

Then he will study the chapters in the following order 

| day 1 : 1 , 2 | day 2 : 3 , 4 | day 3 : 5 , 6 |
Here we can see that he study chapters in sequential order and the maximum time to study on a day is 50, which is the minimum possible in this case.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of the input contains a single positive integer &#39;T&#39;, denoting the number of test cases.

The first line of each test case contains two space-separated positive integers &#39;N&#39; and &#39;M&#39;, denoting the number of days he can study before the ninja test and the number of chapters he has to study for the ninja test respectively.

The second line of each test case contains &#39;M&#39; space-separated positive integers, where the ith integer denotes the time required to study the ith chapter.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case print a single line containing a single integer denoting the maximum time Ayush studies in a day.

The output of each test case will be printed in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You don&#39;t have to print anything, it has already been taken care of. Just Implement the given function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N , M &lt;= 10 ^ 4
1 &lt;= TIME[i] &lt;= 10 ^ 9 
It is considered that there are infinite seconds in a day, on the planet where Ayush lives.

Time limit: 1 sec.
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>1
3 5
1 2 2 3 1
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>4
</code></pre>

<h5 id="explanation-of-sample-input-1">Explanation of sample input 1:</h5>

<pre><code>The ayush will read the chapter as follows,
Day 1 : 1 , 2         Time required : 3
Day 2 : 3             Time required : 2
Day 3 : 4 , 5         Time required : 4
So the maximum time in a day is 4.
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>1
4 7
2 2 3 3 4 4 1 
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>6
</code></pre>

<h5 id="explanation-of-sample-input-2">Explanation of sample input 2:</h5>

<pre><code>The ayush will read the chapter as follows,
Day 1 : 1 , 2          Time required : 4
Day 2 : 3 , 4          Time required : 6
Day 3 : 5              Time required : 4
Day 4 : 6 , 7          Time required : 5
So the maximum time in a day is 6.
</code></pre>
