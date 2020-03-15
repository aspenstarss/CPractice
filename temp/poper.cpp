#include "bits/stdc++.h"
#define F           first
#define S           second
#define endl        "\n"
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(),x.end()
#define memset(a,b) memset(a,b,sizeof(a));
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;

void swap(int* a, int* b){
    int t = a;
    a = b;
    b = t;
}
// int swap(vector<int> &a, int index1, int index2){

// }

int main()
{
    vector<int> a{3,2,1};
    int i,j;
    for(i=2;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            int t;
            if(a[j]>a[j+1])
            {
                // t=a[j+1];
                // a[j+1]=a[j];
                // a[j]=t;
                swap(&a[j], &a[j+1]);
            }
        }
    }
    

    return 0;
}