#include<iostream>
using namespace std;
main()
{
	int n, i, j, arr[50], search, first, last, middle, temp;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
	for(i=0;i<n;++i)
        cin>>arr[i];

    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }

    cout<<"Array after bubble sort:";
    for(i=0;i<n;++i){
        cout<<" "<<arr[i];
    }

	cout<<"\nEnter a number to find :";
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
}
