// Tìm UCLN theo pp Trừ dần 
#include<stdio.h>
#include<math.h>
int UCLN_TD(int a,int b)
{
	if(a == b)
		return a;
	else
		return UCLN_TD(a,abs(a-b));
}
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("UCLN la : %d",UCLN_TD(a,b));
}