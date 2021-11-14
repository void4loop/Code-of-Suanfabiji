
#include <cstdio>
int main(){
    int L,M,a,b;
    while(scanf("%d %d",&L,&M) != EOF){
        if(!L && !M)
            break;
        int num = 0;
        int str[10010] = {0};
        while(M--){
            scanf("%d %d",&a,&b);
            for(int i = a; i <= b; i++){
                str[i] = 1;
            }
        }
        for(int i = 0; i <= L; i++){
            if(str[i] == 0)
                num++;
        }
        printf("%d\n", num);
    }
    return 0;
}
