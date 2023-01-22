#include <stdio.h>
#include <ctype.h>
 
unsigned long long int N, mod;
 
int main(void){
    char c;
    unsigned long long int ans = 1; // N ^ f(-1) = N^0 = 1
 
    scanf("%llu %llu\n", &N, &mod);
 
    while (isdigit(c = getchar())){
        ans = (ans * ans) % mod;
        if (c == '1')
            ans = (ans * N) % mod;
        // si c == '0', N^c == 1, que no tiene ningún efecto.
    }
 
    printf("%llu\n", ans);
 
    return 0;
}