// C++ program to demonstrate lower_bound()
// and upper_bound() in set of Pairs

#include <bits/stdc++.h>
using namespace std;

// Function to implement lower_bound()
void findLowerBound(vector<pair<int, int> >& arr,pair<int, int>& p)
{

    // Given iterator points to the
    // lower_bound() of given pair
    auto low = lower_bound(arr.begin(),
                           arr.end(), p);

    cout << "lower_bound() for {1, 2}"
         << " is: {" << (*low).first << ", "
         << (*low).second << "}" << endl;
}

// Function to implement upper_bound()
void findUpperBound(
    vector<pair<int, int> >& arr,
    pair<int, int>& p)
{

    // Given iterator points to the
    // lower_bound() of given pair
    auto up = upper_bound(arr.begin(),
                          arr.end(), p);

    cout << "upper_bound() for {1, 2}"
         << " is: {" << (*up).first << ", "
         << (*up).second << "}" << endl;
}

// Driver Code
int main()
{

    // Given sorted vector of Pairs
    vector<pair<int, int> > s;

    // Insert pairs in set
    s.push_back(make_pair(3, 3));
    s.push_back(make_pair(1, 2));
    s.push_back(make_pair(2, 1));
    s.push_back(make_pair(8, 9));

    // Given pair { 1, -2 }
    pair<int, int> p = { 3, -10 };

    // Function Call to find lower_bound
    // of pair p in arr
    findLowerBound(s, p);

    // Function Call to find upper_bound
    // of pair p in arr
    findUpperBound(s, p);

    return 0;
}
