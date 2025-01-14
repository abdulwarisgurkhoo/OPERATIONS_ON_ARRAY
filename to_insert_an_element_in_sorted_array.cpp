/**************************to insert element in sorted array******************/
#include<iostream>
using namespace std;
void display (int arr[],int count)

    {
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<"   ";
        }
        
    }
void insert(int arr[],int count,int num)
    {
        int i=count-1;
        while(arr[i]>num)
            {
               arr[i+1]=arr[i];
               
                i--;
            } 
            arr[i+1]=num;
                     
                    
                      count++;
                      display(arr,count);
            
    }    

 int main ()
    {
        int size,len,num;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"enter the length of array\n";
        cin>>len;

        cout<<"\nenter the elements of array \n";
        for (int i = 0; i < len; i++)
        {
           cout<<"\nenter element no. "<<i+1<<" : ";
           cin>>arr[i];
        }
       cout<<"\nenter the number you want to insert\n";
       cin>>num;
       insert(arr,len,num);
      
        return 0;
    }       