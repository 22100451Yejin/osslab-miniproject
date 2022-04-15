#include <stdio.h>
#include <string.h>
#include "manager.h"


int readProduct(Product p){
  printf("%s  %s  %s  %d  %d\n",p.name,p.explain,&p.weight,p.price,p.delivery);
    return 1;
    
}//하나의 제품을 출력하는 함수


int listProduct(Product *p, int index){

  printf("제품명  설명  중량  판매가격  배송방법\n");  
  for(int i=0;i<index;i++){
        printf("[%d]\n",i+1);
        readProduct(p[i]);
    }
    return 1;
}

void searchname(Product *p, int count){
    char search[20];
    printf("검색할 제품의 이름을 입력하세요: ");
    scanf("%s",search);

    for(int i=0;i<count;i++){
        if(strstr(p[i].name,search)){
            readProduct(p[i]);
        }
    }
} //제품 이름을 검색하는 함수


void searchprice(Product *p, int count){
    int search;
    printf("검색할 제품의 가격을 입력하세요: ");
    scanf("%d",&search);

    for(int i=0;i<count;i++){
        if(p[i].price == search){
           readProduct(p[i]);
        }
    }
} //제품 가격을 검색하는 함수


void searchdelivery(Product *p, int count){
    int search;
    printf("검색할 제품의 배송 방법을 입력하세요: ");
    scanf("%d",&search);

    for(int i=0;i<count;i++){
        if(p[i].delivery == search){
            readProduct(p[i]);
        }
    }
} //제품 배송 방법을 검색하는 함수

void saveData(Product *p, int count){
    FILE *fp;
    fp=fopen("product.txt","wt");

    for(int i=0;i<count;i++){
        fprintf(fp,"제품명:%s 설명:%s 중량:%s 판매가격:%d 배송방법:%d\n",p[i].name,p[i].explain,&p[i].weight,p[i].price,p[i].delivery);
    }

    fclose(fp);
} //FILE에서 데이터를 저장하는 함수

int loadData(Product *p){
    FILE *fp;
    fp=fopen("product.txt","rt");
    int i;

    for(i=0;i<100;i++){
        fscanf(fp," %[^\ns]",p[i].name);
        if(feof(fp)) break;
        fscanf(fp," %[^\ns]",p[i].explain);
        fscanf(fp,"%s",&p[i].weight);
        fscanf(fp,"%d",&p[i].price);
        fscanf(fp,"%d",&p[i].delivery);
    }

    fclose(fp);
    return i;

} //FILE에서 데이터를 불러오는 함수
