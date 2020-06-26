#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/intprint.h"
#include "include/substr.h"

int kmain()
{
       
       
       clearscreen();
       int pint,i;
	string pn = 0;
	string pm = 0;
	uint8 p = 0, q = 0;
       pint=0;
       print("Welcome to my operating system!\nUser login\n");
       string ch;
	 string username = "sumaiya";
	   string password = "1507069";
	   
	   string pinp = 0;
	   while (1) {
		   uint8 uOK = 0, pOK = 0;
		   
		   print("username:\n ");
		   pinp = readStr();
		   if (streql(pinp, username)) uOK = 1;
		   
		   print("\npassword:\n ");
		   pinp = readStr();
		   if (streql(pinp, password)) pOK = 1;
		   
		   if (uOK && pOK) {
			   print("\nLogin Done!\n");
			   break;
		   }
		   print("\nWrong info. Try again\n");
	   }	       
       ch = readStr();
	string in = 0;
       string inp;
       inp[1000];
       i=0;
       for(i;i<1000;i++)
          {
             inp[i]='\0';
          }
       while (1)
       {
               
		print("cse> ");
                ch = readStr();
		if(streql(ch,"hlw"))
                {
                       print("\nHlw from sumaiya\n");
                         
                }
		else if(streql(ch,"print"))
                {      print("\nEnter line \n");
                      while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                       i=0;
                       inp=readStr();
                       print("\n");
                       print(inp);
                       
                }
		else if(streql(ch,"shutdown"))
		{
			print("Turning off my OS!\n");
			break;
		}
		else if(streql(ch,"cmd"))
                {
                       print("\nIn cmd...\n");
                         
                }
		else if(strEql(inp," "))
			{
				updateCursor();
			}
                else if(streql(ch,"clr"))
                {
                      clearscreen();
                         
                }
		
                else if(streql(ch,"cal len"))
                {      i=0;
                       print("\nEnter the string:"); 
                       inp = readStr();
                       pint =(int)strlength(inp);
                       print("\nLength is :");
                       printint(pint);
                       while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                         
                }
              
                else if(streql(ch,"line"))
                {
                      int from,to,froml,tol;
                      i=0;
                      print("\nEnter which line from clear...:\n"); 
                      inp=readStr();
                      froml=(int)strlength(inp);
                      from=arraytoint(inp,froml);
                      while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                       i=0;
                       print("\nEnter which line to clear...:\n"); 
                       inp=readStr();
                       tol=(int)strlength(inp);
                       to=arraytoint(inp,tol);
                       clearLine(from-1,to);
                       updateCursor();
                       while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
			i=0;
                      
                         
                }
               
       		else if(streql(ch,"substr"))
			{
				print("Enter string: ");
				in = readStr();
				screen_substr(in);
			}
                else
                {
                        print("\nBad command!\n");
                }

                print("\n");
                
       }
return 0;
}
