#include<bits/stdc++.h>
using namespace std;

int main()
{
	int days,y,m,d;

    cin>>days;

	y=days/365;
	days=days%365;
	m=days/30;
	d = days % 30;

	printf("%d years\n",y);
	printf("%d months\n",m);
	printf("%d days\n",d);
	return 0;
}
