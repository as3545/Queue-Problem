/*
 public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
       priority_queue<long long,vector<long long>,greater<long long>>q;
        long long x=0;
        long long a,b,merge;
        for(int i=0;i<n;i++){
            q.push(arr[i]);
            
        }
        while(q.size()>1){
        a=q.top();
        q.pop();
           
        b=q.top();
        q.pop();
        merge=a+b;
        q.push(merge);
        x=x+merge;
        }
         return x;
    }
*/

//Code
 public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
       priority_queue<long long,vector<long long>,greater<long long>>q;
        long long x=0;
        long long a,b,merge;
        for(int i=0;i<n;i++){
            q.push(arr[i]);
            
        }
        while(q.size()>1){
        a=q.top();
        q.pop();
           
        b=q.top();
        q.pop();
        merge=a+b;
        q.push(merge);
        x=x+merge;
        }
         return x;
    }
