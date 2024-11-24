#include <stdio.h>

int main()
{
    int firstNum, secondNum, thirdNum;
    printf("Nhap vao 3 so nguyen: ");
    printf("\nSo nguyen thu nhat: ");
    scanf("%d", &firstNum);
    printf("So nguyen thu hai: ");
    scanf("%d", &secondNum);
    printf("So nguyen thu ba: ");
    scanf("%d", &thirdNum);

    if ((thirdNum > (firstNum < secondNum ? firstNum : secondNum)) &&
        (thirdNum < (firstNum > secondNum ? firstNum : secondNum)))
        printf("So %d nam trong khoang giua %d va %d", thirdNum, firstNum, secondNum);
    else
        printf("So %d khong nam trong khoang giua %d va %d", thirdNum, firstNum, secondNum);
}