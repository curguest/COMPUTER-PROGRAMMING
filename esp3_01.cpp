#include<iostream.h>
void main()
{
	int x,y;
	cout<<"请输入：";
	cin>>x;
	if(x>1000)
		y=1;
	else
	{
	 if(x>100)
		y=2;
	 else
	 {
	 if(x>10)
		 y=3;
	else
		y=4;}
	}
	switch(y)
	{
	case 1:cout<<"1000以上\n";break;
	case 2:cout<<"100~999\n";break;
	case 3:cout<<"10~99\n";break;
    default:cout<<"小于10\n";
	}
}

