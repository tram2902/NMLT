#include<stdio.h>
#include<conio.h>
#define Dongiatuan 500000
#define Dongianay  100000
void main()
{
	int ngay;
	Dongiatuan, Dongianay;
	printf("Tong ngay");
	scanf("%d", &ngay);
	int tongtuan = ngay / 7;
	int ngayle = ngay % 7;
	//Tính tiền phải trả dựa vào tổng tiền thuê theo tuần và tiền thuê theo ngày lẻ.
	int tien = tongtuan * Dongiatuan;
	int tien1= ngayle * Dongianay;
	int tien2 = tien + tien1;
	printf("Tien khach phai tra tuan la: %d\n", tien);
	printf("Tien khach phai tra ngay la: %d\n", tien1 );
	printf("Tien khach phai tra tat ca la: %d\n", tien2);
	getch();

}
