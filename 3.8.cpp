#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.14;
int main()	{
	double degress, radian,sinvalue, cosvalue, tanvalue, cotvalue;
	cout<<"nhap goc do: ";
	cin>>degress;
	
	//chuyen do sang radian
	radian=degress*pi/180;
	sinvalue= sin(radian);
	cosvalue= cos(radian);
	tanvalue= tan(radian);
	// kiem tra gia tri cua tan, khong the tinh neu tan = 0
	if(tanvalue !=0)	{
		cotvalue= 1/tanvalue;
	}else	{
		cotvalue= NAN;
	}
	
	cout << "sin(" << degress << "°) = " << sinvalue <<endl;
	cout << "cos(" << degress << "°) = " << cosvalue <<endl;
	cout << "tan(" << degress << "°) = " << tanvalue <<endl;
	if(!isnan(cotvalue))	{
		cout << "cot(" << degress << "°) = " << cotvalue <<endl;
	}else	{
		cout << "cot(" << degress << "°) khong xac dinh" <<endl;
	}
	return 0;
}
