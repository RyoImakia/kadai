#include <stdio.h>

#define Studen 3
#define str "の点数を入力してください :"
#define subject_1 "国語"
#define subject_2 "理科"
#define subject_3 "社会"

void Sum(int a, int b, int c){

    int sum = a+b+c;
    printf("合計:%d ",sum);
}

void Avarage(int a, int b,int c){

    int avarage = (a+b+c)/Studen;
    printf("平均;%d",avarage);
}

int main(void){


    int kokugo,rika,syakai;

    printf("%s%s",subject_1, str);
    fflush(stdout); scanf("%d\n", &kokugo);

    printf("%s%s",subject_2, str);
    scanf("%d\n", &rika);

    printf("%s%s",subject_3, str);
    scanf("%d\n", &syakai);

    Sum(kokugo,rika,syakai);
    Avarage(kokugo, rika, syakai);
}