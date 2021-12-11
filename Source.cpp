#include<stdio.h>
#include<conio.h>
void main()
{
    int mang[20], b[20], p[20], i, j, nb, np, temp, lowest = 9999;
    static int barray[20], parray[20];
    printf("\n\t\t\tSo do quan ly bo nho - Best Fit");
    printf("\nNhap so khoi:");
    scanf("%d", &nb);
    printf("Nhap so luong tien trinh:");
    scanf("%d", &np);
    printf("\nNhap kich thuoc cac khoi:\n");
    for (i = 1; i <= nb; i++)
    {
        printf("Khoi %d:", i);
        scanf("%d", &b[i]);
    }
    printf("\nNhap kich thuoc cac tien trinh :\n");
    for (i = 1; i <= np; i++)
    {
        printf("Tien trinh %d:", i);
        scanf("%d", &p[i]);
    }
    for (i = 1; i <= np; i++)
    {
        for (j = 1; j <= nb; j++)
        {
            if (barray[j] != 1)
            {
                temp = b[j] - p[i];
                if (temp >= 0)
                    if (lowest > temp)
                    {
                        parray[i] = j;
                        lowest = temp;
                    }
            }
        }
        mang[i] = lowest;
        barray[parray[i]] = 1;
        lowest = 10000;
    }
    printf("\nTien trinh so\tkich thuoc tien trinh\tKhoi nho\tKich thuoc khoi\t\tPhan mang");
    for (i = 1; i <= np && parray[i] != 0 ; i++)
        printf("\n%d\t\t%d\t\t\t%d\t\t%d\t\t%d", i, p[i], parray[i], b[parray[i]], mang[i]);
    getch();
}