#include<bits/stdc++.h>
using namespace std;

// Check Symmetric Matrix in C++

int main(){

    int row, col;
    cin>>row>>col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != arr[j][i] )
            {
                cout<<"Not symmetric"<<endl;
                return 0;
            }
            
        }
        
    }

    cout<<"symmetric"<<endl;
    return 0;
    
}