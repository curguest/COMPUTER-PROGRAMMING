#include<iostream.h>
void main()
{
	int i;
	cout<<"请输入:"<<endl;
	cin>>i;
    if(i<10)
		cout<<"小于10\n";
	else
	{
		if(i<100)
		  cout<<"99~100\n";
		else
		{
		 if(i<1000)
			 cout<<"100~999\n";
		 else
			 cout<<"1000以上\n"<<endl;
		}
	}
}
