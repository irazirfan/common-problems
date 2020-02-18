#include <iostream>
using namespace std;

int n, arr[100];

int RemoveDuplicates(int a[], int size)
{
    int prev = 0;
    for(int i=0; i<size; ++i)
    {
        if(a[i] != a[prev])
            a[++prev] = a[i];
    }
    
    return prev;
}

void Sort(int a[])
{
    for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

    
int main(){
 
    cin>>n;
    
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    Sort(arr);
    
    int count = RemoveDuplicates(arr, sizeof(arr)/sizeof(*arr));
    for(int i=0; i<count; ++i)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
