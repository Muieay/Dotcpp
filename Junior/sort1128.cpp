#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
//	STL
//	int n=4;
//	vector<int> v;
//	while(n--)
//	{
//		int a;
//		cin>>a;
//		v.push_back(a);
//	}
//	sort(v.begin(),v.end());
//	for(vector<int>::iterator it=v.begin();it<v.end();it++)
//	{
//		cout<<*it<<endl;
//	}

//基本算法
	int a[4]={0};
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	 } 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a[i]<a[j])
			{
				int tamp=0;
				tamp=a[j];
				a[j]=a[i];
				a[i]=tamp;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		cout<<a[i]<<endl;
	 } 
	 
} 
