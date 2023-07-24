/*
Given an array arr[] of size N, enqueue the elements of the array into a queue and then dequeue them.

Example 1:

Input:
N = 5 
arr[] = 1 2 3 4 5 
Output: 
1 2 3 4 5
Example 2:

Input:
N = 7
arr[] = 1 6 43 1 2 0 5
Output:
1 6 43 1 2 0 5
Your Task:
You don't need to read any input. Your task is to complete the functions push() and _pop(). The function push() takes the array and its size as the input parameters and returns the queue formed, and the function _pop(), takes the queue as the input parameter and prints the elements of the queue.

 

Expected time complexity: O(n)

Expected space complexity: O(n)

 

Constraints:
1 <= Ai <= 107
*/
//Code
queue<int>_push(int arr[],int n)
{   queue<int>q;
   //return a queue with all elements of arr inserted in it
   for(int i=0;i<n;i++){
       q.push(arr[i]);
   } return q;
}


void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
} 
