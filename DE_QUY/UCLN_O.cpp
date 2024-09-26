// Tìm UCLN theo pp Ơcolit 
#include<stdio.h>
int UCLN_O(int a,int b)
{
	if(a%b==0)
		return b;
	else
		return UCLN_O(b,a%b);
}
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("UCLN la : %d",UCLN_O(a,b));
}