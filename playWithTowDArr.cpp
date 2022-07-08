#include<bits/stdc++.h>
using namespace std;
// Get by Row or Colum from 2D Array

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

    // get any col value
    // int reqCol;
    // cin>>reqCol;

    // for (int i = 0; i < row; i++)
    // {
    //     cout<<arr[i][reqCol-1] << " ";
    // }

    // get any row value
    int reqRow;
    cin>>reqRow;

    for (int i = 0; i < col; i++)
    {
        cout<<arr[reqRow-1][i] << " ";
    }

    cout<<endl;
    
    return 0;
}
