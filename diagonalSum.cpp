#include<bits/stdc++.h>
using namespace std;

// Sum of Diagonal of a Matrix in C++

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

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum+=arr[i][j];
            }
            
        }
        
    }

    cout<<sum<<endl;
    
    return 0;
}