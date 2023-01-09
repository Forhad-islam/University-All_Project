import teacherStudent.*;   // import teacherStudent file 
import Exam.*;            // import Exam  file 
import java.lang.Math;     // import lang.Math  for use ceil function for get proper double value.
import java.util.Scanner;
import java.lang.*;

public class Start
{
public static void main(String[] args)   // start main class 
  {
	  Scanner in = new Scanner(System.in);
	  Scanner in1 = new Scanner(System.in);
	 
	System.out.println("\t \t \t>>>>>>>>>>.Befor start your Main programm,You have to set your all faculty. <<<<<<<<<<<<<<<<<<<<<<<<<");
	    int num;
		try{
				System.out.println("------------------------------------------------------------");
                System.out.println("|\t\t Please Create Your Faculty At fast        |");
				System.out.println("------------------------------------------------------------\n");
				
				System.out.print("How many Faculty you want to Add:");
				
				num = in1.nextInt();
				
			 	// create an Faculty type of array.
             Faculty ft[];
		Student te = new Student();      // create Student class object for teacher.
		Student st = new Student();      // create Student class object for student.
	
	    
		ft=new Faculty[num];            // set array size and create Faculty object .
		System.out.println();
		
        for(int i=0;i<num;i++)     
		{
	
			System.out.print("Enter Faculty member name:");
            String name = in.nextLine();         // input Faculty name.
			System.out.println();
			System.out.println();
			
			System.out.print("Enter email :");
	        String email = in.nextLine();       // input Faculty email.
			System.out.println();
			System.out.println();
			
			
            // create referance or object. 
			
			ft[i] = new Faculty();      // create an object for Faculty.
			ft[i].setName(name);        // pass value to Factulty class setName function.
			ft[i].setEmail(email);      // pass value to Factulty class setEmail function.
			
			// Use switch case for set automatically course name.
		 switch(i+1)
		         { 
		            case 1:
       				  ft[i].setCourse("INTRODUCTION TO PROGRAMMING LANGUAGE"); 
						break;
					
				    case 2:
			         ft[i].setCourse("JAVA PROGRAMMING LANGUAGE");
						break;
						
				    case 3:	
						ft[i].setCourse("DISCRETE MATHMATICES");
						break;
						
				    case 4:	
						ft[i].setCourse("INTREGAL MATHMATICES");
						break;
						
				    case 5:	
						ft[i].setCourse("DATA STRUCTURE");
						break;
						
					case 6:	
						ft[i].setCourse("DATA BASE");
						break;
						
					case 7:	
						ft[i].setCourse("PYTHON PROGRAMMING");
						break;
						
					case 8:	
						ft[i].setCourse("FUNDAMENTAL PHYSICS ");
						break;
						
					case 9:	
						ft[i].setCourse("ELECTRIC CIRCUTE");
						break;
						
					default :
						ft[i].setCourse("ENGLISH");
 
						break;
						
						
		         }
				 
		   te.insertFaculty(ft[i]);                // pass Faculty object to Student class .
		}
				 
			System.out.println();
			
			
       System.out.println("The course  name will be provided automatically by System");
     System.out.println();
 
// we have declear some initial valiable for set student information.
	 String snam,s1nam,saddress,s1address,snumber,s1number;
	 String sid,s1id;
	
	 String s2nam,s3nam,s2address,s3address,s2number,s3number;
	 String s2id,s3id;
	
	 String s4nam,s5nam,s4address,s5address,s4number,s5number;
	 String s4id,s5id;
	
	 String s6nam,s6address,s6number,s7nam,s7address,s7number,s8nam,s8address,s8number,s9nam,s9address,s9number;
	 String s6id,s7id,s8id,s9id; 

	// Menu start below this line.
   int n;
 do{
	 // Simple decoration for menu .
	             System.out.println("\t\t\t\t\t\t\t   ***********.Now  Welcome  to main  Part .*** ************");	
	             System.out.println();	
	             System.out.println("\t\t\t\t\t\t\t --------------------------------------------------------------- ");	
	             System.out.println("\t\t\t\t\t\t\t |  1.Add Student                                               |");	
	             System.out.println("\t\t\t\t\t\t\t |  2.Remove Student                                            |");	
	             System.out.println("\t\t\t\t\t\t\t |  3.Give Exam                                                 |");	
	             System.out.println("\t\t\t\t\t\t\t |  4.Show All Student Info                                     |");	
	             System.out.println("\t\t\t\t\t\t\t |  5.Calculate result &  Count Own CGPA                        |");	
	             System.out.println("\t\t\t\t\t\t\t |  6.Search Any Student                                        |");	
	             System.out.println("\t\t\t\t\t\t\t |  7.Check All Faculty/Subject                           	|");	
	             System.out.println("\t\t\t\t\t\t\t |  8.Exit                                                      |");	
 	             System.out.println("\t\t\t\t\t\t\t ----------------------------------------------------------------");	

	 System.out.print("Enter yout choice :");
          		n = in1.nextInt();                    // wait for your choice.
		 
 switch(n)
	 {
		case 1 :  System.out.println("Select your subject:");               
		           System.out.println("-----------------------");
				   for(int a=0; a<num;a++)
				   {
					   System.out.println(+(a+1)+"."+ft[a].getCourse());                        //show you how many sibject we have.
					   
				   }
				     System.out.print("Which Subject you want to take Please enter the serial number of that subject :");  
				      int x=in1.nextInt();             //below this line code depende on your command.
	              	   switch(x)
							{
								case 1: System.out.print("Enter Student name        :");  snam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID           :");   sid=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  saddress=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  snumber=in.nextLine();
								        System.out.println();
										Faculty student0 = new Faculty();                                   // create faculty object 
										student0.setstudentname(snam);                                      // sending value in Factulty student function
										student0.setstudentId(sid);
										student0.setstudentcourseName("INTRODUCTION TO PROGRAMMING LANGUAGE");
										student0.setstudentaddress(saddress);
										student0.setstudentPhonNumber(snumber);
										st.insertStudent(student0);                                            // sending faculty object in student class.
										break;
										
								case 2: System.out.print("Enter Student name         :");  s1nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.          :");   s1id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s1address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s1number=in.nextLine();
								        System.out.println();
										Faculty student1 = new Faculty();
										student1.setstudentname(s1nam);
										student1.setstudentId(s1id);
										student1.setstudentcourseName("JAVA PROGRAMMING LANGUAGE");
										student1.setstudentaddress(s1address);
										student1.setstudentPhonNumber(s1number);
                							
											st.insertStudent(student1);                                    // sending faculty object in student class.
								         break;
										 
								case 3:System.out.print("Enter Student name         :");  s2nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.          :");   s2id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s2address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s2number=in.nextLine();
								        System.out.println();
										Faculty student2 = new Faculty();
										student2.setstudentname(s2nam);
										student2.setstudentId(s2id);
										student2.setstudentcourseName("DISCRETE MATHMATICES");
										student2.setstudentaddress(s2address);
										student2.setstudentPhonNumber(s2number);
                							
											st.insertStudent(student2);                                   // sending faculty object in student class.
								         break;
										 
								case 4:System.out.print("Enter Student name         :");  s3nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.         :");   s3id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s3address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s3number=in.nextLine();
								        System.out.println();
										Faculty student3 = new Faculty();
										student3.setstudentname(s3nam);
										student3.setstudentId(s3id);
										student3.setstudentcourseName("INTREGAL MATHMATICES");
										student3.setstudentaddress(s3address);
										student3.setstudentPhonNumber(s3number);
                							
											st.insertStudent(student3);                              // sending faculty object in student class.
								         break; 
										 
								case 5:System.out.print("Enter Student name         :");  s4nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.         :");   s4id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s4address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s4number=in.nextLine();
								        System.out.println();
										Faculty student4 = new Faculty();
										student4.setstudentname(s4nam);
										student4.setstudentId(s4id);
										student4.setstudentcourseName("  DATA STRUCTURE");
										student4.setstudentaddress(s4address);
										student4.setstudentPhonNumber(s4number);
                							
											st.insertStudent(student4);                           // sending faculty object in student class.
								         break;
										 
								case 6:System.out.print("Enter Student name          :");  s5nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.          :");   s5id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s5address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s5number=in.nextLine();
								        System.out.println();
										Faculty student5 = new Faculty();
										student5.setstudentname(s5nam);
										student5.setstudentId(s5id);
										student5.setstudentcourseName("  DATA BASE");
										student5.setstudentaddress(s5address);
										student5.setstudentPhonNumber(s5number);
                							
											st.insertStudent(student5);                                     // sending faculty object in student class.
											break;
								         
										 
								case 7:System.out.print("Enter Student name          :");  s6nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.          :");   s6id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s6address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s6number=in.nextLine();
								        System.out.println();
										Faculty student6 = new Faculty();
										student6.setstudentname(s6nam);
										student6.setstudentId(s6id);
										student6.setstudentcourseName("PYTHON PROGRAMMING");
										student6.setstudentaddress(s6address);
										student6.setstudentPhonNumber(s6number);
                							
											st.insertStudent(student6);                                         // sending faculty object in student class.
								         break;
										 
										 
								case 8:System.out.print("Enter Student name        :");  s7nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.         :");s7id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address     :");  s7address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s7number=in.nextLine();
								        System.out.println();
										Faculty student7 = new Faculty();
										student7.setstudentname(s7nam);
										student7.setstudentId(s7id);
										student7.setstudentcourseName("FUNDAMENTAL PHYSICS");
										student7.setstudentaddress(s7address);
										student7.setstudentPhonNumber(s7number);
                							
											st.insertStudent(student7);                                     // sending faculty object in student class.
								         break;
										 
								case 9:System.out.print("Enter Student name        :");  s8nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.         :");   s8id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address     :");  s8address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s8number=in.nextLine();
								        System.out.println();
										Faculty student8 = new Faculty();
										student8.setstudentname(s8nam);
										student8.setstudentId(s8id);
										student8.setstudentcourseName("ELECTRIC CIRCUTE");
										student8.setstudentaddress(s8address);
										student8.setstudentPhonNumber(s8number);
                							
											st.insertStudent(student8);                            // sending faculty object in student class.
								         break;
										 
								case 10:System.out.print("Enter Student name        :");  s9nam=in.nextLine(); 
								        System.out.println();
								        System.out.print("Enter Student ID.          :");   s9id=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Address      :");  s9address=in.nextLine();
										System.out.println();
								        System.out.print("Enter Student Phon Number  :");  s9number=in.nextLine();
								        System.out.println();
										Faculty student9 = new Faculty();
										student9.setstudentname(s9nam);
										student9.setstudentId(s9id);
										student9.setstudentcourseName("ENGLICH");
										student9.setstudentaddress(s9address);
										student9.setstudentPhonNumber(s9number);
                							
											st.insertStudent(student9);                          // sending faculty object in student class.
								         break;

								
										 
								default :System.out.println("");
       		                              break;		 
										 
										 
									
							}
							System.out.println("********************");
					        break;
						  
				  // finish our case 1 here.
				   
		 case 2: System.out.print("Enter Student ID :");		
                 String k = in.next();             // waiting for your input.
				 
				  st.removeStudent(k);        //sending k in Student class removeStudent();
					break;
				 
		 case 3: int l;
		      
		           System.out.print("Which exam you want to give: \n\t\t 1.Mid term \n\t\t 2.Final term  \n Enter:");  
		 
                     l=in1.nextInt(); 
		        
					Mid m=new Mid();  Final f = new Final();     // create two class object.
					// check your choises.
					if(l==1){
		            
		             m.midterm();
					 m.show();
					}
					 else{
						 
						 f.finalterm();
						
					 }
		          break;
				 
		        	 
		case 4:    st.ShowStudent();                // called Student class ShowStudent(); for get all student imformance at once 
				     break;
			
		case 5:           
                    // Create C class Object.
					    C obj = new C();
                    double FinalMark0 = obj.MidTerm() + obj.FinalTerm() ;      // two function value are receive here and set this value in FinalMark0.
                    System.out.println("Overall Marks: " + Math.ceil(FinalMark0) );
					
					double FinalMark = Math.ceil(FinalMark0);         // double value convert to final value iff needed some value.
					
                      if(FinalMark >=90 && FinalMark <=100)
                        System.out.println("Your Grade is A+ And Your Cgpa is 4   ");      // condition for compare our value .
                    else if ( FinalMark >=85 &&  FinalMark<90)
                        System.out.println("Your Grade is A And Your Cgpa is 3.75   ");
                    else if(FinalMark  >=80 &&  FinalMark<85)
                        System.out.println("Your Grade is B+ And Your Cgpa is 3.50   ");
                    else if(FinalMark  >=75 &&  FinalMark<80)
                        System.out.println("Your Grade is B And Your Cgpa is 3.25   ");
                    else if(FinalMark >=70 && FinalMark<75)
                        System.out.println("Your Grade is C+ And Your Cgpa is 3    ");
                    else if(FinalMark >=60 && FinalMark<70)
                        System.out.println("Your Grade is C And Your Cgpa is 2.75    ");
                    else if(FinalMark >=55 && FinalMark<60)
                        System.out.println("Your Grade is D+ And Your Cgpa is 2.50   ");
                    else if(FinalMark >=50 && FinalMark<55)
                        System.out.println("Your Grade is D And Your Cgpa is 2.50   ");
                    else
                    if(FinalMark<50)
                        System.out.println("Your Grade is F And Your Cgpa is 0   ");
					   
					break;

                 				
		case 6: System.out.print("Enter student ID:");
                	String a =in.next(); 
					System.out.println();
				
                   st.searchStudent(a);
					break;
		
		case 7: te.ShowAllFaculty();
		      break;
		
				
		case 8: 
		            System.out.println("********************");
					System.out.println("Exit");                         //Exit from this code.
					
					System.out.println("********************");
					break;		

	   default:
				
					System.out.println("********************");
					System.out.println("Invalid Option");
					System.out.println("********************");
					break;
	
		 
	    }
		
	   
     
     }while(n!=8);
	 
    }catch(Exception en){System.out.println("Exception is :"+en);}    // print exception.	
  
  
  } 	
	
}



