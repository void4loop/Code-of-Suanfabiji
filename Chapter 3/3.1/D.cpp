#include <cstdio>

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        int A[1001] = {0}, even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
            if(A[i] % 2 == 0){
                even++;
            }
            else
                odd++;
        }
        if(even > odd){
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
