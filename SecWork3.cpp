// SecWork3.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include <iostream>
using namespace std;

int DiG(int x,int y)
{
	
	return (y==1)? x:(x*DiG(x,y-1));
}
int main()
{
	double x,y;
	cout<<"input the x,y";
	cin>>x>>y;
	cout<<DiG( x,y);
	cin>>x;


}

