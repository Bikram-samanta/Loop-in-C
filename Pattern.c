#include<stdio.h>
int main (){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int q=1;q<=nst;q++){
            printf("*");
        }
        if(i<n/2+1){
            nst++;
            nsp-=2;
        }
        else{
            nst--;
            nsp+=2;
        }
        printf("\n");
    }
    return 0;
}
