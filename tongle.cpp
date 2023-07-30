#include<stdio.h>
#include<math.h>
int main()
{
    //khai bao bien N
    int N;
    //khai bao bien gan
    int gan;
    //Khai bao bien dem = 0 
    int tong = 0;
    do
    {
        //Nhap vao du lieu cua N
        printf("\nNhap N: ");
        scanf("%d", &N);
    }while(N < 0 && printf("\nLoi: n >= 0 !"));//Neu N<0 yeu cau nhap lai
    // khai bao gan = N
    gan = N;
    while(gan != 0)//Neu biên gan con khac 0 thuc hien vong lap
    {
        if(gan%2==1)//kiem tra bien gan la so le
        {
            tong = tong + gan%10;//bien tong tang len gan%10
        }
        gan = gan / 10;//bien gan chia 10
    }
    //in bien tong ra man hinh
    printf("\nTong cac chu so le cua %d la %d",N, tong);
}