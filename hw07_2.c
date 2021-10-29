//
// Created by joyce on 2021/10/26.
#include <stdio.h>

int main(){
    unsigned long long int m,m2,n,s=1,p=1,i=1,result;

    do {
        scanf("%llu %llu",&m,&n);
    }while( n<1 || m<n || 30<=m);

    m2=m;
    if(m!=n){
    while (m2>n) {
        s*=m2;
        --m2;
    }
    while(i<=(m-n)){
        p*=i;
        ++i;
    }
    result=s/p;
    } else result=0;

    printf("%llu",result);
    return 0;
}
//

