#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b;
    cout<<"Nhap 2 so a, b:\n";
    cin>>a>>b; 
    cout<<"\nBan da nhap:\n a = "<<a <<"\n b = "<< b;
  
    swap(a, b);
  
     cout<<"\n\nSau khi swap:\n a =  "<< a<<"\n b = "<< b;
    return 0;
}
