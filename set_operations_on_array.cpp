/****************************SET OPERATION (UNION,intersection) BETWEEN 2 ARRAYS***************/
#include <iostream>
using namespace std;
void display(int arr[], int count)
{

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << "  ";
    }
}
int ispresent(int arr[], int count, int num)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

void union_arr(int a[], int m, int b[], int n)
{
    int size = m + n;
    int c[size];

    for (int i = 0; i < size; i++)
    {
        c[i] = 0;
    }
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        if (!ispresent(a, m, b[i]))
        {
            c[k] = b[i];
            k++;
        }
    }

    display(c, k);
}

void intersection_arr(int a[], int m, int b[], int n)

{
    int c[m + n], k = 0;
    // Copy common elements to c[]
    for (int i = 0; i < m; i++)
    {
        if (ispresent(b, n, a[i]))
        {
            c[k++] = a[i];
        }
    }
    // Display intersection of arrays
    display(c, k);
}
int main()
{

    int size1, size2;
    cout << "enter the size of ist array\n";
    cin >> size1;
    int arr1[size1];
    cout << "\nenter the no. of elements of ist array \n";
    for (int i = 0; i < size1; i++)
    {
        cout << "\nenter the element no. " << i + 1 << " : ";
        cin >> arr1[i];
    }

    cout << "enter the size of 2nd array\n";
    cin >> size2;
    int arr2[size2];
    cout << "\nenter the no. of elements of 2nd array \n";
    for (int i = 0; i < size2; i++)
    {
        cout << "\nenter the element no. " << i + 1 << " : ";
        cin >> arr2[i];
    }
    union_arr(arr1, size1, arr2, size2);
    return 0;
}
