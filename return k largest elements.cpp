#include <bits/stdc++.h>
using namespace std;
void klargestlements(int a[], int n, int k){
    //min heap declaration
 priority_queue<int,vector<int>,greater<int>>minH;
 for(int i=0;i<n;i++){
     minH.push(a[i]);
     if(minH.size()>k){
         minH.pop();
     }
   }
   while(minH.size()>0){
      cout<<minH.top()<<" ";
      minH.pop();
   }
   
}
int main() {
	int n,a[n],k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	vector<int>res;
    klargestlements(a,n,k);
   
	return 0;
}