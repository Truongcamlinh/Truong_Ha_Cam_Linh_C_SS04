#include <stdio.h>

int main()
{
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("So %d la so duong", num);
    }
    else if (num == 0)
    {
        printf("So %d khong phai so am cung khong phai la so duong", num);
    }
    else
    {
        printf("So %d la so am", num);
    }
    return 0;
}