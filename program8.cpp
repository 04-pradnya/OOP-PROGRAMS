#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> marks = {50, 80, 60};

    // Sorting
    sort(marks.begin(), marks.end());

    cout << "Sorted marks: ";
    for(int m : marks)
        cout << m << " ";

    cout << endl;

    // Searching using find_if
    auto i = find_if(marks.begin(), marks.end(),
                     [](int m) { return m > 60; });

    if(i != marks.end())
        cout << "Found: " << *i << endl;
    else
        cout << "Not Found" << endl;

    // Transforming elements
    transform(marks.begin(), marks.end(), marks.begin(),
              [](int m) { return m + 5; });

    cout << "Updated: ";
    for(int m : marks)
        cout << m << " ";

    cout << endl;

    // Ordered Map
    map<int, int> a;
    a[1] = 80;

    // Unordered Map
    unordered_map<int, int> b;
    b[2] = 90;

    cout << "Map: " << a[1] << endl;
    cout << "Unordered Map: " << b[2] << endl;

    return 0;
}