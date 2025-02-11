#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
char title[100];
char author[100];
char isbn[20];
int available;
}Book;
void addbook(Book**books,int*count){/*function to add the book*/
if(*books==NULL){
  *books=(Book*)malloc(sizeof(Book));
   printf("enter title\n");
   fgets((*books)->title,100,stdin);
   printf("enter author\n");
   fgets((*books)->author,100,stdin);
   printf("enter isbn\n");
   fgets((*books)->isbn,20,stdin);
   (*books)->available=1;
}
else{*books=(Book*)realloc(*books,(*count+1)*sizeof(Book));
          printf("enter title\n");
          fgets((*books+(*count))->title,100,stdin);
           printf("enter author\n");
          fgets((*books+(*count))->author,100,stdin);
           printf("enter isbn\n");
           fgets((*books+(*count))->isbn,20,stdin);
           (*books+(*count))->available=1;
           }
 (*count)++;
 }
void listbook(Book*books,int count){/*function to list the books*/
	if(books==NULL||count==0){
		printf("there is no book\n");
		exit(0);
	}
	for(int i=0;i<count;i++){
	
		printf("%s",books[i].title);
		printf("%s",books[i].author);
		printf("%s",books[i].isbn);
		 if(books[i].available){
			 printf("available\n");
		 }
		 else{printf("borrowed\n");
		 }
	}
}
void searchbook(Book*books,int count){/*function to search the book*/
         char book[100];
	printf("which book you want to search\n");
               fgets(book,100,stdin);
	       for(int i=0;i<count;i++){
		       if(strcmp(books[i].title,book)==0){
			       printf("%s",books[i].author);
			       printf("%s",books[i].isbn);
			       printf("%d",books[i].available);
			       return;
		       }
	       }
          printf("there is no such book");
}
void borrowbook(Book*books,int count){/*function to borrow the book*/
   printf("enter the isbn you want to borrow \n");
   char temp[20];
   fgets(temp,20,stdin);
   for(int i=0;i<count;i++){
	   if(strcmp(books[i].isbn,temp)==0){
		   if(books[i].available==1){
			   books[i].available=0;
			   return;
		   }
		   else{printf("there is no such book\n");
		   }            return;
	   }
   }
	   printf("there is no such book\n");
}
void returnbook(Book*books,int count){/*function to return the book*/
 printf("enter the isbn you want return \n");
 char temp[20];
 fgets(temp,20,stdin);
 for(int i=0;i<count;i++){
      if(strcmp(books[i].isbn,temp)==0){
                   if(books[i].available==0){
                           books[i].available=1;
                           return;
                   }
		   else{printf("this book was not borrowed\n");
			   return;
		   }
      }
 }
      printf("there is no such a book");
}
int main(){
Book*books=NULL;
int count=0;
int n;
do{ printf("choose what you like to do\n");
    printf("1.add a book\n");
    printf("2.list the books\n");
    printf("3.search the book\n");
    printf("4.borrow the book\n");
    printf("5.return the book\n");
    printf("6.if you want to exit\n");
    scanf("%d",&n);
    getchar();
    switch(n){
     case 1:addbook(&books,&count);
	    break;
     case 2:listbook(books,count);
	    break;
     case 3:searchbook(books,count);
            break;
     case 4:borrowbook(books,count);
           break;
     case 5:returnbook(books,count);
           break;
     case 6:printf("program is over");
               break ;	   
      default: printf("try again");
    }
} while(n!=6);
free(books);     


return 0;
}
                                       


