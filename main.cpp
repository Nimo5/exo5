#include <iostream>

using namespace std;

void read( int n  ,int**t ){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"["<<i<<"]["<<j<<"]= ";
            cin>>t[i][j];

        }

    }
}
void min_val(int n,int *Min,int** t,int *ii,int *jj ){
    *Min=t[0][0];
    *ii=0;
    *jj=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(*Min>t[i][j]){
            *Min=t[i][j];
            *ii=i;
            *jj=j;

    }
        }

        }

}
void swamp(int**t,int**v,int*ii,int*jj,int*iii,int*jjj){
int h;
h =t[*ii][*jj];
t[*ii][*jj]=v[*iii][*jjj];
v[*iii][*jjj]=h;

}
void Sort(int n , int** t,int *ii,int*jj){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"["<<i<<"]["<<j<<"]= ";
            cout<<t[i][j];
            cout<<endl;

        }

    }
    cout<<"the cheng is in rows "<<*ii<<" columns "<<*jj;
}
int main()
{
    int n,m;
    cout<<"cive me n  of A :";
cin>>n;

    int Min1,rows1,columns1;
    int Min2,rows2,columns2;
    int** A=new int*[n];
    int** B=new int*[n];
    for(int i=0;i<n;i++){
        B[i]=new int[n];
        A[i]=new int[n];
        }
read(n,A);
cout<<"cive me n of B :";
cin>>m;
read(m,B);
min_val(n,&Min1,A,&rows1,&columns1);
min_val(n,&Min2,B,&rows2,&columns2);
swamp(A,B,&rows1,&columns1,&rows2,&columns2);
cout<<"-------------------------------"<<endl;
cout<<" sort A :";
cout<<endl;
Sort(n,A,&rows1,&columns1);
cout<<endl;
cout<<"-------------------------------"<<endl;
cout<<" sort B :";
cout<<endl;
Sort(n,B,&rows2,&columns2);

    delete []A;
 delete []B;
    return 0;
}
