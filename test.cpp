#include<iostream>
#include<vector>
using namespace std;
int main(void){
    #ifndef ONLINE_GUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    // * for hightlighted text
    // ! errors and warnings
    // ? for query
    // todo TODO
    // // strike-through
    cout << "hello\n";
    cerr << "Hello";
    vector<vector<int>> temp;
    temp.push_back({1, 2, 3});
    
    temp.push_back({80});
    cout << temp.size() << endl;
    return 0;
}