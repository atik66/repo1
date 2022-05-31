#include<bits/stdc++.h>

using namespace std;

int main()
{



    int n,m,i,j,a,b;
    cin>>n>>m;

    char c[n+1][m+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            c[i][j]='O';
        }

    }
    int q;
    cin>>q;

    for(i=0; i<q; i++)
    {

        cin>>a>>b;
          c[a][b]='X';

            if(a-1>=1){
                if(c[a-1][b]=='O'){
                c[a-1][b]='X';
                }
                else{
                   c[a-1][b]='O';
                }
        }
            if(a+1<=n){
                if(c[a+1][b]=='O'){
                  c[a+1][b]='X';
                }
                else{
                   c[a+1][b]='O';
                }


            }
            if(b-1>0)
               {
                  if(c[a][b-1]=='O'){
                    c[a][b-1]='X';
                }
                else{
                   c[a][b-1]='O';
                }
               }

            if(b+1<=m)

               { if(c[a][b+1]=='O'){
                   c[a][b+1]='X';
                }

                else{
                   c[a][b+1]='O';
                }


               }





    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<c[i][j];
        }
        cout<<endl;

    }




    return 0;
}
