//https://codeforces.com/problemset/problem/2020/A#:~:text=Problem%20%2D%202020A%20%2D%20Codeforces&text=You%20are%20given%20two%20integers,any%20non%2Dnegative%20integer%20x.
#include <stdio.h>
#include <math.h>
int main() {
    int n,k; scanf("%d %d",&n,&k);
if(k==1){printf("%d\n",n); }
if(n<k){printf("%d",n); }
if(n%k==0){printf("1\n"); }
int i; 
for(i=0;i<30;i++){
  if(n-pow(k,i)<0){break;}
}
n=n-pow(k,i-1);
 int c=1; 
for(int j=i-1;j>=0;j--){ printf("%d\n %d\n",n,c);
    while(n!=0){
        if(n<0){n=n+pow(k,j); c--; break;}
        n=n-pow(k,j);
        c++;
    }
}
printf("%d\n",c);

    return 0;
}