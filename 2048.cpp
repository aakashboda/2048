#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int b[4][4],r,a,i,j,n,score;
	char asdw;
	unsigned first=time(NULL);
	srand(first);
	//create base
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			b[i][j]=0;
		}
	}
	//display base
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<4;j++)
//		{
		//	cout<<b[i][j]<<"\t";
//		}
//		cout<<endl;
//		cout<<endl;
//	}

	
	for(n=1;n<1000;n++)
	{
		
		cout<<"press w-up,s-down,a-left,d-right "<<"your score = "<<n<<endl<<endl;
	
gen:
	
	r=rand()/100%16+1;
//	cout<<"r= "<<r<<endl;
	if(r==1)
	{
		if(b[0][0]==0)
		{
			b[0][0]=2;
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==2)
	{
		if(b[0][1]==0)
		{
			b[0][1]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==3)
	{
		if(b[0][2]==0)
		{
			b[0][2]=2;
		
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==4)
	{
		if(b[0][3]==0)
		{
			b[0][3]=2;
		
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==5)
	{
		if(b[1][0]==0)
		{
			b[1][0]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==6)
	{
		if(b[1][1]==0)
		{
			b[1][1]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==7)
	{
		if(b[1][2]==0)
		{
			b[1][2]=2;
		
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==8)
	{
		if(b[1][3]==0)
		{
			b[1][3]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==9)
	{
		if(b[2][0]==0)
		{
			b[2][0]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==10)
	{
		if(b[2][1]==0)
		{
			b[2][1]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==11)
	{
		if(b[2][2]==0)
		{
			b[2][2]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==12)
	{
		if(b[2][3]==0)
		{
			b[2][3]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==13)
	{
		if(b[3][0]==0)
		{
			b[3][0]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==14)
	{
		if(b[3][1]==0)
		{
			b[3][1]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==15)
	{
		if(b[3][2]==0)
		{
			b[3][2]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
	if(r==16)
	{
		if(b[3][3]==0)
		{
			b[3][3]=2;
			
		}
		else
		{
			goto gen;	
		}
	}
	else{}
		//display base
		for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==0&&j==0)
			{
				cout<<"_________________________________"<<endl<<endl;
			}
			else{
			}
			if(j==0)
			{
				cout<<"|";
			}
			else{
			}
			
			if(b[i][j]==0)
			{
				cout<<" \t"<<"|";
			}
			else
			{
			cout<<"   "<<b[i][j]<<"\t"<<"|";
			}
		}
	
		cout<<endl;
		cout<<"_________________________________";
		cout<<endl;
		cout<<endl;
	}
wrong:	asdw=getchar();
	if(asdw=='s')
	{
	for(i=3;i>=1;i--)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]==0)
			{
				b[i][j]=b[i-1][j];
				b[i-1][j]=0;
			}
		}
	}
	for(i=3;i>=1;i--)
	{
		for(j=0;j<4;j++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i-1][j];
				b[i-1][j]=0;
			}
		}
	}
	for(i=3;i>=1;i--)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]==b[i-1][j]&&b[i][j]!=0)
			{
				b[i][j]=b[i][j]+b[i-1][j];
				b[i-1][j]=1;
				
			}
			else if(b[i][j]==0)
			{
				b[i][j]=b[i-1][j];
				b[i-1][j]=0;
			}
		}
	}
		
	for(i=0;i<=3;i++)
	{
	for(j=0;j<=3;j++)
	{
		if(b[i][j]==1)
		{
			b[i][j]=0;
		}
		}	
	}
	for(i=3;i>=1;i--)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]==0)
			{
				b[i][j]=b[i-1][j];
				b[i-1][j]=0;
			}
		}
	}
	for(i=3;i>=1;i--)
	{
		for(j=0;j<4;j++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i-1][j];
				b[i-1][j]=0;
			}
		}
	}
	}
	else if(asdw=='w')
	{
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]==0)
			{
				b[i][j]=b[i+1][j];
				b[i+1][j]=0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i+1][j];
				b[i+1][j]=0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]==b[i+1][j]&&b[i][j]!=0)
			{
				b[i][j]=b[i][j]+b[i+1][j];
				b[i+1][j]=1;
				
			}
			else if(b[i][j]==0)
			{
				b[i][j]=b[i+1][j];
				b[i+1][j]=0;
			}
		}
	}
		
	for(i=3;i>=0;i--)
	{
	for(j=0;j<=3;j++)
	{
		if(b[i][j]==1)
		{
			b[i][j]=0;
		}
		}	
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[i][j]==0)
			{
				b[i][j]=b[i+1][j];
				b[i+1][j]=0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i+1][j];
				b[i+1][j]=0;
			}
		}
	}
	}
	//it's aaaaaaaaaaaaaaaaaaa
	else if(asdw=='a')
	{
	for(j=2;j>=0;j--)
	{
		for(i=0;i<4;i++)
		{
			if(b[i][j]==0)
			{
				b[i][j]=b[i][j+1];
				b[i][j+1]=0;
			}
		}
	}
	for(j=2;j>=0;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j+1];
				b[i][j+1]=0;
			}
		}
	}
		for(j=2;j>=0;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j+1];
				b[i][j+1]=0;
			}
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<4;i++)
		{
			if(b[i][j]==b[i][j+1]&&b[i][j]!=0)
			{
				b[i][j]=b[i][j]+b[i][j+1];
				b[i][j+1]=1;
				
			}
		
		}
	}
		
	for(j=0;j<=3;j++)
	{
	for(i=0;i<=3;i++)
	{
		if(b[i][j]==1)
		{
			b[i][j]=0;
		}
		}	
	}
	for(j=2;j>=0;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j+1];
				b[i][j+1]=0;
			}
		}
	}
	for(j=2;j>=0;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j+1];
				b[i][j+1]=0;
			}
		}
	}
	}
	else if(asdw=='d')
	{
		for(j=3;j>=1;j--)
	{
		for(i=0;i<4;i++)
		{
			if(b[i][j]==0)
			{
				b[i][j]=b[i][j-1];
				b[i][j-1]=0;
			}
		}
	}
	for(j=3;j>=1;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j-1];
				b[i][j-1]=0;
			}
		}
	}
	for(j=3;j>=1;j--)
	{
		for(i=0;i<4;i++)
		{
			if(b[i][j]==b[i][j-1]&&b[i][j]!=0)
			{
				b[i][j]=b[i][j]+b[i][j-1];
				b[i][j-1]=1;
				
			}
			else if(b[i][j]==0)
			{
				b[i][j]=b[i][j-1];
				b[i][j-1]=0;
			}
		}
	}
		
	for(j=0;j<=3;j++)
	{
	for(i=0;i<=3;i++)
	{
		if(b[i][j]==1)
		{
			b[i][j]=0;
		}
		}	
	}
	for(j=3;j>=1;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j-1];
				b[i][j-1]=0;
			}
		}
	}
	for(j=3;j>=1;j--)
	{
		for(i=0;i<4;i++)
		{
		if(b[i][j]==0)
			{
				b[i][j]=b[i][j-1];
				b[i][j-1]=0;
			}
		}
	}
	
	}
	else
	{
		goto wrong;
	}
	
	
}

	return 0;
}
