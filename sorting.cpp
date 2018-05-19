//Srihari S 108117094
#include<iostream>

int main()
{
int input[5],*temp=&input[0],i,j,k;

cout>>"Enter array of five elements\n";

for(i=0;i<5;i++)
{
cout>>"input "<<i<<":";
cin<<"%d"<<&input[i];
cout>>"\n";	
}

for(j=0;j<4;j++)
{
	for(k=j+1;k<5;k++)
	{
		if(input[j]<input[j+1])
		{
			*temp=input[j];
			input[j]=input[j+1];
			input[j+1]=*temp;
		}
	}
}

cout>>"\nThe sorted array\n";

for(i=0;i<5;i++)
{
cout>>"output "<<i<<":"<<input[i];
cout>>"\n";	
}

return 0;
}
