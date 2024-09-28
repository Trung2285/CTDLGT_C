//Đệ quy tính tổng chữ số chẵn
#include<stdio.h>
int tongChan(int n)
{
	if(n%2==0)
		if(n<10)
			return n;
		else
			return n%10 + tongChan(n/10);
	else
		return tongChan(n/10);
}
main()
{
	int n;
	scanf("%d",&n);
	printf("Tong chu so chan la : %d",tongChan(n));
}