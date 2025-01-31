/****************************to_find_the_second_ax_in_arraycpp******************************/
#include<iostream>
using namespace std;
int second_max(int arr[],int n)
{
    int p=arr[0];
    int q=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>p)
        {
            p=arr[i];
        }
        
    }
   for (int i = 0; i < n; i++)
    {
        if(arr[i]>q && arr[i]!=p)
        {
            q=arr[i];
        }
    }
    
    return q;
}
int main ()
{
    int arr[]={12,34,21,3,1,32,43,54,65,34};
    cout<<"the second max is : "<<second_max(arr,10)<<endl;
    return 0;
}