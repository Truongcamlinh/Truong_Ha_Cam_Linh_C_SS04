#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);

    int dayOfMonth = 0;

    if (m > 0 && m <= 12)
    {
        if (m == 2)
        {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                dayOfMonth = 29;
            else
                dayOfMonth = 28;
        }
        else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            dayOfMonth = 31;
        }
        else
        {
            dayOfMonth = 30;
        }

        if (d > 0 && d <= dayOfMonth)
        {
            printf("Ngay thang nam nhap vao hop le.");
        }
        else
        {
            printf("Ngay thang nam nhap vao khong hop le.");
        }
    }
    else
    {
        printf("Ngay thang nam nhap vao khong hop le.");
    }

    return 0;
}
