#include <bits/stdc++.h>
using namespace std;
int kthsmallest(int a[], int n, int k){

    //max heap declaration
    priority_queue<int>maxH;
    for(int i=0;i<n;i++){
        maxH.push(a[i]);
        if(maxH.size()>k){
            maxH.pop();
        }
    }
    return maxH.top();
}
int main() {
	int n,a[n],k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	cout<<kthsmallest(a,n,k);
	return 0;
}