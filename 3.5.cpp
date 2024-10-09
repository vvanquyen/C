#include<iostream>
using namespace std;
int main()	{
	double v0, a, t, v;
	// nhap vao a, t, v0 
	cout<<"van toc ban dau cua oto la [m/s]: ";
	cin>>v0;
	cout<<"gia toc cua oto la`[m/s²]: ";
	cin>>a;
	cout<<"thoi gian oto di duoc la [s]: ";
	cin>>t;
	// tinh van toc  
	v=v0 + a*t;
	cout<<"van toc cuoi cung` cua oto la`:"<< v <<"m/s";
	return 0;
}
