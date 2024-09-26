// Tính n! = đệ quy
#include<stdio.h>
int giaithua(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n * giaithua(n-1);
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%d",giaithua(n));
}