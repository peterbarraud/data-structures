// trying-data-structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// required for the cout and cin functions
#include <iostream>
#include<conio.h>
using namespace std;

void selection_sort()
{
	int a[20], n, i, j, t, min, p;
	cout << "\nEnter no of elements in Array";
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cout << "\nEnter no ";
		cin >> a[i];
	} cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
	for (i = 0; i<n; i++)
	{
		min = a[i];
		p = i;
		for (j = i; j<n; j++)
		{
			if (a[j]<min)
			{
				min = a[j];
				p = j;
			}
		} t = a[i];
		a[i] = a[p];
		a[p] = t;
	}
	cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
}
void bubble_sort()
{
	int a[20], n, i, j, t;
	cout << "\nEnter no of elements in A ";
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cout << "\nEnter no ";
		cin >> a[i];
	} cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
	for (i = 0; i<n; i++)
		for (j = 0; j<n - i - 1; j++)
			if (a[j]>a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
}
void merge_two_arrays()
{
	int arr1[100], arr2[100], arr3[100];
	int i = 0, j = 0, k = 0, size1, size2;
	cout << "\n enter no of element of arr1 ";
	cin >> size1;
	for (i = 0; i<size1; i++)
	{
		cout << "\n enter no. ";
		cin >> arr1[i];
	}
	cout << "\n enter no of element of arr2 ";
	cin >> size2;
	for (i = 0; i<size2; i++)
	{
		cout << "\n enter no. ";
		cin >> arr2[i];
	}
	cout << "\n arr1 ";
	for (i = 0; i<size1; i++)
		cout << " " << arr1[i];
	cout << "\n arr2 ";
	for (i = 0; i<size2; i++)
		cout << " " << arr2[i];
	i = 0; j = 0; k = 0;
	while (i<size1 && j<size2)
	{
		if (arr1[i]<arr2[j])
			arr3[k++] = arr1[i++];
		else if (arr2[j]<arr1[i])
			arr3[k++] = arr2[j++];
		else
			i++;
	}
	while (i<size1)
		arr3[k++] = arr1[i++];
	while (j<size2)
		arr3[k++] = arr2[j++];
	cout << "\n arr3 ";
	for (i = 0; i<k; i++)
		cout << " " << arr3[i];
}
void sequence_sort_or_insertion_sort()
{
	int a[20], n, i, j, t;
	cout << "\nEnter no of elements in A ";
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cout << "\nEnter no ";
		cin >> a[i];
	} cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
	for (i = 0; i<n; i++)
		for (j = i + 1; j<n; j++)
			if (a[i]>a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
}
void linear_search()
{
	int Arr[100], n, val, found;
	cout << "Enter number of elements you want to insert ";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "Enter element " << i + 1 << ":";
		cin >> Arr[i];
	}
	cout << "Enter the number you want to search ";
	cin >> val;
	for (int i = 0; i < n; i++)
	{
		if (Arr[n] == val)
		{
			cout << "Your item " << val << " was found in the array";
			found = 1;
		}

	}
	if (found == 0)
	{
		cout << "Your item " << val << " was not found in the array";

	}	
}
void binary_search()
{
	int a[20], n, i, no, low = 0, high, mid, f = 0;
	cout << "\nEnter no of elements ";
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cout << "\nEnter no ";
		cin >> a[i];
	} cout << "\n\n";
	for (i = 0; i<n; i++)
		cout << " " << a[i];
	cout << "\nEnter no to be search ";
	cin >> no;
	high = n - 1;
	while (low <= high && f == 0)
	{
		mid = (low + high) / 2;
		if (a[mid] == no)
		{
			cout << "\n\n" << no << " store at " << mid + 1;
			f = 1;
			break;
		}
		else if (no>a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	} if (f == 0)
		cout << "\n\n" << no << " does not exist";
	
}
int main()
{
	getchar();
    return 0;
}

