#include <stdlib.h>
#include <string.h>

int computeHD(char* s1, char* s2) {
    int hamDist = 0;
    int i = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    while ((i != len1 + 1) && (i != len2 + 1)) {
        if (s1[i] != s2[i]) {
            hamDist++;
        }
        i++;
    }
    return hamDist;
}

int main() {
    char* s1 = "Univers";
    char* s2 = "Universally";
    int hd = computeHD(s1, s2);
    printf("hd: %d\n", hd);
    // free(s1);
    // free(s2);

    return 0;
}