#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  //khai báo biến
  long temp, n;
  int count = 0;
  //sử dụng dowhile để yêu cầu người dùng nhập vào só lớn hơn 0
  //nếu n < 0 thì yêu cầu nhập lại
  do
  {
    cout<<"\nNhập vào số nguyên n lớn hơn 0: ";
    cin>>n;
    if(n <= 0)
    {
      cout<<"\n Số n phải lớn hơn 0, vui lòng nhập lại !";
    }
  }while(n <= 0);
  //gán biến n cho temp, ta sẽ sử dụng temp để đếm các chữ số
  temp = n;
  //nếu n == 0 thì có 1 chữ số
  if(n == 0) count = 1;
  //nếu temp khác 0 thì sử dụng vòng lặp while để đếm số
  while(temp != 0)
  {
    //sau một vòng lặp thì count sẽ tăng lên 1
    count++;
    //chia lấy nguyên cho 10, cứ một lần chia thì số n sẽ có một chữ số
    temp = temp / 10;
  }
  cout<<"\nSố chữ số của "<<n<<" là: " << count;
 
}