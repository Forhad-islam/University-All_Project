package Exam;             // declearing package name.
import teacherStudent.*;   // import another file  
import java.util.Scanner;

public class Mid extends Exam    // inherite another abstract class.
{
	int a,score=0;           // declearing some veriable.
	public char answer;
	Scanner in = new Scanner(System.in);
	Scanner in1 = new Scanner(System.in);
public void finalterm(){ }	                 //finalterm function .

   public void midterm()     //declearing midterm function for take  Mid exam.
   {    
       // user try or catacha function for catch any kind of run time exception.
	   try{
	   System.out.println("*************************");
	   System.out.println("*Setect  your   Subject *");
	   System.out.println("*************************");
       System.out.println();   
       System.out.println("1.INTRODUCTION TO PROGRAMMING LANGUAGE");   
       System.out.println("2.DISCRETE MATHMATICES");   
        
	   a=in.nextInt();
       System.out.println();
	   }catch(Exception e){System.out.println(" Exception: "+e);} // Show the error .
	   
	   
	   
	  //Start Loop for exam.
	   if(a==1)
	   {
	          System.out.println("1.C was developed by.  ");   
	          System.out.println("\t\t a.Dennia Ritchie");   
	          System.out.println("\t\t b.Denvid ritchie");   
	          System.out.println("\t\t c.John Ritchie");   
              System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
              answer =in1.next().charAt(0); // take one character value. 
		      System.out.println();
		    if(answer=='a')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+4; // score will be increse.
			   }
		       System.out.println("2.Programming language which is designed to integrate with Java is.");   
	           System.out.println("\t\t a.Scala");   
	           System.out.println("\t\t b.Ada  ");   
	           System.out.println("\t\t c.Pascal");   
               System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
              answer =in1.next().charAt(0);   // take one character value.
		       System.out.println();
		    if(answer=='a')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+4;   // score will be increse.
			   }
		      System.out.println("3.Information in the memory unit is ?  ");   
	          System.out.println("\t\t a.Volatile");   
	          System.out.println("\t\t b.Non volatile");   
	          System.out.println("\t\t c.bus");   
              System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
             answer =in1.next().charAt(0);
		      System.out.println();
		    if(answer=='a')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+4;   // score will be increse.
			   }
		      System.out.println("4.C was developed by.  ");   
	          System.out.println("\t\t a.Dennia Ritchie");   
	          System.out.println("\t\t b.Denvid ritchie");   
	          System.out.println("\t\t c.John Ritchie");   
              System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
              answer =in1.next().charAt(0);
		      System.out.println();
		    if(answer=='a')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+4;   // score will be increse.
			   }
		      System.out.println("5.COBOL stands for ?  ");   
	          System.out.println("\t\t a.Common Business Oriented Language.");   
	          System.out.println("\t\t b.Coupled Business Oriented Language ");   
	          System.out.println("\t\t c.Communication Business Oriented Language ");   
              System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
              answer =in1.next().charAt(0);
		      System.out.println();
		    if(answer=='a')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+4;  // score will be increse.
			   }
	   }
	   
	  else if(a==2)
	   {
	     System.out.println("1. Let set A = {1, 2} and C be {3, 4} then A X B (Cartesian product of set A and B) is? \n\t a) {1, 2, 3, 4} \n\t b) {(1, 3),(2, 4)} \n\t c) {(1, 3), (2, 4), (1, 4), (2, 3)}");   
	            
              System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
              answer =in1.next().charAt(0);
		      System.out.println();
		    if(answer=='c')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+5;
			   }
		       System.out.println("2.If set A has 4 elements and B has 3 elements then set n(A X B) is? \n\t a) 24 \n\t b) 14 \n\t c) 12");   
	             
               System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
              answer =in1.next().charAt(0);
		       System.out.println();
		    if(answer=='c')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+5;   // score will be increse.
			   }
		      System.out.println("3.If set A has 3 elements then number of elements in A X A X A are __________ \n\t a) 9. \n\t b) 6. \n\t c.27  ");   
	            
              System.out.print("Enter 'a' 'b' or 'c' and press enter:");  
             answer =in1.next().charAt(0);
		      System.out.println();
		    if(answer=='c')
			   {
				 System.out.println("Answer is correct."); 
				 score=score+5;        // score will be increse.
			   }
		      
			   
	    }
	  else{System.out.println("");} 
        
   
   }

public void show(){ 
   
   System.out.println("Your total mark is:"+score);

  }   // show function method for print score.

   

}