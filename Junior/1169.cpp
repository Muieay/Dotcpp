#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void print(int a)
{
	cout<<a<<" ";
}
bool temp(int a,int b)
{
	return fabs(a)>fabs(b);
}
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		vector<int>v;
		int shu=0;
		for(int i=0;i<n;i++)
		{
			cin>>shu;
			v.push_back(shu);
		}
		sort(v.begin(),v.end(),temp);
		for_each(v.begin(),v.end(),print);
	}

}
