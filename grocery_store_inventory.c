#include <stdio.h>
#include <conio.h>
void main() {
    struct date {
                int day;
                int month;
                int year;
        };
        struct details {
                char name[20];
                int price;
                int code;
                int qty;
        };
        struct details item[50];
        int n,i;
        printf("Enter number of items:");
        scanf("%d",&n);
        fflush(stdin);
        for (i=0;i<n;i++) {
                fflush(stdin);
                printf("Item name:");
                scanf("%[^\n]",item[i].name);
                fflush(stdin);
                printf("Item code:");
                scanf("%d",&item[i].code);
                fflush(stdin);
                printf("Quantity:");
                scanf("%d",&item[i].qty);
                fflush(stdin);
                printf("price:");
                scanf("%d",&item[i].price);
                fflush(stdin);
        }
   printf("             *****  INVENTORY *****\n");
   printf("------------------------------------------------------------------\n");
   printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE  |\n");
   printf("------------------------------------------------------------------\n");
   for (i=0;i<n;i++)
      printf("  %d      %-15s    %-d         %-5d     %-5d   \n",i+1,item[i].name,item[i].code,item[i].qty,item[i].price);
        printf("------------------------------------------------------------------\n");
        getch();
}
