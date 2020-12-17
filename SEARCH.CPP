
#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node{
      int data;
      struct node *next;
     };
typedef struct node *NODEPTR ;

#define NODEALLOC (struct node *) malloc (sizeof(struct node))

NODEPTR createlist(){
		 NODEPTR slist=NULL,temp,newnode;
		 int n,count;

		 printf("\n\t\t\t HOW MANY NODES ARE CREATE => ");
		 scanf("%d",&n);

		 for(count=0;count< n;count++){
		    newnode=NODEALLOC;
		    printf("\n\t\t\t ENTER DATA => ");
		    scanf("%d",&newnode->data);
		    newnode->next=NULL;

		    if(slist==NULL) {
		      slist=newnode;
		      temp=newnode;
		    }
		    else{
		        temp->next=newnode;
	                      temp=newnode;
		    }
		 }
		 return(slist);
}

void redisplay(NODEPTR slist){
                             NODEPTR temp=slist;
                             
		if(temp != NULL){
		   printf(" %d\t",temp->data);
		   redisplay(temp=temp->next);
		}
		
}

SEARCH(NODEPTR slist,int key){
            
            NODEPTR temp=slist;
            int count=0,i=-1;
            
            while(temp!=NULL){
            	   count++;
            	   if(temp->data==key)
                    i=count;		    	
	
	   temp=temp->next;
            }
            return(i);
}
int main(){
       int ch,key;
       NODEPTR slist=NULL;
          
       do{
          printf("\n\t 1 FOR CREATE LIST ");
          printf("\n\t 2 FOR DISPLAY LIST ");
          printf("\n\t 3 FOR SEARCH NUMBER");
          printf("\n\t 4 FOR EXIT\n");
          
           printf("\n\t\t\t ENTER  YOUR CHOICH => ");
          scanf("%d",&ch);
          switch(ch){
          	  
          	  case 1 : slist=createlist();
          	           getch();
          	           printf("\n\t\t\t LIST IS CREATED\n");
          	           break;
          	           
          	  case 2 : printf("\n\t\t\t");
	           redisplay(slist);
	           getch();
	           break;
	           
	  case 3 : printf("\n\t\t\t WHICH NUMBER IS SEARCH =>");
	           scanf("%d",&key);
	         
	           if(-1!=SEARCH(slist,key))
	              printf("\n\t\t\t THE NUMBER %d IS FOUND AT %d POSITION\n",key,SEARCH(slist,key));
	           else
	              printf("\n\t\t\t THE NUMBER %d IS NOT FOUND\n",key);
	            break;	  
          }
      }while(ch<4); 
      return (0);
      
}
      

