#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    vector <int> v;
    cin >> t;
    while(t--){
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                int num;
                cin >> num;
                v.push_back(num);
                break;
            case 2:
                v.pop_back();
                break;
            case 3:
                cout << *max_element(v.begin(), v.end()) << endl;
        }
    }
    
    return 0;
}

