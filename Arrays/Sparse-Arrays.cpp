#include <bits/stdc++.h>
using namespace std;

int main(){
    char input[1000][20];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input[i];
        assert(strlen(input[i]) >= 1 && strlen(input[i]) <= 20);
    }
    int q;
    char check[100];
    cin >> q;
    while(q--){
        cin >> check;
        assert(strlen(check) >=1 && strlen(check) <= 20);
        int count = 0;
        for(int i = 0; i < n; i++)
            if(strcmp(input[i], check) == 0)
                count++;
        cout << count << endl;
    }
    return 0;
}
