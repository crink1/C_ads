#include <stdio.h>

//�⺯������һ��������strchr

//���ڷ���1
//�����ڷ���0
int is_exist(char* str, char ch)
{
    while (*str)
    {
        if (*str == ch)
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int main() {
    char arr1[100] = { 0 };
    char arr2[100] = { 0 };

    gets(arr1);
    gets(arr2);

    //��ӡ
    int i = 0;
    while (arr1[i])
    {
        //if(is_exist(arr2, arr1[i]) == 0)
        if (strchr(arr2, arr1[i]) == NULL)
        {
            printf("%c", arr1[i]);
        }
        i++;
    }
    return 0;
}