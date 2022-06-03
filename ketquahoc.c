#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  lythuyet, thuchanh, baitaplon;
	int x, n; 
	//n la buoi hoc di hoc, n la tong so buoi hoc
	
	printf ("Nhap vao tong so buoi cua mon hoc: ");
	scanf ("%d", &n);
	printf ("Nhap vao so buoi hoc sinh di hoc: ");
	scanf ("%d", &x);

	
	if (x<(n/4)) {
	printf ("hoc lai");
	} 
	else {
		
	printf ("Nhap vao diem Ly Thuyet: ");
	scanf ("%f", &lythuyet);
	
	if (lythuyet < 8) {	printf ("Ban phai thi lai mon Ly Thuyet\n");
		}
		else printf ("Chuc mung ban da hoan thanh mon Ly Thuyet\n");
				
	printf ("Nhap vao diem Thuc Hanh: ");
	scanf ("%f", &thuchanh);
	
	if (thuchanh <6 ){	printf ("Ban phai thi lai mon Thuc Hanh\n");
		}
		else printf ("Chuc mung ban da hoan thanh mon Thuc Hanh\n");
	
	printf ("Nhap vao diem Bai Tap Lon: ");
	scanf ("%f", &baitaplon);
	
	if (baitaplon < 4) {printf ("Ban phai thi lai mon Bai Tap Lon\n");
		}
	else {	printf ("Chuc mung ban da hoan thanh Bai Tap Lon\n");
		}
	
	if ((lythuyet >= 8) &&(thuchanh >= 6) && (baitaplon >= 4))	{
	printf ("Ban da hoan thanh khoa hoc");
}
	return 0;
}
}
