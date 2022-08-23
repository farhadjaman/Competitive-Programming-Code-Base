
//increment
#include<bits/stdc++.h>
using namespace std;
int main()
{
int array[] = {10, 35, 85, 93, 62, 77, 345, 43, 2, 10};
int n = sizeof(array)/sizeof(array[0]);
// 'sizeof' gives the size of total array i.e. size of each character * no. of characters
// so to get no. of characters
// we divide the sizeof(array) with the size of any one character of the array
// here it is array[0]
sort(array, array+n);
cout << "nArray after sorting using "
"default sort is : n";
for (int i = 0; i < n; ++i)
cout << array[i] << " ";
return 0;
}

//decrement
#include<bits/stdc++.h>
using namespace std;
int main()
{
int array[] = {41, 53, 4, 459, 60, 7, 23, 4, 232, 10};
int n = sizeof(array)/sizeof(array[0]);
sort(array, array+n, greater<int>());
cout << "Array after sorting : n";
for (int i = 0; i < n; ++i)
cout << array[i] << " ";
return 0;
}
