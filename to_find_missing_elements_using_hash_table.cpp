/**********************************************to_find_missing_elements_using_hash_table.cpp******************/
#include<iostream>
using namespace std;
void max(int arr[],int count)
    {
        int temp =arr[0];
        for (int i = 0; i < count; i++)
        {
            if(arr[i]>temp)
            {
                temp=arr[i];
            }
        }
        return temp;

    }
 void miss(int arr[],int count)
    {
        int temp=max(arr,count);
        int h[temp];
        for (int i = 0; i < temp; i++)
        {
            h[i]=0;
        }
        for (int i = 0; i < count; i++)
        {
            int s=arr[i];
            h[s]=1;
        }
        for (int i = 0; i < temp; i++)
        {
            if(a[i]!=1)
            {
                cout<<h[i]<<"  ";
            }
        }
        

    }   