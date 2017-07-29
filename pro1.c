#include<stdio.h>
#define N 10	
void fun1(int a[][N]);
void pfun(int b[][N]);
void main() {
int a[N][N];
printf("Original array:\n");
int i,j;
for( i=0;i<N;i++) {
	for( j=0;j<N;j++) {
		a[i][j]=rand()%30*10;		;
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
printf("exchanged array:\n");
fun1(a);
pfun(a);

for(i=0;i<N;i++)
	for(j=i;j<N;j++) {
		a[i][j]=j*10+i;
		a[j][i]=i*10+j;
	}
pfun(a);
}

void fun1(int a[N][N]) {
	int t,i,j;
	for( i=0;i<N;i++)
		for( j=i+1;j<N;j++) {
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
}

void pfun(int b[N][N]) {
	int i,j;
	for( i=0;i<N;i++) {
		for (j=0;j<N;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
	printf("\n");
}
