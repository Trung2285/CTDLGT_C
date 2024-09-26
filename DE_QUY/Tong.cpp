// Tính tổng từ 1 -> n bằng đệ quy
#include<stdio.h>
int tong(int n)
{
	if(n==1)
		return 1;
	else
		return n + tong(n-1);
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%d",tong(n));
}