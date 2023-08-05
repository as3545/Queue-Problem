/*

A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.

Given a deque and Q queries. The task is to perform some operation on dequeue according to the queries as given below:
1. pb: query to push back the element x.
2. pf: query to push element x(given with query) to the front of the deque.
3. pp_b(): query to delete element from the back of the deque.
4. f: query to return a front element from the deque.

Example 1:

Input:
5
pf 5
pf 10
pb 6
f
pp_b

Output: 
10

Explanation: 
1. After push front deque will be {5}
2. After push front deque will be {10, 5}
3. After push back deque will be {10, 5, 6}
4. Return front element which is 10
5. After pop back deque will be {10, 5}

Example 2:

Input: 
2
pf 5 
f

Output: 
5 

Explanation:
1. After push front deque will be {5}
2. Return front element which is 5
Your Task:
Your task is to complete the following functions:
push_back_pb(): Push back the given element and then driver code prints that element.
push_front_pf(): Push front the given element and then driver code prints that element.
pop_back_ppb(): Pop the back element (if exists) and then the driver code prints the size of the deque.
front_dq(): Return the front elements if it exists, else return -1. The driver code prints the return value.

Expected Time Complexity: O(1)
Expected Auxilliary Space: O(1)

Constraints:
1 ≤ Number of queries ≤ 105

*Note: Ouput is also printed after every method call, see the driver code.
*/


//Code

void push_back_pb(deque<int> &dq, int x) {
    // Your code here
    dq.push_back(x);
}

// Function to pop element from back of the deque.
void pop_back_ppb(deque<int> &dq) {
    if (!dq.empty())
        /*Your code here*/
        dq.pop_back();
        else return;
}

// Function to return element from front of the deque.
int front_dq(deque<int> &dq) {
    if (!dq.empty())
        /*Your code here*/
        return dq.front();
        else return -1;
}

// Function to push element x to the front of the deque.
void push_front_pf(deque<int> &dq, int x) {
    // Your code here
    dq.push_front(x);
}
