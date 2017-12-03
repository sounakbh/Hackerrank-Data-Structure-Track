#include <iostream>
#include <climits>
using namespace std;

int main(){
    int mat[6][6], i, j;
    for(i = 0; i < 6; i++)
        for(j = 0; j < 6; j++)
            cin >> mat[i][j];
    int max = INT_MIN;
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++){
            int s = (mat[i][j] + mat[i][j+1] + mat[i][j+2] + mat[i+1][j+1] + mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2]);
            if(s > max)
                max = s;
        }
    cout << max;
    
}

