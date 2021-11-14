//Problem E: Shortest Distance (20)
/*
#include <cstdio>

int main(){
    int N,M;
    scanf("%d", &N);
    int D[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &D[i]);
    }
    scanf("%d", &M);
    while(M--){
        int a,b,dist1 = 0, dist2 = 0,A[N] = {0};
        scanf("%d %d", &a, &b);
        int t1 = (a<b?a:b);
        int t2 = (a>b?a:b);
        for(int i = t1-1; i < t2-1; i++){
            dist1 += D[i];
            A[i] = 1;
        }
        for(int i = 0; i < N; i++){
            if(A[i] == 0)
                dist2 += D[i];
        }
        printf("%d\n", (dist1<dist2?dist1:dist2));
    }
    return 0;
}

  这一版的代码提交到OJ上一直都报超时，但是跑样例又能通过，后来发现是算法的问题，这个算法的时间复杂度差不多是O(N*M)，
  放到OJ上就会超时。所以需要进一步优化，看了网上其他人的答案，实际上这道题可以优化到O(N)。*/

  /*
    优化思想：
    因为只要知道每一个点到第一个点的距离，即可以通过作差知道任意两点间的距离，所以在第一遍输入数据的时候，可以通过一个循环
    来算出其余各点到第一点的距离，并保存在一个一维数组中。在环上，每个点到每个点都有两条路径，上面这个方法算出了第一条路径的
    距离，所以第二条路径的长度，只需用环的周长减去第一条路径的长度即可。
  */

  //优化后：

#include <cstdio>
int main(){
    int N,M,A[100010],D[100010],total = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &D[i]);
        total += D[i];          //计算环的总距离
        A[i+1] = A[i] + D[i];       //将第一个点到每个点的距离保存在一维数组中
    }
    scanf("%d",&M);
    while(M--){
        int a,b,dist1,dist2;
        scanf("%d %d", &a, &b);
        int t1 = (a<b?a:b);
        int t2 = (a>b?a:b);         //确保下标是大减小
        dist1 = A[t2] - A[t1];
        dist2 = total - dist1;
        printf("%d\n", (dist1<dist2?dist1:dist2));
    }
    return 0;
}
