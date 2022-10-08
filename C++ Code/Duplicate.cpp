#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

vector<string> solve(vector<int> heights, vector<string> name){
    int n=heights.size();
    map <int,string> m;
    for(int i=0; i<n; i++){
    m[heights[i]] = name[i];

    }
vector<string>ans;
    for(auto x:m){
    ans.push_back(x.second);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}




// map_name[key] = value




int main()
{
    vector <string> name;
    vector <int> heights;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        name.push_back(str);

    }

    for(int j=0; j<n; j++){
        int h;
        cin>>h;
        heights.push_back(h);

    }
    vector<string> ans = solve(heights,name);
    for(auto z: ans){
        cout<<z<<endl;
    }
    return 0;
}