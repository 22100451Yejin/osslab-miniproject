#include <stdio.h>
#include <string.h>
#include "product.h"

int readProduct(Product p); //하나의 제품을 출력하는 함수
int listProduct(Product *p, int count); //전체 등록된 제품 리스트를 출력하는 함수
void searchname(Product *p, int count); //제품 이름을 검색하는 함수
void searchprice(Product *p, int count); //제품 가격을 검색하는 함수
void searchdelivery(Product *p, int count); //제품 배송 방법을 검색하는 함수
void saveData(Product *p, int count); //FILE에서 데이터를 불러오는 함수

