#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char *s, char *t) {
    int freq[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        if (freq[t[i] - 'a'] == 0) {
            return false;
        }
        freq[t[i] - 'a']--;
    }

    return true;
}

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    bool result = isAnagram(s, t);

    if (result) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
//929
//387
//2351
