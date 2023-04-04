#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    long long n = 0;
    char arr[11] = { 0 };
    scanf("%lld", &n);
    int i = 0;
    int count = 0;
    
    while (n > 0)
    {
        if (3 == count)
        {
            arr[i] = ',';
            count = 0;
            i += 1;
        }
        arr[i] = (n % 10) + '0';
        n = n / 10;
        count++;
        i++;
        
    }
    for (--i;i>=0;i--)
    {
        
        printf("%c", arr[i]);
    }
   
    return 0;
}

//int main()
//{
//	char arr1[101] = { 0 };
//	char arr2[101] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	int flag = 0;
//	int i = 0;
//	int j = 0;
//	while (i < strlen(arr1))
//	{
//		flag = 0;
//		j = 0;
//		while (j < strlen(arr2))
//		{
//			if (arr1[i] == arr2[j])
//			{
//				flag = 1;
//				break;
//			}
//			j++;
//		}
//		if (0 == flag)
//		{
//			printf("%c", arr1[i]);
//		}
//		i++;
//	}
//	
//	return 0;
//}