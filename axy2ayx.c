#include<stdio.h>
void fun1(int a[][4]);
void main() {
	int i,j,a[4][4]={{100,200,300,400},{500,600,700,800},{900,1000,1100,1200},{1300,1400,1500,1600}};
	printf("The original array:\n");
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++)
			printf("%7d",a[i][j]);
		printf("\n");
	}
	fun1(a);
	printf("The exchanged array:\n");
	for(i=0;i<4;i++) {
		for(j=0;j<4;j++)
			printf("%7d",a[i][j]);
		printf("\n");
	}
}

void fun1(int a[4][4]) {
	int i,j,t;
	for(i=0;i<4;i++)
		for(j=i;j<4;j++) {
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
}
