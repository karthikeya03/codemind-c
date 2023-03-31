#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], concatenated_string[200];
    int i, j, k, length1, length2;

    scanf("%s", string1);
    scanf("%s", string2);

    length1 = strlen(string1);
    length2 = strlen(string2);
    for (i = 0; i < length1; i++) {
        concatenated_string[i] = string1[i];
    }
    for (j = 0; j < length2; j++) {
        concatenated_string[i+j] = string2[j];
    }
    concatenated_string[i+j] = NULL;

    length1 = strlen(concatenated_string);
    for (i = 0; i < length1-1; i++) {
        for (j = i+1; j < length1; j++) {
            if (concatenated_string[i] > concatenated_string[j]) {
                char temp = concatenated_string[i];
                concatenated_string[i] = concatenated_string[j];
                concatenated_string[j] = temp;
            }
        }
    }
    printf("%s", concatenated_string);

    return 0;
}
