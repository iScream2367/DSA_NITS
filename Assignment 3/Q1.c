#include<stdio.h>
#include<string.h>
#define ll long long int
#define m 1000000009
#define p 31

ll getHash(char *s) {
    ll hash_value = 0;
    ll p_pow = 1;
    for (int c=0;c<strlen(s);c++) {
        hash_value = (hash_value + (s[c] - 'A' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }

    return hash_value;
}

int main()
{
    char s[1000];
    printf("Enter the String (upper case only)\n");
    scanf("%[^\n]s",s);
    printf("Hash value: %lld",getHash(s));

    return 0;
}