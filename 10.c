#include <stdio.h>

int main()
{
    int firstNum, secondNum, thirdNum;
    printf("Nhap vao 3 so nguyen.");
    printf("\nSo thu nhat: ");
    scanf("%d", &firstNum);
    printf("So thu hai: ");
    scanf("%d", &secondNum);
    printf("So thu ba: ");
    scanf("%d", &thirdNum);

    int tmp = 0;
    if (firstNum > secondNum)
    {
        tmp = firstNum;
        firstNum = secondNum;
        secondNum = tmp;
    }
    if (firstNum > thirdNum)
    {
        tmp = firstNum;
        firstNum = thirdNum;
        thirdNum = tmp;
    }
    if (secondNum > thirdNum)
    {
        tmp = secondNum;
        secondNum = thirdNum;
        thirdNum = tmp;
    }
    printf("%d %d %d", firstNum, secondNum, thirdNum);
}
