#include <iostream>
using namespace std;

bool sort(int arr[],int n)
{

     if(n==1)
    return true;

    bool restarray =sort(arr+1,n-1);
    return(arr[0]<arr[1] && restarray);

}
int main()
{
   int arr[]={1,2,3,4,5};
   cout<<sort(arr,5)<<endl;
}