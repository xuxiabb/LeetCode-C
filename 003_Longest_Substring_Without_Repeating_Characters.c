#include <string.h>

int lengthOfLongestSubstring(char* s)
{
    int len = strlen(s);

    if (len == 0)
        return 0;

    int end[256];
    memset(end, 0, sizeof(int) * 256);
    int head = -1;
    int a = 1;

    for (int i = 0; i < len; i++)
    {
        head = (end[s[i]] > head) ? end[s[i]] : head;
        end[s[i]] = i;
        int str_len = i - head + 1;
        a = str_len> a ? str_len : a;
    }

    return a;
}
