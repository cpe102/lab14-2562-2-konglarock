#include <iostream>
using namespace std;


int main(){
	int a =5 ;
	char b = 'A';
	char &c = b ;
	int *x= &a;
	char *y= &b;
	int **z= &x;
	


	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<(int*)y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"\n";

	cout<<"&a = "<<&a<<"\n";
	cout<<"&b = "<<(int*)&b<<"\n";
	cout<<"&c = "<<(int*)&c<<"\n";
	cout<<"&x = "<<&x<<"\n";
	cout<<"&y = "<<&y<<"\n";
	cout<<"&z = "<<&z<<"\n";
	cout<<"\n";

	c = 'F';
	cout<<"b = "<<b<<"\n";
	cout<<"\n";

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<(int*)y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"\n";

	*y='w';
	cout<<"b = "<<b<<"\n";
	cout<<"\n";

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<(int*)y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"\n";

	*x=6;
	cout<<"a = "<<a<<"\n";
	cout<<"\n";

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<(int*)y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"\n";

	**z=7;
	cout<<"a = "<<a<<"\n";
	cout<<"\n";

	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"x = "<<x<<"\n";
	cout<<"y = "<<(int*)y<<"\n";
	cout<<"z = "<<z<<"\n";
	cout<<"\n";


	
	
	return 0;
}
