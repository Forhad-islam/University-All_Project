package Exam;                     // declearing package name
import teacherStudent.*;          // import another file 
import java.util.Scanner;

public class Final extends Mid   // inherit Mid class.
{
	
	Scanner in=new Scanner(System.in);
	Scanner in1=new Scanner(System.in);
	int b,mark=0;
	public char x;
    public void finalterm()   // function overriding.
   {
     System.out.println("*************************");
	 System.out.println("*Setect  your   Subject *");
	 System.out.println("*************************");
	 
     System.out.println();
    
        // try  or catch method use for check exception.	
       	try{ 
    	System.out.println("1.INTREGAL MATHMATICES");   
        System.out.println("2.FUNDAMENTAL PHYSICS");
     	b=in.nextInt();
     	}catch(Exception e){System.out.println(" Exception: "+e);}	// catch function use for catcjh exception
		switch(b)
		{
	      case 1:   System.out.println("1.How much is (3+2.99) \n\t\t\t a=5.03 \n\t\t\t b=5.99 \n\t\t\t c=5.73");	
	                System.out.print("Enter 'a' 'b' or 'c' and press enter:");
					x=in1.next().charAt(0);System.out.println();
					if(x=='b'){System.out.print("'b' is correct! Well Done! :).");  mark=mark+5;}
					      

					
					System.out.println("2.What is the value of pi? \n\t\t\t a= 3.00 \n\t\t\t b= 3.1416 \n\t\t\t c= 3.990");	
	                System.out.print("Enter 'a' 'b' or 'c' and press enter:");
					x=in1.next().charAt(0);System.out.println();
					if(x=='b'){System.out.print("'b' is correct! Well Done! :) ");  mark=mark+5;}
					     ; 

					
					System.out.println("3.A number is divisible by 5 if its unit digit is ………………… . \n\t\t\t a=2 or 0 \n\t\t\t b=0 or 5 \n\t\t\t c=5 or 2");	
	                System.out.print("Enter 'a' 'b' or 'c' and press enter:");
					x=in1.next().charAt(0);
					     System.out.println(); 
					if(x=='b'){System.out.print("'b' is correct! Well Done! :) ");  mark=mark+5;}
					break;
					
		  case 2 :  System.out.println("1.The period of swing of a simple gravity pendulum depends on … \n\t\t\t a= Length \n\t\t\t b= Diameter \n\t\t\t c= Mass");	
	                System.out.print("Enter 'a' 'b' or 'c' and press enter:");
					x=in1.next().charAt(0);System.out.println();
					if(x=='a'){System.out.print("'a' is correct! Well Done! :).");  mark=mark+5;}
                    
					
					System.out.println("2.Law of inertia is explained by … \n\t\t\t a= First law of Newton \n\t\t\t b=Second law of Newton \n\t\t\t c=Law of conservation");	
	                System.out.print("Enter 'a' 'b' or 'c' and press enter:");
					x=in1.next().charAt(0);System.out.println();
					if(x=='a'){System.out.print("'a' is correct! Well Done! :).");  mark=mark+5;}
					
					
					System.out.println("3.What is the value of Gravitational Force  \n\t\t\t a= 9.8m/s2 \n\t\t\t b= 9.8 m \n\t\t\t c= 98Km");	
	                System.out.print("Enter 'a' 'b' or 'c' and press enter:");
					x=in1.next().charAt(0);System.out.println();
					if(x=='a'){System.out.print("'a' is correct! Well Done! :).");  mark=mark+5;}
	
	       default:
                      System.out.println("invalid input");					
   	                     break;
             
		}
	System.out.println("Your total mark is :"+mark);	
   }
}