/************************fast merging************************************/
#include<iostream>
using namespace std;
void display (int arr[],int count )
{
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
void merge (int a[],int m,int b[],int n)
    {
        int size = m+n;
        int c[size];
        for (int i = 0; i < size; i++)
        {
            c[i]=0;
        }
        
        int i=0,j=0,k=0;
        while (i<m && j<n)
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                k++;
                i++;
            }
            else
            {
                c[k]=b[j];
                k++;
                j++;

            }
        }
        for( ; i<m;i++)
        {
            c[k]=a[i];
            k++;
        }
        for( ; j<n;j++)
        {
            c[k]=b[j];
            k++;
        }
        cout<<"\n\nthe merged array is  :  ";
        display(c,size);
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
        merge(arr1,size1,arr2,size2);
        return 0;

        
        }