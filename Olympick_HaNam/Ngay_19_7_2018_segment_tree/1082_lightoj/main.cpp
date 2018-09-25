#include <bits/stdc++.h>
#define maxn 100005
#define MAX_VALUE 999999
using namespace std;
int a[maxn],tree[4*maxn];
void Buid(int l,int r, int pos){
    if(l == r)
    {
        tree[pos]=a[l];
        return ;
    }
    int m=(l+r)/2;
    Buid(l,m,2*pos);
    Buid(m+1,r,2*pos+1);
    tree[pos]=min(tree[2*pos],tree[2*pos+1]);
}
int query(int low,int high,int qlow,int qhigh,int pos){
        if(qlow <= low && qhigh >= high){
            return tree[pos];
        }
        if(qlow > high || qhigh < low){
            return MAX_VALUE;
        }
        int mid = (low+high)/2;
        return min(query(low, mid, qlow, qhigh, 2 * pos),query(mid + 1, high, qlow, qhigh, 2 * pos + 1));
}

int main()
{
    int n,T,Q;
    scanf("%d",&T);
    for(int p=1; p<=T; p++){
        printf("Case %d: \n",p);
        scanf("%d%d",&n,&Q);
        for(int i=1; i<=n; i++) scanf("%d",&a[i]);
        Buid(1,n,1);
        while(Q--){
            int x,y; scanf("%d%d",&x,&y);
            int z=query(1,n,x,y,1);
            printf("%d \n",z);
        }
    }
    return 0;
}
