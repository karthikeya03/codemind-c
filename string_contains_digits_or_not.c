#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int n, i, j;
    char email[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", email);
        for(j = 0; j < strlen(email); j++) {
            if((email[j]>='0' && email[j]<='9')) {
                printf("Yes
");
                break;
            }
        }
        if(j == strlen(email)) printf("No
");
    }
    return 0;
}