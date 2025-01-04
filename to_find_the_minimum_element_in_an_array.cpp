/******************************to_find_the_minimum_element_in_an_array*******************************/

#include<iostream>
using namespace std;
int min(int arr[],int count)
{
    int temp=arr[0];
    for (int i = 0; i < count; i++)
    {
        if(arr[i]<temp)
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
        cout<<min(arr,size)<<" is the minimum value is present in array\n";
        return 0;

}    
