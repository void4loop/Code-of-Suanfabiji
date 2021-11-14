// Problem B: A+B

#include <cstdio>
#include <cstring>

int main(){
	char a[15],b[15];
	while(scanf("%s %s",a,b) != EOF){
		long long c = 0,d = 0,i;
		for(i = 0; i < strlen(a); i++){
			if(a[i] >= '0' && a[i] <= '9')
				c = c*10 + a[i] -'0';
		}
		if(a[0] == '-')
			c = -c;
		for(i = 0; i < strlen(b); i++){
			if(b[i] >= '0' && b[i] <= '9')
				d = d*10 + b[i] -'0';
		}
		if(b[0] == '-')
			d = -d;
		printf("%lld\n", c+d);
	}
	return 0;
}
