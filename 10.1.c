//This program is written by Dhruv Kotadiya(22CE054)
#include<stdio.h>
struct BookDetail
{
    int SrNo;
    char BookTitle[20];
    char AuthorName[20];
    int Amount;
}Book;
void display(struct BookDetail Book);
int main()
{
    int i,j,k;
            printf("Enter the Serial No. for Record :",i+1);
            scanf("%d",&Book.SrNo);
            printf("Enter the Book Title for Record :",i+1);
            fflush(stdin);
            gets(Book.BookTitle);
            printf("Enter the Author Name for Record :",i+1);
            fflush(stdin);
            gets(Book.AuthorName);
            printf("Enter the Amount for Record :",i+1);
            scanf("%d",&Book.Amount);
    display(Book);
    printf("\n\nThis program is written by Dhruv Kotadiya(22CE054)");
    return 0;
}
void display(struct BookDetail Book)
{

            printf("\n\nSerial No. for Record : %d\n",Book.SrNo);
            printf("Book Title for Record : ");
            puts(Book.BookTitle);
            printf("Author Name for Record : ");
            puts(Book.AuthorName);
            printf("Amount for Record : %d\n",Book.Amount);

}



