#include<iostream>
using namespace std;
int find(int arr[],int n)
{
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    return temp;
}
void duplicate(int arr[],int count)
{
     int max=find(arr,count);
     int H[max];
     for (int i = 0; i < max+1; i++)
     {
        H[i]=0;
     }
     for (int i = 0; i < count; i++)
     {
        H[arr[i]]++;
     }
     cout<<"\nthe duplicate no. and there frequencies are \n";
     for (int i = 0; i < max+1; i++)
     {
        if(H[i]>1)
        {
             cout<<i<<" is present "<<H[i]<<" times"<<endl;

        }
     }
     
     
}
int main ()
{
    int size;
    cout<<"\nenter the size \n";
    cin>>size;
    int arr[size];
    cout<<"\nenter the elements of array \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"\nenter the element no  "<<i+1<<" : ";
        cin>>arr[i];
    }
   
    duplicate (arr,size);

   
    return 0;

}