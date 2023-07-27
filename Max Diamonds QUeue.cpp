//Code
class Solution {
  public:
  long long maxDiamonds(int A[],int N, int K){
      long long sum=0;
      multiset<int> st;
      for(int i=0;i<N;i++){
          st.insert(A[i]);
      }
      while(K--){
          auto s=st.end();
          s--;
          sum=sum+(*s);
          int n=(*s);
          st.erase(s);
          st.insert(n/2);
      } return sum;
  }
};
