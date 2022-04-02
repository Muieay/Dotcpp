#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n=10;
	vector<int> v;
	while(n--)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),greater<int>());
	for(vector<int>::iterator it=v.begin();it<v.end();it++)
	{
		cout<<*it<<endl;
	}

} 
