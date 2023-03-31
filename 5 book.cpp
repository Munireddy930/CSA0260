#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[100];
    char author[100];
    float price;
};

int main() 
{
struct book[5];
    int i;

    printf("Enter the details of 5 books:\n");
    for(i = 0; i < 5; i++) {
        printf("\nbook %d:\n", i+1);
        printf("title: ");
        scanf("%s",[i].title);
        printf("author: ");
        scanf("%s", [i].author);
        printf("Price: ");
        scanf("%f", [i].price);
    }

    printf("\ndetails of the 5 books:\n");
    for(i = 0; i < 5; i++)
	 {
        printf("\nbook %d:\n", i+1);
        printf("title: %s\n", li].title);
        printf("author: %s\n", [i].author);
        printf("Price: $%.2f\n", [i].price);
        
    
	
	
	}
