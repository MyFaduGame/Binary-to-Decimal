#include<stdio.h>
int main()
{
	int i,temp0,temp1,r,j=1,decimal=0;
	printf("Enter an binary number: ");
	scanf("%d",&i);
	temp0=i;
	while(i>0)
	{
		r=i%10;
		temp1=r*j;
		decimal+=temp1;
		j*=2;
		i/=10;
	}
	printf("Binary number: %d\nDecimal number: %d\n",temp0,decimal);
	return 0;
}
