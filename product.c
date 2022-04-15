#include <stdio.h>
#include <string.h>
#include "product.h"

int smenu(){
    int menu;
    printf("\n---과일을 관리하는 쇼핑몰 프로그램---\n");
    printf("1.제품을 추가\n");
    printf("2.하나의 제품을 출력\n");
    printf("3.전체 등록된 제품 리스트 출력\n");
    printf("4.제품 이름 검색\n");
    printf("5.제품 가격 검색\n");
    printf("6.제품 배송 방법검색 \n");
    printf("7.File 에 저장\n");
    printf("8.제품 중량 검색\n");
    printf("0. 종료\n");
    printf("몇번을 실행하시겠습니까?: ");
    scanf("%d",&menu);
    return menu;
}//메뉴를 출력하는 함수

int creatProduct(Product *p){
    printf("제품명:");
    scanf("%s",p->name);
    printf("설명:");
    scanf("%s",p->explain);
    printf("중량:");
    scanf("%s",&p->weight);
    printf("판매가격:");
    scanf("%d",&p->price);
    printf("배송방법:");
    scanf("%d",&p->delivery);
    return 1;
} //제품을 추가하는 함수


