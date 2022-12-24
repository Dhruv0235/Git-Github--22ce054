//This program is written by Dhruv Kotadiya(22CE054)
#include<stdio.h>
union library
{
    int access;
    char BookTitle[20];
    char Author[20];
    int Price;
    int flag;
}Book;
int main()
{
    int i,j,k;
    printf("Enter the Accession Number :");
    scanf("%d",&Book.access);
    printf("The Accession Number : %d",Book.access);
    printf("\n\nEnter the Book Title :");
    fflush(stdin);
    gets(Book.BookTitle);
    printf("The Book Title :");
    puts(Book.BookTitle);
    printf("\nEnter the Author Name :");
    fflush(stdin);
    gets(Book.Author);
    printf("The Author Name:");
    puts(Book.Author);
    printf("\nEnter the Price :");
    scanf("%d",&Book.Price);
    printf("The Price : %d",Book.Price);
    printf("\n\nEnter the Flag :");
    scanf("%d",&Book.flag);
    if(Book.flag==1)
    {
        printf("\nThe Book is issued.");
    }
    if(Book.flag==0)
    {
        printf("\nThe Book is not issued.");
    }
    printf("\n\nThis program is written by Dhruv Kotadiya(22CE054)");
    return 0;
}



