#include <string.h>
#include <ctype.h>

long long vowel_recognition(const char *s) {
    long long total = 0;
    long long n = strlen(s);

    for (long long i = 0; i < n; i++) {
        char c = tolower(s[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            total += (i + 1) * (n - i);
        }
    }

    return total;
}