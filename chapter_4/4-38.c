#include <stdio.h>
#include <string.h>
#incldue <stdlib.h>

int findnumstring(char *outputstr, char *inputstr) {
    /*temp 用于指向正在搜索中的数字字串
     final 用于指向最终的最长的数字子串
     */
    char *in = inputstr, *out = outputstr, *temp, *final;
    int count = 0, maxlen = 0;
    while (*in != '\0') { //该循环用于找到最长的字符串，初始in指向输入串
        if (*in > 47 && *in < 58) {
            for (temp = in; *in > 47 && *in < 58; in++)
                count++;
        } else
            in++;
        if (maxlen < count) {
            maxlen = count;
            final = temp;
        }
        count = 0;
    }

    for (int i = 0; i < maxlen; i++) {
        *out = *final;
        out++;
        final++;
    }
    *out = '\0';
    return maxlen;
}

int main() {
    char string[] = "abcd12345eee125ss123456789";
    char *p = (char *) malloc(strlen(string) + 1);
    int count = findnumstring(p, string);
    printf("%s\nnumber string length=%d\n", p, count);
    return 0;
}