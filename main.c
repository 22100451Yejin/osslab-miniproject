#include <stdio.h>
#include <string.h>
#include "manager.h"

int main(void){
    Product p[100];
    int count, menu, index; 

#ifdef DEBUG
   printf("DEBUG MODE!\n");
#endif
    
    while (1){
        
        menu = smenu();
        
        if (menu == 0) break;

        if (menu == 1){
          count=count+creatProduct(&p[index++]);
          }

        else if (menu == 2){
          int num;
          printf("몇번째 값을 출력할까요?: ");
          scanf("%d",&num);
          readProduct(p[num-1]);
        }

        else if (menu == 3){
          if(count>0){
#ifdef DEBUG
printf("\nDEBUG! 전체 갯수: %d\n",count);
#endif

            listProduct(p,index);
        }
	}

        else if (menu == 4){
          searchname(p,index); 
            }

        else if (menu == 5){
          searchprice(p,index);

        }

        else if (menu == 6 ){
          searchdelivery(p,index); 
        }

	else if (menu == 7){
		saveData(p,index);
	}

    }
      return 0;
}

