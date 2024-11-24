#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Moi ban nhap 3 canh cua tam giac.\n");
    printf("Canh thu nhat: ");
    scanf("%f", &a);
    printf("Canh thu hai: ");
    scanf("%f", &b);
    printf("Canh thu ba: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b)
        printf("La 3 canh tam giac");
    else
        printf("Khong phai 3 canh tam giac");
    return 0;
}