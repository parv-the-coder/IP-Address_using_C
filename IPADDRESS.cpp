#include<stdio.h>
#include<string.h>
#include <time.h>
#include<conio.h>
#include<stdlib.h>
void IP()
{
    int i,j,k,dig,no,nu,cnt=0;
    char str[] ={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char ch;
    printf("\nEnter How Many IP Addresses You Want To Print :");
    scanf("%d",&no);
    printf("\n\nWhat You Want Ipv4 Or Ipv6 Enter (4 Or 6) :");
    scanf("%d",&nu);
	switch(nu)
    	{
          case 4:
    	  srand(time(NULL));
    	  for(i=0;i<no;i++)
      		{
      	  		for(j=0;j<4;j++)
      				{
    cnt=rand()%256;
    printf("%d",cnt);
    if(j<3)
    printf(".");
    }
    printf("\n");
   }
   break;
  case 6 :
      srand(time(NULL));
      for(i=0;i<no;i++)
      {
       for(j=0;j<8;j++)
       {
        for(k=0;k<4;k++)
        {
     ch=str[rand()%16];
     printf("%c",ch);
     }
    if(j<7)
    printf(":");
    }
    printf("\n");
   }
   break;
     default :printf("\nEnter ipv Either 4 or 6\n\n"); 
 }
    getch();
    return;
}
void system()
{
  
   system("C:\\Windows\\System32\\ipconfig");
   return;
}
void ALL_IP()
{
	system("C:\\Windows\\System32\\ipconfig");
   
	int c1,c2,c3,c4;
    for (  c1 = 0; c1 <= 255; ++c1 )
        for ( c2 = 0; c2 <= 255; ++c2 )
            for ( c3 = 0; c3 <= 255; ++c3 )
                for (  c4 = 0; c4 <= 255; ++c4 )
                    printf( "%d.%d.%d.%d\n", c1, c2, c3, c4 );
					return;
}
int main()
{
	int no;
	printf("1)To get details of currently Operating System\n2)To Generate IP address\n3)To Print all the Ip Addresses possible in IPv4\n4)Exit\n");
	printf("Enter:");
	scanf("%d",&no);
	switch(no)
	{
		case 1:system();
		break;
		case 2:IP();
		break;
		case 3:ALL_IP();
		break;
		case 4:exit(0);
		break;
	}
	printf("\n");
	main();
}
