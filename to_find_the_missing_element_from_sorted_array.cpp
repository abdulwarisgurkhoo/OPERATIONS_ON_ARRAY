#include<iostream>
using namespace std;
int miss(int arr[],int count)
    {
        int diff=arr[0]-0;
        for (int i = 0; i < count; i++)
        {
            if(arr[i]-i != diff)
            {
                cout<<i+diff;
                break;
            }
        }
        return 0;
    }

int main ()
    {
        int a[10]={1,2,3,4,5,6,8,9,10};
        miss(a,10);
        return 0;

    }