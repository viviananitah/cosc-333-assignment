VIVIAN ANITA
EB3/61555/22
C++

Time Complexity:
The Fibonacci function calls itself twice for each input n
fibonacci(n - 1) and fibonacci(n - 2).
This results in a binary tree of recursive calls, and the number of nodes in this tree grows exponentially as 𝑛 increases.
Consequently, the time complexity is 𝑂(2𝑛).

Space Complexity: 
The space complexity is influenced by the call stack.
The deepest level of the recursion tree reaches 𝑛, so the call stack can have up to 𝑛 frames. 
Therefore, the space complexity is 𝑂(𝑛).
