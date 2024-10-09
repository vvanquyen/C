#include<iostream>
using namespace std;
int main()	{
	int x, y, p, s, q;
	// nhap vao tu ban phim 
	cout<<"nhap gia tri cua x: ";
	cin>>x;
	cout<<"nhap gia tri cua y: ";
	cin>>y;
	// tính bieu thuc  
	p=x*y;
	s=x+y;
	q=(s*s) + p * (s*x) * (p+y);
	// hien ra ket qua  
	cout<<"ket qua cua p = x*y la : "<<p<<endl;
	cout<<"ket qua cua s = x + y la : "<<s<<endl;
	cout<<"ket qua cua q = s^2 + p * (s * x) * (p + y) la : "<< q <<endl;
	return 0;
	
}
