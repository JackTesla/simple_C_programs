#include<stdio.h>
int fun(char *s) {
	int i=0,j=0;
	while(*s) {
		j=*s-'0';
		printf("j=%d\t",j);
		if(-1<j && 10>j)
			i++;
		s++;
	}
	return i;
}

void main() {
	printf("Please input a string below:\n");
	char s[100];
	gets(s);
	printf("\nLength of this string:%d\n",fun(s));
}
