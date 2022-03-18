/*输入三个字符串，按由小到大的顺序输出 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void print(string s);
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
//	无脑操作 
//	string max=a;
//	string mid=b;
//	string min=c;
//	if(a>b)
//	{
//		if(b>c)
//		{
//			max=a;
//			mid=b;
//			min=c;
//		}
//		else if(a<c)
//		{
//			max=a;
//			mid=a;
//			min=b;
//		}
//	}
//	if(a<b)
//	{
//		if(a>c)
//		{
//			max=b;
//			mid=a;
//			min=c;
//		}
//		else if(c>b)
//		{
//			max=c;
//			mid=b;
//			min=a;
//		}
//	}
//	cout<<min<<endl<<mid<<endl<<max<<endl;

//	  
//   STL尝试排序算法sort 
	vector<string> s;
	s.push_back(a);
	s.push_back(b);
	s.push_back(c);
	sort(s.begin(),s.end());
	for_each(s.begin(),s.end(),print);
	
	return 0;	 
} 
 
void print(string s)
 {
 	cout<<s<<endl;
 }
