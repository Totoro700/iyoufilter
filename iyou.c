#include <ctype.h>

void remove_spaces(char* s) {
    char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}
// i suck at c so prob doesn't work eeeeee
const char* iyou(char[] msg) {
	char[] m;
	for(int i = 0; m[i]; i++){
		m[i] = tolower(m[i]);
	}
	return "i " + remove_spaces(m) + " you";
}