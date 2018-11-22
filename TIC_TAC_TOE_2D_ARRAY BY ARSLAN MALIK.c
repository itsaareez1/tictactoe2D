//Name Arslan ud Din Shafiq
//Reg.No. DDP-SP14-BSE-005
//Section A
//Assignment # 3
//Submitted to Sir A.K.Shahid
//COMSATS Institute of Information Technology, Lahore, Pakistan
#include<stdio.h>  //hearder file for I/O

char a[3][3]={0},i,j;           //a 2D array of 3X3 is globally declared and initialized to zero so that it doesn't give any junk value, variable i and j are also globally declared. They are declared globally so that they can be used throughout the program.
void header();                  //prototype of header funtion
void name(char *pt1,char *pt2); //prototype of name function
void filled();                  //prototype of filled funtion
int condition1();               //prototype of condition1 funtion
int condition2();               //prototype of condition2 funtion
int win1();                     //prototype of win1 funtion
int win2();                     //prototype of win2 funtion
void toe();                     //prototype of toe funtion
void print1();                  //prototype of print1 funtion
void design();                  //prototype of design funtion
void gameloading();             //prototype of gameloading funtion
struct std                  //data structure is declared as std
{
     int ch;               //object of data structure
     char s1[100],s2[100]; //character type object declaration in data structure
}st;
int main()              															   //main funtion
{
    int menu;            															  //declaring menu variable

     header();      															      //calling header funtion
    system("pause"); 															     //to pause screen
    again:              															  //pointing for goto statement
 gameloading();        															      //loading funtion is called
    printf("\n\n\n\n\n\n\n\n\n\t\t\t1. Start Game\n\n\t\t\t2. Exit \n\t\t\t");
    menu=getche()-48;     															 //getting integer value from user
    system("cls");																	 //clearing screen

     switch(menu) 																	//switch selection statement is applied on menu
{
    case 1:  																		 //first case for selection statement
        if(menu==1)																	 //if user press 1 then game is started
        design();																	//design() funtion is called
        break; 																		//break statement for case 1
    case 2:
        if(menu==2) 																//if user select 2 then game is exited
            return 0; 																//terminating condition
        break;
    default:   																		  //if user select any option except 1 and 2 then default condition is performed
        printf("\n\n\nYou have Selected Wrong Option.");
        printf("\n\n\n\n\n\n");
        system("pause"); 															//pausing screen
        system("cls"); 																//clearing screen
        goto again;																	 //if default condition is performed this statement goes to again pointing value.
        break;
}

}
void header()                													   //a function which does not return any value used to show header file in main function
{
       printf("\n\t\t\t    TIC TAC TOE");                  //printf statement is used for printing & \n for next line and \t for tab or space
       printf("\n\n\n\n\n\n\n\t\tBUILT AND DESIGNED BY >> ARSLAN UD DIN SHAFIQ\n\n\t\tWebsite>>\t\t   www.imarslan.com\n");
       printf("\n\t\tCOMSATS Institute of Information Technology,\n\n\t\t\t\t\t  Lahore , Pakistan\n\n\n");

}
void name(char *pt1,char *pt2)                             //pointer funtion which gets the name of user and pass the address where it called
{
      puts("\n\n\t\t\tEnter Name of Player 1 : ");         //asking player 1 to enter name ...puts is used to print string
      printf("\n\t\t\t");
      gets(pt1);                                           //gets is used to get the string from user
      puts("\n\n\t\t\tEnter Name of Player 2 : ");         //asking player 2 to enter name
      printf("\n\t\t\t");
      gets(pt2);                                          //getting name of 2nd player
}
void filled()                                             //a function which tell us about the already filled box
{
      condition1();                                       //it checks the conditions given in funtion condition1() and decrement of i-- is used to identify is the box already filled
      i--;
      printf("\n\n\n\nOooOpppss This Block is already filled....!!!\n\n\n\n\n");          //this line is printed if the box is already filled
      system("pause");                                                                    // system pasuse is the system function which is used for a pause and to continue it requires pressing of any key
      system("cls");                                                                      //this is also a system function which  is used for clearing screen
}
int condition1()                                                                          //a funtion which return integer value if any of the given condition is true...THIS CONDITION IS FOR PLAYER 1
{
     
	       if ( a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X'  ||   a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X'   ||   a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X' )           //this condition checks all the horizontal rows values one by one and returns 1 if condition is true for any horizontal row
           return 1;
      else if ( a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X' ||   a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X'   ||   a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X' )       //this condition checks all the vertical column values one by one and returns 1 if condition is true for any column row
           return 1;
      else if ( a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')                //this condition checks the principle diagonal values and returns 1 if condition is true. AND operator is used because all conditions in that statement should be true in order to return 1
           return 1;
      else if ( a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')                //this condition checks the values in diagonal boxes
           return 1;                                                         //it the above statement is true it returns value 1

}
int condition2()            //a funtion which return integer value if any of the given condition is true...THIS CONDITION IS FOR PLAYER 2
{
     
	       if ( a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O'   ||   a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O'   ||   a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O' )         //this condition checks all the horizontal rows values one by one and returns 2 if condition is true for any horizontal row
           return 2;
      else if ( a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O'   ||   a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O'   ||   a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O' )     //this condition checks all the vertical column values one by one and returns 2 if condition is true for any column row
           return 2;
      else if ( a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O')          //this condition checks the principle diagonal values and returns 2 if condition is true. AND operator is used because all conditions in that statement should be true in order to return 2
           return 2;
      else if ( a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')          //this condition checks the values in diagonal boxes
           return 2;                                                   //it the above statement is true it returns value 2

}
int win1()                 //a funtion which declares the winning of player 1 and returns 0 if any condition in  condition1() is true.
{
      if(condition1()==1) //selection statement used to tets the conidition1() function

      printf("\n\n\nCongratulations...!!! Player 1 is the WINNER...!!!\n\n"); //winning declaration printing
  
      return 0;
}
int win2()                //a funtion which declares the winning of player 2 and returns 0 if any condition in  condition2() is true.
{
     if(condition2()==2) //selection statement used to tets the conidition2() function

     printf("\n\n\nCongratulations...!!! Player 2 is the WINNER...!!!\n\n\n"); //winning declaration printing

     return 0;
}
void toe()      //void function used which returns nothing. It is just printed to tell the user about the box number for selection
{
     printf("\n\t\t\t 1 | 2 | 3 \n\t\t\t___|___|___\n\t\t\t 4 | 5 | 6 \n\t\t\t___|___|___\n\t\t\t 7 | 8 | 9 \n\t\t\t   |   |   \n\n\n");
}
void print1()   //a funtion which  when user enter the box number print the value in selected box according to the user selection
{
     printf("\a\a\n\t\t\t %c | %c | %c \n\t\t\t___|___|___\n\t\t\t %c | %c | %c \n\t\t\t___|___|___\n\t\t\t %c | %c | %c \n\t\t\t   |   |   \n\n\n\a\a",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
}
void design()
{
 //    char *pt1,*pt2; //pointers which gets the address of character and pass it to the s1 and s2
   //  pt1=st.s1;      //assigning the pointer 1 to an array object of data structure
    // pt2=st.s2;      //assigning the pointer 2 to an array object of data structure

     name(st.s1,st.s2);        //name function declared above is called here
     
	 system("cls");            // screen clearing
	 
     for ( i=1 ; i<10 ; i++ )  //simple for loop from 1 to 9
      {
         phir:               //reference name for goto statement
            toe();           //toe funtion made above is called here
              if(i%2==1)     //selection statement which select the player's turn. if remainder of any value of i and 2 is 1 then it's player one's turn otherwise it's player 2's turn
                  {
                      printf(" %s's Turn : ",st.s1);              //if i%2 gives remainder 1 then name of player 1 is used
                  }
              else
                  {
                      printf(" %s's Turn : ",st.s2);              //if i%2==1 is false then player 2's turn is announced
                  }
      st.ch = ( getche()-48 );                                    //this gets an integer input from user in box and print it as character
      if ( st.ch<0 || st.ch>9 )                                   //check condition which checks if value enetered by user is greater than 9 or lesser than zero then next block is printed otherwise next block is skipped
      {
         printf("\n\n\nYou have chosen wrong block...!!!\n\n\n"); //if selected box by user is less than 0 and greater than 9 then it prints that the user has choosen wrong box.
         system("pause");                                         //to pause the program
         system("cls");                                           //to clear the screen
         goto phir;                                               //goto statement which goes to phir declared above and check all the condition above again
      }
      switch(st.ch)                                               //switch selection statement
      {
         case 1 :                                                 // in switch selection statement we use cases for checking conditions 
       
           	    if(a[0][0]=='X' || a[0][0]=='O')                  //checks value enetered in 1x1 by user
       
	            {
                    filled();                                     // checks weather the box is filled or not
                    break;                                        //break statement used to terminate filled funtion
                }
       
	            if(i%2==1)                                        // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
       
	           { 
                    a[0][0]='X';                                  //enter X character in place of integer
                    print1();                                     // print the game box which helps the user for selecting box number
                    win1();                                       //checks the condition that player 1 wins or not
                    system("pause");                              //system funtion used to pause
                    system("cls");                                //for clearing screen
                    break;                                        //break statement for player 1
               }
        
          else                                                    //if above if condition is false this else condition is used
        
	           {
                    a[0][0]='O';                                 //enter O character in place of integer
                    print1();                				     //print the game box which helps the user for selecting box number
                    win2();  								     //checks the condition that player 2 wins or not
                    system("pause");							  //system funtion used to pause
                    system("cls");  							 //for clearing screen
                    break; 										 //break statement for player 2
               }
            break; 												//break statement for case 1
    
         case 2 :												 //2nd possibility of value enetered by user
           	    
	       	    if(a[0][1]=='X' || a[0][1]=='O')				 //checks value enetered in 1x2 by user
                {
                    filled(); 									 // checks weather the box is filled or not 
                    break;										 //break statement used to terminate filled funtion
                }
                if(i%2==1)										  // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[0][1]='X'; 									//enter X character in place of integer
                    print1(); 									// print the game box which helps the user for selecting box number
                    win1();  										//checks the condition that player 1 wins or not
                    system("pause");							   //system funtion used to pause
                    system("cls");  							   //for clearing screen
                    break;  									//break statement for player 1
                }  
          else   												 //if above if condition is false this else condition is used
                {
                    a[0][1]='O'; 								 //enter O character in place of integer
                    print1();									// print the game box which helps the user for selecting box number
                    win2();    									//checks the condition that player 2 wins or not
                    system("pause");  							 //system funtion used to pause
                    system("cls");   						  //for clearing screen
                    break;  									//break statement for player 2
				}
            break;											 //break statement for case 2
         
		 case 3 : 												//3rd possibility of value enetered by user
           	    
	       	    if(a[0][2]=='X' || a[0][2]=='O') 			//checks value enetered in 1x3 by user
                {
                    filled(); 									// checks weather the box is filled or not
                    break;									 //break statement used to terminate filled funtion
                }

                if(i%2==1) 									 // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[0][2]='X';								//enter X character in place of integer
                    print1();									// print the game box which helps the user for selecting box number
                    win1(); 									 //checks the condition that player 1 wins or not
                    system("pause"); 							  //system funtion used to pause
                    system("cls");   						  //for clearing screen
                    break; 										//break statement for player 1
				} 
          else     												//if above if condition is false this else condition is used
                {
                    a[0][2]='O';							  //enter O character in place of integer
                    print1();									 // print the game box which helps the user for selecting box number
                    win2();   									 //checks the condition that player 2 wins or not
                    system("pause");  							 //system funtion used to pause
                    system("cls");  						   //for clearing screen
                    break;										//break statement for player 2
                }
            break;												 //break statement for case 3
        
		 case 4 :												 //fourth possibility of value enetered by user
           	    
	       	    if( a[1][0]=='X' || a[1][0]=='O' ) 				//checks value enetered in 2x1 by user
                {
                    filled();  									// checks weather the box is filled or not
                    break; 										//break statement used to terminate filled funtion
                }

                if (i%2==1)  									 // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[1][0]='X';								//enter X character in place of integer
                    print1();                                   // print the game box which helps the user for selecting box number
                    win1();                                    //checks the condition that player 1 wins or not
                    system("pause");                            //system funtion used to pause
                    system("cls");                               //for clearing screen     
                    break;                                   //break statement for player 1
				}
          else                                                //if above if condition is false this else condition is used
                {
                    a[1][0]='O';                                 //enter O character in place of integer
                    print1();                                    // print the game box which helps the user for selecting box number
                    win2();                                      //checks the condition that player 2 wins or not
                    system("pause");                           //system funtion used to pause
                    system("cls");                              //for clearing screen
                    break;                                    //break statement for player 2
                }
            break;                                            //break statement for case 4
         
		 case 5 :                                            //fifth possibility of value enetered by user
           	    
	       	    if( a[1][1]=='X'  ||  a[1][1]=='O' )        //checks value enetered in 2x2 by user
                {
                    filled();                                 // checks weather the box is filled or not
                    break;                                   //break statement used to terminate filled funtion
                }

                if (i%2==1)                                   // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[1][1]='X';                                   //enter X character in place of integer
                    print1();                                    // print the game box which helps the user for selecting box number
                    win1();                                    //checks the condition that player 1 wins or not
                    system("pause");                             //system funtion used to pause
                    system("cls");                              //for clearing screen
                    break;                                   //break statement for player 1
                }
           else                                              //if above if condition is false this else condition is used
                {
                    a[1][1]='O';                            //enter O character in place of integer
                    print1();								  // print the game box which helps the user for selecting box number
                    win2();    								//checks the condition that player 2 wins or not
                    system("pause");   						//system funtion used to pause
                    system("cls");
                    break;									 //break statement for player 2
                }
            break; 											//break statement for case 5
       
	     case 6 :											 //sixth possibility of value enetered by user
                
	       	    if ( a[1][2]=='X'  ||  a[1][2]=='O' ) 			//checks value enetered in 2x3 by user
                {
                    filled();  								 // checks weather the box is filled or not
                    break;									 //break statement used to terminate filled funtion
                }

                if (i%2==1)   								// player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[1][2]='X';  							//enter X character in place of integer
                    print1();  								// print the game box which helps the user for selecting box number
                    win1();								  //checks the condition that player 1 wins or not
                    system("pause");  						 //system funtion used to pause
                    system("cls");  						   //for clearing screen
                    break;  							//break statement for player 1
                }
          else    											//if above if condition is false this else condition is used
                {
                    a[1][2]='O'; 						 //enter O character in place of integer
                    print1(); 							 // print the game box which helps the user for selecting box number
                    win2();   							 //checks the condition that player 2 wins or not
                    system("pause"); 					  //system funtion used to pause
                    system("cls");    					 //for clearing screen
                    break; 								 //break statement for player 2
                }
            break; 										 //break statement for case 6
         
		 case 7 :										 //7th possibility of value enetered by user
                
           	    if ( a[2][0]=='X'  ||  a[2][0]=='O' )		 //checks value enetered in 3x1 by user
                {
                    filled(); 							  // checks weather the box is filled or not
                    break; 								  //break statement used to terminate filled funtion
                }

                if (i%2==1) 							 // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[2][0]='X'; 							//enter X character in place of integer
                    print1(); 							 // print the game box which helps the user for selecting box number
                    win1();								  //checks the condition that player 1 wins or not
                    system("pause");  						 //system funtion used to pause
                    system("cls");   					  //for clearing screen
                    break;   								//break statement for player 1
                }
          else   											//if above if condition is false this else condition is used
                {
                    a[2][0]='O'; 							 //enter O character in place of integer
                    print1();							  // print the game box which helps the user for selecting box number
                    win2(); 							   //checks the condition that player 2 wins or not
                    system("pause"); 						  //system funtion used to pause  
                    system("cls");   						  //for clearing screen
                    break;  								 //break statement for player 2
                }
            break;  										//break statement for case 7
         
		 case 8 :											 //8th possibility of value enetered by user
                
	       	    if ( a[2][1]=='X'  ||  a[2][1]=='O' )		 //checks value enetered in 3x2 by user
                {
                    filled();  								 // checks weather the box is filled or not
                    break;   								//break statement used to terminate filled funtion
                }

                if (i%2==1) 								 // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                    a[2][1]='X';  								//enter X character in place of integer
                    print1();								  // print the game box which helps the user for selecting box number
                    win1();									  //checks the condition that player 1 wins or not
                    system("pause"); 						  //system funtion used to pause
                    system("cls");   						  //for clearing screen
                    break; 										//break statement for player 1
                }
          else    												//if above if condition is false this else condition is used
                {
                    a[2][1]='O'; 								 //enter O character in place of integer
                    print1(); 									// print the game box which helps the user for selecting box number
                    win2();    									//checks the condition that player 2 wins or not
                    system("pause"); 							  //system funtion used to pause
                    system("cls");   						  //for clearing screen
                    break;  									 //break statement for player 2
                }
            break;											 //break statement for case 8
         
		 case 9 :												 //9th possibility of value enetered by user
                
	       	    if ( a[2][2]=='X'  ||  a[2][2]=='O' ) 			//checks value enetered in 3x3 by user
                {
                    filled();									  // checks weather the box is filled or not
                    break; 										  //break statement used to terminate filled funtion
                }

                if (i%2==1) 									 // player 1 selection...if i%2 gives remainder 1 then it is player 1's turn otherwise player 2's turn
                {
                     a[2][2]='X';								  //enter X character in place of integer
                     print1(); 									 // print the game box which helps the user for selecting box number
                     win1(); 									 //checks the condition that player 1 wins or not
                     system("pause");  							 //system funtion used to pause
                     system("cls");    							 //for clearing screen
                     break; 										//break statement for player 1
                }
          else  												//if above if condition is false this else condition is used
                {
                     a[2][2]='O'; 								 //enter O character in place of integer
                     print1(); 									 // print the game box which helps the user for selecting box number
                     win2();    									//checks the condition that player 2 wins or not
                     system("pause");  								 //system funtion used to pause
                     system("cls");  								   //for clearing screen
                     break; 									//break statement for player 2
                }
            break;  //break statement for case 9
    }
  }
}
void gameloading()
{
      system("cls");  											    //for clearing screen
      int length_of_loading_bar=0,timer=0; 						    //initializing the length of bar for delay and timer for the speed of delaying
      printf("\n\n\n\n\n\n\n\n\n\n\t\t\t   GaMe iS LoAdInG...");  //Loading indication
      printf("\n\t\t\t  ");
      for(length_of_loading_bar=0;length_of_loading_bar<20;length_of_loading_bar++) 		//loop for the horizontal length of bar
             {
                   for(timer=0;timer<10000000;timer++); 									//semi colon is used bcoz we don't want to print anything vertically instead we want to count time...here we are using loop as counter
                    printf("%c",182);														 //special symbol askey value 182 is used for 19 times printing of special symbol
             }
      printf("\n"); 																//to print on new line
      system("cls");       															 //for clearing screen
}
