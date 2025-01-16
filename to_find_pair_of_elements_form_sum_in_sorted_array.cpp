/************************************to_find_pair_of_elements_in_sorted_array***************************/
#include<iostream>
using namespace std;
int sum(int a[],int count,int num)
{
    int i=0,j=count-1;
    while(i<j)
    {
        if(a[i]+a[j]==num)
        {
            cout<<"("<<a[i]<<","<<a[j]<<"),";
            i++;
            j--;
        }
        else if(a[i]+a[j]<num)
        {
                i++;
        }
        else
        {
            j--;
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