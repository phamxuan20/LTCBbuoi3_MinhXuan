#include <iostream>
using namespace std;

int main(){
    int n, tmp;
    cout<<"\nNhập vào số nguyên n : ";
    cin >> n;
    int res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    cout << res;
}