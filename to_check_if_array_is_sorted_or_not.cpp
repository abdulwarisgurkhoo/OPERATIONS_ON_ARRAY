/******************************to_check_if_array_is_sorted_or_not*****************************/
#include<iostream>
using namespace std;
int check(int arr[],int count)
    {
        for (int i = 0; i < count; i++)
        {
           if(arr[i]>arr[i+1])
           {
            cout<<"\narray is unsorted\n"<<"end code is : ";
            return -1;
           }

            
        }
        cout<<"\narray you entered is compeletely sorted \n"<<"end code is : ";
        return 1;
        
    }
int main ()
    {
        int size;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"\nenter the elements of array \n";
        for (int i = 0; i < size; i++)
        {
           cout<<"\nenter element no. "<<i+1<<" : ";
           cin>>arr[i];
        }
       cout<< check(arr,size);
        return 0;
    }    