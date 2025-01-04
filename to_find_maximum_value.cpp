/**********************************to_find_maximum_value*****************************/
#include<iostream>
using namespace std;
int max(int arr[],int count)
{
    int temp=arr[0];
    for (int i = 0; i < count; i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    return temp;

}
int main ()
{
     int size;
        cout<<"enter the size of array\n";
        cin>>size;
        int arr[size];

        cout<<"enter the elements of array \n";
        for (int i = 0; i < size; i++)
        {
            cout<<"enter element no. "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;
        }
        cout<<max(arr,size)<<" is the maximum value is present in array\n";
        return 0;

}    
