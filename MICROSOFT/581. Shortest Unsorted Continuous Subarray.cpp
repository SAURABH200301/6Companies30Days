#include<bits/stdc++.h>
using namespace std;
// [2,6,4,8,10,9,15]
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(), v.end());
        int st=0, en=v.size()-1;
        while(st<=v.size()-1 && v[st]==nums[st]){
            st++;
        }
        while(en>=0 && v[en]==nums[en]){
            en--;
        }
        if(en<0 || st>v.size()-1){return 0;}
        return en-st+1;
    }
};
int main(){
	int n;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	cout<<findUnsortedSubarray(v);
	return 0;
}
