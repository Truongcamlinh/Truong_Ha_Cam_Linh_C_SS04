#include <stdio.h>

int main()
{
    float oldIdx, newIdx, totalAmount;
    printf("Nhap chi so cong tu dien dau thang: ");
    scanf("%f", &oldIdx);
    printf("Nhap chi so cong tu dien cuoi thang: ");
    scanf("%f", &newIdx);

    float cost = newIdx - oldIdx;

    if (cost < 0)
    {
        printf("Cac chi so nhap vao khong hop le.");
        return 1;
    }
    if (cost < 50)
        printf("Tien dien can phai tra: %.2f", cost * 10000);
    else if (cost < 100)
        printf("Tien dien can phai tra: %.2f", 50 * 10000 + (cost - 50) * 15000);
    else if (cost < 150)
        printf("Tien dien can phai tra: %.2f", 50 * 10000 + 50 * 15000 + (cost - 100) * 20000);
    else if (cost < 200)
        printf("Tien dien can phai tra: %.2f", 50 * 10000 + 50 * 15000 + 50 * 20000 + (cost - 150) * 25000);
    else
        printf("Tien dien can phai tra: %.2f", 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (cost - 200) * 30000);
}