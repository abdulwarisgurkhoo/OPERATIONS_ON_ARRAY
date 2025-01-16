/**************************************merging_two_array_using_another_array**********************************/
#include<iostream>
using namespace std;
void display(int arr[],int count)
    {
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<"  ";
        }
        
    }
    void sort(int arr[],int count)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = i+1; j < count; j++)
                {
                    if(arr[i]>arr[j])
                    {
                        swap(arr[i],arr[j]);
                    }
                }
                
            }
            
        }
void merge(int arr1[],int size1,int arr2[],int size2)
    {
        int size=size1+size2;
        int brr[size];
        for (int i = 0; i < size; i++)
        {
            brr[i]=0;
        } 
       
        
        int i=0;
        int j=0;
        int k=0;
        while(i<size1 && j<size2)
        {
            
        }
        display(brr,size);

        
    }    

int main ()
    {
        int size1,size2;
        cout<<"enter the size of ist array\n";
        cin>>size1;
        int arr1[size1];
        cout<<"\nenter the no. of elements of ist array \n";
        for (int i = 0; i < size1; i++)
        {
            cout<<"\nenter the element no. "<<i+1<<" : ";
            cin>>arr1[i];

        }


         cout<<"enter the size of 2nd array\n";
        cin>>size2;
        int arr2[size2];
        cout<<"\nenter the no. of elements of 2nd array \n";
        for (int i = 0; i < size2; i++)
        {
            cout<<"\nenter the element no. "<<i+1<<" : ";
            cin>>arr2[i];

        }
       // sort(arr1,size1);
      //  display(arr1,size1);
       merge(arr1,size1,arr2,size2);
       return 0;

        
    }