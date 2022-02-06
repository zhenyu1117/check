#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n,a[1000],b[1000],c[11000],d[1000],x,y;

int main(){
    scanf("%d",&n);
    for (int i = 1;i <= n;i++){
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    } 
    
    scanf("%d%d",&x,&y);
    for (int i = n;i >= 1;i--){
        int g = a[i] + c[i];
        int h = b[i] + d[i];
        if (x >= a[i] && y >= b[i] && x <=g && y <=h)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    
    printf("-1\n");
    return 0;
    
}
