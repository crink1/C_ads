#include <stdio.h>
/*
int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    //ɾ�� - Ҫɾ����Ԫ������Ϊ0
    for(i=0; i<n; i++)
    {
        if(arr[i] == del)
            arr[i] = 0;
    }
    for(i=0; i<n; i++)
    {
        if(arr[i] != 0)
            printf("%d ", arr[i]);
    }

    return 0;
}*/
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    //ɾ�� - Ҫɾ����Ԫ������Ϊ0
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//            printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int y = 0;
//    int m = 0;
//    //31 28 31 30 31 30 31 31 30 31 30 31
//    //   29 
//    int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30,31, 30, 31 };
//    //              0  1   2   3   4   5 
//    while (scanf("%d %d", &y, &m) == 2)
//    {
//        int day = days[m];
//        if ((m == 2) && ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
//        {
//            day += 1;
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}


//typedef struct {
//    int a;
//    char b;
//    short c;
//    short d;
//}AA_t;
//
//int main()
//{
//    printf("%d\n", sizeof(AA_t));
//    return 0;
//}
//
//
//#pragma pack(4)
//
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()


//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//
////1+1+1
//struct _Record_Struct
//{
//    unsigned char Env_Alarm_ID : 4;
//    unsigned char Para1 : 2;
//    unsigned char state;
//    unsigned char avail : 1;
//}*Env_Alarm_Record;
//
//int main()
//{
//    //struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//    int m = sizeof(struct _Record_Struct) * MAX_SIZE;
//    printf("%d\n", m);
//
//    return 0;
//}
//


//enum ENUM_A
//{
//    X1,
//    Y1,
//    Z1 = 255,
//    A1,
//    B1,
//};
//
//int main()
//{
//    enum ENUM_A enumA = Y1;
//    enum ENUM_A enumB = B1;
//    printf("%d %d\n", enumA, enumB);
//    return 0;
//}
//
//#pragma pack(4)
//
//struct A
//{
//    int a;
//    short b;
//    int c;
//    char d;
//};
//struct B
//{
//    int a;
//    short b;
//    char c;
//    int d;
//};
//
//#pragma pack()
//
//int main()
//{
//    printf("%d\n", sizeof(struct A));
//    printf("%d\n", sizeof(struct B));
//
//    return 0;
//}

//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    printf("%2x %2x %2x %2x\n", puc[0], puc[1], puc[2], puc[3]);
//    printf("%x %x %x %x\n", puc[0], puc[1], puc[2], puc[3]);
//
//    return 0;
//}
//