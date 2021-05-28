/*backtracKing
10101
11111
01010
10011
11101
*/
#include<iostream>
using namespace std;

bool safe( int** arr,int x, int y,int n)
{
	if(x<n&&y<n && arr[x][y]==1){
		return true;
	}
}

bool rateinmaze( int arr,int x, int y,int n,int** solarr)
{
	if(x==n-1 &&y==n-1)
	{
		solarr[x][y]=1;             //base case
		return true;
	}
	
}



	if(safe(arr,x,y,n))
	{
		solarr[x][y]==1;
		if(rateinmaze(arr,x+1,y,n,solarr))
		return true;
		
		if(rateinmaze(arr,x,y+1,n,solarr))
		return true;
		
		solarr[x][y]=0;   //backtracking
         	return false;
	}
	return false;
}



int main()
{
	int n;
	cin>>n;
	
	int arr=new int[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		cin>>arr[i][j];
	}
	
	int solarr=new int[n];
	for(int i=0;i<n;i++){
		solarr[i]=new int[n];
		for(int j=0;j<n;j++)
		solarr[i][j]=0;
	}
	
	
	if(ratinmaze(arr,0,0,n,solarr)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			{
				cout<<solarr[i][j]<<" ";
			}cout<<endl;
		}
	}
}


