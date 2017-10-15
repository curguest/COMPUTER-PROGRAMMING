#include<iostream.h>
void main()
{
      int i,n;
      for(i=1;i<=100;i++)
	{
      n=i*i;
      if(n%10==i||n%100==i)
	  {
    cout<<i<<" ";
	  }
	}
     cout<<endl;
}