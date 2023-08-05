/*

  Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. All digits of the given array must be used to form the two numbers.

Any combination of digits may be used to form the two numbers to be summed.  Leading zeroes are permitted.

If forming two numbers is impossible (i.e. when n==0) then the "sum" is the value of the only number that can be formed.


 

 

Example 1:

Input:
N = 6
arr[] = {6, 8, 4, 5, 2, 3}
Output:
604
Explanation:
The minimum sum is formed by numbers 
358 and 246
 

Example 2:

Input:
N = 5
arr[] = {5, 3, 0, 7, 4}
Output:
82
Explanation:
The minimum sum is formed by numbers 
35 and 047


Your Task:
You don't have to print anything, printing is done by the driver code itself. Your task is to complete the function minSum() which takes the array A[] and its size N as inputs and returns the required sum.

Expected Time Complexity: O(N. log(N))
Expected Auxiliary Space: O(N)


Constraints:
1 ≤ N ≤ 35
0 ≤ A[] ≤ 9

  */

//Code

long long int minSum(int arr[], int n)
    {
        priority_queue<long long int,vector<long long>,greater<long long>>q;
        for(int i=0;i<n;i++){
            q.push(arr[i]);
            
        }
        long long ans1=0;
        long long ans2=0;
        int z,p;
        for(int i=0;i<n;i++){
            if(i%2==0){
                z=q.top();
                ans1=ans1*10+z;
                q.pop();
            } else {
                p=q.top();
                ans2=ans2*10+p;
                q.pop();
            }
        } 
        return ans2+ans1;
    } 
