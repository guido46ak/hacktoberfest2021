#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1,c1,r2,c2,i,j,k;

    cout<<"Enter Row And Column size of 1st Matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter Row And Column size of 2nd Matrix"<<endl;
    cin>>r2>>c2;

    if (c1!=r2)
        cout<<"Multiplication is not possible";

    cout<<"Enter elements of 1st matrix"<<endl;
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        {
            cout<<"Enter element a"<< i + 1 << j + 1 <<" : ";
            cin>>a[i][j];
        }


    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        {
            cout<<"Enter element a"<< i + 1 << j + 1 <<" : ";
            cin>>b[i][j];
        }

    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            mult[i][j]=0;
            for(k=0;k<c1;++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    
    cout<<"Multiplication of an given matrix "<<endl;
     for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            cout<<" "<<mult[i][j];
            if(j == c2 -1)
                cout<<endl;
        }
    return 0;
}   