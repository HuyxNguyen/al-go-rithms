//find greatest common factor
//GCD
//use recursion
//a and b
//input from keyboard
#include<iostream>
using namespace std;
int GCD(int a, int b)
{
	if( b == 0)
	return a;
	return GCD(b,a%b);
}
int main()
{
	int a, b;
	cout<<"Input a:";
	cin>>a;
	cout<<"Input b:";
	cin>>b;
	cout<<endl;
	cout<<GCD(a,b);
}
