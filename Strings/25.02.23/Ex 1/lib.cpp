int mystrlen(const char* str)
{
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

char* mystrcpy(char* str1, const char* str2)
{
    char* temp = str1;
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return temp;
}

char* mystrcat(char* str1, const char* str2)
{
    char* temp = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return temp;
}

char* mystrchr(char* str, char s)
{
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        str++;
    }
    if (*str == s) {
        return str;
    }
    return 0;
}

char* mystrstr(char* str1, char* str2)
{
    while (*str1 != '\0') {
        char* temp = str1;
        char* substr = str2;
        while (*str1 != '\0' && *substr != '\0' && *str1 == *substr) {
            str1++;
            substr++;
        }
        if (*substr == '\0') {
            return temp;
        }
        str1 = temp + 1;
    }
    return 0;
}