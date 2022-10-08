/*
    Write a program to print "Hello" Message in C language.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	//clrscr();
	printf("This is C language");
	getch();
}
/*
    Note:-
          1. Remember that clrscr is not work on DevC++ and another compilers 
		     except TurboC and TurboC++.
		  2. getch() function is optional in DevC++ but it is neccessary to write 
		     on TurboC and TurboC++ compiler to view o/p.
		  3. In Linux #include<conio.h> is not present in gcc default compiler of 
		     Linux.
		  4. We can also use this form of header file on DEVC++ and Codeblock IDE which are list blow.
		     #include<cstdio>
		     Here 
		         1. c indicate that this file came from  C language.
		            Note:-
		                 Such way is not applied to all header files 
		                 came from C language.
		         2. But this form is used when your file save in .cpp extension.
		         
		  5.We can write name of header file in Capital or Small.
		    For Examples.
		        1.#include<STDIO.H>
		              AND
		          #include<stdio.h>
		          
		          Above both are same.
		       2. That means header files name are case insensitive.
		       3. But We can not write include in Captital.
		  6. There are various standards of C language which are
		     1.C89.
			 2.C90.
			 3.C11.
			 4.C18.
			 and etc.
		  	 
--------------------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------------------
 
		
		Steps to Write and run program of C and C++ on DevC++, Code Block IDE AND
		Command Prompt using TDM-GCC compile.
		__________________________________________________________________________
		__________________________________________________________________________
		
		
		1.For DevC++.
		-------------
		-------------
		      For Writting new C or C++ program:-
		      --------------------------------
		      --------------------------------
		      
		      	 1.Firstly open DevC++.
		      	 2.Then goto to File option OR (Atr+F).
		      	 3.Then select source file OR (Ctr+N).
		      	 4.Save the program where you want save by .c extension for C language and 
		           .cpp for C++.
		         5.Save every times when you are doing changes in your C file. If we do not save the file and try
		           to compile C OR C++ program at we must save program first otherwise we can not compile 
				   and run program
		      
		      For Running C and C++ program.
		      ------------------------------
		      ------------------------------
		          1.Then go to Excute menu OR (Alt+x).
		          2.Then go to compile sub menu of Excute menu.
		          3.After compiling successfully go to run option of Excute menu.
		                             OR
		          1. We can press clr+F11 to compile and run program.
		          
		2.For Codeblock:-
		---------------
		---------------
		      For Writting new C or C++ program:-
		      --------------------------------
		      --------------------------------
		         1.Firstly open CodeBlock IDE.
				 2.Then goto to File option OR (Atr+F).
				 3.Select file or Empty file option from sub menu New.
				 4.Then save the program by .c in case of C language.
				   And .cpp in case of C++.
		 	  For Running C and C++ program.
		      ------------------------------
		      ------------------------------
		         1.Go to Buid menu OR Alt+B.
		         2.Then select compile current file.
		         3.After successfully compile the program.Then select Run option for
		           Running program.
		           
				   
		3.Using Command by using TDM GCC compile:-

              For Writting new C or C++ program:-
		      --------------------------------
		      --------------------------------
			     1.Open any text editor such Notepad,Notepad++,Editplus
				   and save as .c extension for C language and .cpp for C++.

			  For Downloading and Running C and C++ program.
			  ----------------------------------------------
			  ----------------------------------------------

		         1.First Download TDM-GCC compile form internet.
				 2.Install it
				   Note:-
				        1.Step 1 and 2 required to do only once.
				 3.Then open Run dialog box OR Window+R.
				   but remember that run dialog must contain 
				   cmd in open textfiled(textbox).
				 4.go to floder where user program is saved.
				 5.After that we do following step C language.
				    Syntax:-
				             gcc program_name.c
				    Example:-
					         gcc add.c.
				    After that do following.
				    
				    Syntax:- 
					         program_name.exe
					Example:-
					         add.exe   		 
			     6. For C++ we do step number but we must use g++ instend of gcc.
*/
