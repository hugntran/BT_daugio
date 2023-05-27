#include <stdio.h>

void main() {
	int i;
	int chiphi[7];
	int max=0, sum=0, tien = 1000;
	
	printf ("Nhap chi phi:\n");
	for (i=0; i<7; i++) 
	{
		printf ("Chi phi thu %d: ", i+2);
		scanf("%d", &chiphi[i]);
		sum += chiphi[i];
		if (i==0)
		max = chiphi[i];
		else 
		if (max < chiphi[i])
		max = chiphi[i];
	}
	printf ("--------Summary--------\n");
	printf ("Tong chi phi tuan: %d\n", sum);
	if (sum <= tien)
	printf ("Trong ngan sach\n");
	else 
	printf ("KHONG DU TIEN\n");
	printf ("Chi phi cao nhat: %d", max);
	return;
}
