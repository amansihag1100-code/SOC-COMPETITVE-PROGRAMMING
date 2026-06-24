#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;                          // number of movies
    cin >> n;

    vector<pair<int,int>> movies;   // {start, end}

    for(int i = 0; i < n; i++) {

        int a, b;
        cin >> a >> b;

        movies.push_back({a, b});   // store interval
    }

    // sort by ending time (GREEDY IDEA)
    sort(movies.begin(), movies.end(),
         [](auto &x, auto &y){
             return x.second < y.second;
         });

    int count = 0;                  // number of movies watched
    int lastEnd = 0;                // last selected movie end time

    for(auto m : movies) {

        if(m.first >= lastEnd) {    // no overlap

            count++;                // select movie
            lastEnd = m.second;     // update end time
        }
    }

    cout << count;

    return 0;
}