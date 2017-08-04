#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
typedef short  bool;
unsigned int fun1(unsigned int );
unsigned int minpn(unsigned int,bool *);
int main(int argc,char *argv[]) {
	unsigned int i,max;
	i=1;
	if (argc==1) {
		printf("Please input a max limit number:\n");
		scanf("%ld",&max);
		fun1(max);
	}
	while(argc-->1) {
		printf("argv[%d]=%s\n",i,argv[i]);
		max=(unsigned int)atoi(argv[i++]);
		fun1(max);
		}
	return 0;
}

unsigned int fun1(unsigned int limit) {
	unsigned int a,m,n,i=0;
	bool b[limit];
	for(m=0;m<=limit;m++) b[m]=True;
	b[0]=False,b[1]=False;
	for(m=2;m<limit;m=minpn(m,b))
		for(n=2,a=n*m;a<=limit;a=++n*m)
			b[a]=False;
		
	printf("Prime Numbers:\n");
	for(m=0;m<limit;m++)
		if(b[m]) {
			printf("%ld\t",m);
			i++;
		}
	printf("\ntotal prime number amounts:%ld\n\n",i);
	return i;
}

unsigned int minpn(unsigned int a,bool *b) {
	for(a+=1;!b[a];a++);	
	return a;
	}
