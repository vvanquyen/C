#include<iostream>
using namespace std;
int main()	{
	int so, so_hang_chuc, so_hang_donvi, tong;
	cout<<"nhap vao mot so co 2 chu so la: ";
	cin>>so;
	
	so_hang_chuc = so/10; 
	so_hang_donvi= so%10;
	tong=so_hang_chuc + so_hang_donvi;
	cout<<"tong cua 2 chu so la: "<< tong <<endl;
	return 0;
}
