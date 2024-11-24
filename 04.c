#include <stdio.h>

int main()
{
    int month;
    printf("Nhap vao so thang: ");
    scanf("%d", &month);

    if (month > 0 && month <= 12)
    {
        if (month == 2)
            printf("Thang %d co 28 ngay.", month);
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            printf("Thang %d co 31 ngay.", month);
        else
            printf("Thang %d co 30 ngay.", month);
    }
    else
        printf("Thang nhap vao khong hop le.");
}
