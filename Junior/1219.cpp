#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int a[9];
	int n;
	cin>>n;
	deque<int>v;
	while(n--)
	{
		for(int i=0;i<9;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<9;i++)
		{
			if(a[i]>=a[0])
			{
				v.push_back(a[i]);            //尾插
			}
			else
			{
				v.push_front(a[i]);          //头插
			}
		}
		for(deque<int>::iterator it=v.begin();it<v.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		v.clear();              //重置容器
	}
}
