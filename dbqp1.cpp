#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,vector<bool>&vis,int i,int & n){
    if(i>=n or i<0)return INT_MAX;
    if(i==n-1){
        vis[i]=true;
        return 0;
    }
    if(vis[i])return INT_MAX;
    vis[i]=true;
    // if(dp[i]!=-1)return dp[i];

    int res=min(func(arr,vis,i+arr[i],n),func(arr,vis,i-arr[i],n));
    if(res==INT_MAX){
    return INT_MAX;
    }
    return res+1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        vector<bool>vis(n);
       ans[i]=func(arr,vis,i,n);
    }
    for(int i=0;i<n;i++){
        if(ans[i]==INT_MAX)cout<<-1<<" ";
        else cout<<ans[i]<<" ";
    }


    return 0;
}