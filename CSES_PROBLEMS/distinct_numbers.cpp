#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;                          // number of elements
    cin >> n;

    vector<int> arr(n);            // input array

    set<int> st;                   // set stores only unique values

    for(int i = 0; i < n; i++) {

        cin >> arr[i];            // read element

        st.insert(arr[i]);        // insert into set (duplicates ignored)
    }

    cout << st.size();            // size of set = number of distinct elements

    return 0;
}