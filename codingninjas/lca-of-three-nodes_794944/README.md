<h2><a href="https://www.naukri.com/code360/problems/lca-of-three-nodes_794944" target="_blank" rel="noopener noreferrer">LCA of three Nodes</a></h2>

| | |
|---|---|
| **Difficulty** | Easy |
| **Language** | C++ |
| **Verdict** | Accepted |
| **Problem Link** | [Code360](https://www.naukri.com/code360/problems/lca-of-three-nodes_794944) |

## Topics
_No topics available_

---

## Problem Statement

<h4 id="you-have-been-given-a-binary-tree-of-n-nodes-where-the-nodes-have-integer-values-and-three-integers-n1-n2-and-n3-find-the-lca-lowest-common-ancestor-of-the-three-nodes-represented-by-the-given-three-n1-n2-n3-integer-values-in-the-binary-tree">You have been given a Binary Tree of &#39;N&#39; nodes where the nodes have integer values and three integers &#39;N1&#39;, &#39;N2&#39;, and &#39;N3&#39;. Find the LCA(Lowest Common Ancestor) of the three nodes represented by the given three(&#39;N1&#39;, &#39;N2&#39;, &#39;N3&#39;) integer values in the Binary Tree.</h4>

<h5 id="for-example">For example:</h5>

<p><img src="https://files.codingninjas.in/1-5311.png" alt=""></p>

<pre><code>For the given binary tree: the LCA of (7,8,10) is 1
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>All of the node values of the binary tree will be unique.

N1, N2, and N3  will always exist in the binary tree.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of input contains a single integer T, representing the number of test cases or queries to be run. 

Then the T test cases follow. 

The first line of each test case contains three single space-separated integers N1, N2, and N3, denoting the nodes of which LCA is to be calculated.

The second line of each test case contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

For example, the input for the tree depicted in the below image would be :
</code></pre>

<p><img src="https://files.codingninjas.in/0000000000004189.png" alt="alt text"></p>

<pre><code>1
2 3
4 -1 5 6
-1 7 -1 -1 -1 -1
-1 -1
</code></pre>

<h4 id="explanation">Explanation :</h4>

<pre><code>Level 1 :
The root node of the tree is 1

Level 2 :
Left child of 1 = 2
Right child of 1 = 3

Level 3 :
Left child of 2 = 4
Right child of 2 = null (-1)
Left child of 3 = 5
Right child of 3 = 6

Level 4 :
Left child of 4 = null (-1)
Right child of 4 = 7
Left child of 5 = null (-1)
Right child of 5 = null (-1)
Left child of 6 = null (-1)
Right child of 6 = null (-1)

Level 5 :
Left child of 7 = null (-1)
Right child of 7 = null (-1)

The first not-null node (of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level and so on.
The input ends when all nodes at the last level are null (-1).
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>The above format was just to provide clarity on how the input is formed for a given tree. 
The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:

1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case,  return the node representing LCA.
</code></pre>

<h5 id="note">Note</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the given function.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 10^5
0 &lt;= node data &lt;= 10^9
0 &lt;= N1 &lt;= 10^9
0 &lt;= N2 &lt;= 10^9
0 &lt;= N3 &lt;= 10^9

Time Limit: 1sec
</code></pre>


<h5 id="sample-input-1">Sample Input 1:</h5>

<pre><code>1
8 9 11
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 10 -1 11 -1 -1 -1 -1 -1
</code></pre>

<h5 id="sample-output-1">Sample Output 1:</h5>

<pre><code>4
</code></pre>

<h5 id="sample-input-2">Sample Input 2:</h5>

<pre><code>2
7 8 2
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 10 -1 11 -1 -1 -1 -1 -1
5 6 7
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 10 -1 11 -1 -1 -1 -1 -1
</code></pre>

<h5 id="sample-output-2">Sample Output 2:</h5>

<pre><code>1
1
</code></pre>

<h5 id="explanation-to-sample-input-2">Explanation to Sample Input 2:</h5>

<pre><code>For both inputs, the binary tree will be represented as
</code></pre>

<p><img src="https://files.codingninjas.in/1-5311.png" alt=""></p>

<pre><code>For the first test case, the LCA of 7,8,2 in the given tree is 2 

For the second test case. the LCA of 5,6,7 in the given tree is 1,   
</code></pre>

<p><br/></p>

<h5 id="hints">Hints:</h5>

<pre><code>1. Think of finding LCA from the paths to all three nodes.
</code></pre>
