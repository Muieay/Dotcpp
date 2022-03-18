//对10个整数从小到大排序
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void prin(int i)
{
	cout<<i<<endl;
}
int main()
{
	int shu;
	vector<int> arr;
	for(int i=0;i<10;i++)
	{
		cin>>shu;
		arr.push_back(shu);
	}
	sort(arr.begin(),arr.end());
	for_each(arr.begin(),arr.end(),prin);
}
