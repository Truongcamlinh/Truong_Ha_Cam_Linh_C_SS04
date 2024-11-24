#include <stdio.h>

int main()
{
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("So %d la so chan.", num);
    else
        printf("So %d la so le.", num);
        
    return 0;
}