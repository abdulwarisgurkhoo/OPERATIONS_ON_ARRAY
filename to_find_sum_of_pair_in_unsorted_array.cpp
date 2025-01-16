/****************************to_find_sum_of_pair_in_unsorted_array************************/
#include<iostream>
using namespace std;
void sum(int arr[],int count,int num)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if(arr[i]+arr[j]==num)
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<"),";

            }
        }
        
    }
    
}
int main ()
{
     int size ,num;
       cout<<"\nenter the size of array \n";
       cin>>size;
       int arr[size];
       cout<<"\nenter the elements of sorted array \n";
       for (int i = 0; i < size; i++)
       { 
             cout<<"\nenter element no. "<<i+1<<" : ";
             cin>>arr[i]; 
           
       }
       cout<<"\nenter the sum total you want to find \n";
       cin>>num;
       cout<<"\nthe combination of all number that can form the sum is : ";
       sum(arr,size,num);
       return 0;
}