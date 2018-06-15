#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,c=0,C=0;
    char a[100][100];
    // string s;


    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='Q')
                C+=9;
            if(a[i][j]=='q')
                c+=9;
            if(a[i][j]=='R')
                C+=5;
            if(a[i][j]=='r')
                c+=5;
            if(a[i][j]=='B')
                C+=3;
            if(a[i][j]=='b')
                c+=3;
            if(a[i][j]=='N')
                C+=3;
            if(a[i][j]=='n')
                c+=3;
            if(a[i][j]=='P')
                C+=1;
            if(a[i][j]=='p')
                c+=1;
        }


    }




    if(C>c)
        cout<< "White";
    else if(C<c)
        cout<< "Black";
    else
        cout<<"Draw";
}
