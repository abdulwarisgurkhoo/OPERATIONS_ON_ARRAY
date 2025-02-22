#include<iostream>
using namespace std;
void display (int arr[],int count )
    {
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<"  ";
        }
        
    }

int ispresent (int arr[],int n,int num)
    {
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==num)
            {
                return 1;
            }
        }
       return 0;
    }
    void intersection(int a[],int m,int b[],int n)
    {
        int size=m+n;
        int c[size];
        int k=0;
        for (int i = 0; i < size; i++)
        {
            c[i]=0;
        }
        
        for (int i = 0; i < m; i++)
        {
           if(ispresent(b,n,a[i]))
           {
            c[k]=a[i];
            k++;
           }
        }
        cout<<"\nthe intersection between two arrays is : ";
        display(c,k);

    }
 void unite(int a[],int m,int b[],int n)
    {
        int size=m+n;
        int c[size];
        for (int i = 0; i < size; i++)
        {
            c[i]=0;
        }
        int k=0;
        if(m>=n)
        {
            for (int i = 0; i < m; i++)
            {
                c[k]=a[i];
                k++;
            }
            for (int i = 0; i < n; i++)
            {
                if(!ispresent(c,m,b[i]))
                {
                    c[k+i]=b[i];
                    k++;
                }
            }
            
            
        }
        else if (n>m )
        {
            for (int i = 0; i < n; i++)
            {
                c[k]=b[i];
                k++;
            }
            for (int i = 0; i < m; i++)
            {
                if(!ispresent(c,n,a[i]))
                {
                    c[k+i]=a[i];
                }
            }
            
            
        }
        cout<<"\n\nthe union of two arrays is : ";
        display(c,k);
        
    }

int main ()
{
    int size1,size2;
        cout<<"\njenter the size of ist array\n";
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
        intersection(arr1,size1,arr2,size2);
        unite(arr1,size1,arr2,size2);
        return 0;

}