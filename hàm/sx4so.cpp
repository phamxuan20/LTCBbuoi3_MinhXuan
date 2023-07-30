#include<iostream>
using namespace std;
int sapxep (int a,int b);
int main ()
{
	int a,b,c,d;
	cout <<"Nhap 4 so nguyen bat ky: " <<endl;
    cin >>a >>b >>c >>d;
    sapxep(a,b);
    sapxep(a,c);
    sapxep(a,d);
    sapxep(b,c);
    sapxep(b,d);
    sapxep(c,d);
    cout <<a <<" " <<b <<" " <<c <<" " <<d;
    }
int sapxep (int a,int b)
{
	int t;
	if(a<b)
	{
	t=a;
	a=b;
	b=t;
	}
	}