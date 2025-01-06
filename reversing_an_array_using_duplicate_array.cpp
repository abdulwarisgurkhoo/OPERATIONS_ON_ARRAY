/*******************************************reversing_an_array_using_duplicate_array********************************/
#include<iostream>
using namespace std;
void print(int arr[],int count)
{
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
void duplicate(int arr[],int brr[],int size)
{
    int n=size-1;
    for (int i = 0; i < size; i++)
    {
        brr[i]=0;
    }
    
    for (int i = 0; i < size; i++)
    {
        brr[n]=arr[i];
        n--;

    }
    cout<<"reverse array is \n";
        print(brr,size);
}
int main ()
    {
         int size;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"enter the elements of array";
        for (int i = 0; i < size; i++)
        {
            cout<<"eneter element "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;

        }
        cout<<"the array you enter is \n";
       print(arr,size);
        cout<<endl;
        int brr[size];
        duplicate(arr,brr,size);
    }