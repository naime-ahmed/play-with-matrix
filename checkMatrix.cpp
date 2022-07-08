#include<bits/stdc++.h>
using namespace std;

// 4-5 Check Diagonal, Scalar, Identity Matrix in C++

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

// Program to check is this matrix Diagonal or not
    // if (row != col)
    // {
    //     cout<<"No"<<endl;
    //     return 0;
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i==j)
    //         {
    //             continue;
    //         }
    //         if (arr[i][j]>0)
    //         {
    //             cout<<"No"<<endl;
    //             return 0;
    //         }
            
    //     }
        
    // }
    // cout<<"Yes"<<endl;


// Program to check is this matrix Scalar or not

    if (row != col)
    {
        cout<<"No"<<endl;
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                continue;
            }
            if (arr[i][j]>0)
            {
                cout<<"No"<<endl;
                return 0;
            }
            
        }
        
    }

    int save;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                if (i == 0 && j == 0)
                {
                    save = arr[i][j];
                }
                else{
                    if (save != arr[i][j])
                    {
                        cout<<"Not scaler"<<endl;
                        return 0;
                    }
                    
                }
                
            }
            
        }
        
    }
    cout<<"Scaler"<< endl;

    return 0;
    
}