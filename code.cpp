#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int chair,guest,c=1,i,a;
	cout<<"Enter no. of chairs = ";
	   cin>>chair;
	cout<<"Enter no.of guests = ";
	   cin>>guest;
	a=guest;

if(chair<guest)
{
       
		for(i=1;i<=chair;i++)
	    {
		c=c*a;
		a--;
	    }


	cout<<"No.of Possible arrangements of "<<guest<<" guests in "<<chair<<" chairs are "<<c<<" ";
}
else
     cout<<"Wrong Input!!! No. of chairs should be less then no.of guests ";  	      

return 0;}
