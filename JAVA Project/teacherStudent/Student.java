package teacherStudent;     //declear package name.
import java.lang.*;          
import java.util.Scanner;  // declear Scanner package
public class Student
{
    Faculty Allstudents[]=new Faculty[200];  // Create an array ehich holds faculty type of object.(This is also created for student)
    Faculty facultys[]=new Faculty[12];      // Create an array ehich holds faculty type of object.(This is also created for teacher.)
    
public void insertFaculty(Faculty f)
     {
		 int fa=0;
		 for(int i=0;i<facultys.length;i++)    // create a loop for insertFaculty 
		 {
			 if(facultys[i] == null)          // check (i)place is null or not
			 {
				facultys[i] = f ;          // insert faculty object in array 
				fa=1;
				break;
			 }
			 
		 }
		 if(fa ==1)
		System.out.println("-----Faculty inserted ----");
        else {System.out.println("Can Not inserted Faculty ");}	
		 
	 }
	 

public void removeFaculty(Faculty f)	  // remove faculty 
     {
		int fa=0;
		 for(int i=0;i<facultys.length;i++)
		 {
			 if(facultys[i] == f)
			 {
				facultys[i] = null ;    // intest null these place.
				fa=1;
				break;
			 }
			 
		 }
		 if(fa ==1)
		System.out.println("-----Faculty Removed----");
        else {System.out.println("Can Not Remove  Faculty ");}	
		 
	 }
	
	
	
public void ShowAllFaculty()
{
	System.out.println("---------Here is your all Faculty which added by you--------- ");
	for(int i=0; i<facultys.length;i++)
	{
		if(facultys[i] != null)
		{
			
			System.out.print(+(i+1)+"."); 
			facultys[i].show();             // Show all kind of faculty 
			System.out.println();
		}
		
	}
		
	
}	

// Below this line all code for student.

public void insertStudent(Faculty s)      // insert a student data in Faculty type of object.
     { 
        int st=0;
		for(int i=0;i<Allstudents.length;i++)
		  {
			if(Allstudents[i] ==  null)
			{
				Allstudents[i] = s;           // nseert these object.
				st=1;
				break;
			}
			  
			  
		  }
		 if(st==1) 
         System.out.println("******Successfully Added Student ********  \n");
         else{System.out.println("Sorry cannot addded this time");}


	 }
	 

public void removeStudent(String rm)      
     { 
	    
	 
        int st=0;
		for(int i=0;i<Allstudents.length;i++)
		  {
			if(Allstudents[i].getstudentId().equals(rm))   // check studentID match or not
			{
				Allstudents[i] = null;     //  if match then set null .
				st=1;
				break;
			}
		  
		  }
		 if(st==1) 
         System.out.println("******Successfully Removed--Student ********  \n");
          else{System.out.println("Sorry cannot Remove this time");}

	 }
 
 
 public void ShowStudent()       // Show all student 
{
	System.out.println("---------Here is your all Student which added by you--------- ");
	for(int i=0; i<Allstudents.length;i++)
	{
		if(Allstudents[i] != null)
		{
			
			System.out.print(+(i+1)+".");
			Allstudents[i].getData();     // Show all student data .
			System.out.println();
		}
		
	}

}


public void searchStudent(String r)   // Search any student by student name
     { 
	    
	 // use try function for checking is there any kind of error or not.
        try{
		for(int i=0; i<Allstudents.length; i++)
		  {
			if(Allstudents[i].getstudentId().equals(r))   // check name with all student name .
			{
				System.out.println("****** This student information is here********  \n");
				Allstudents[i].getData();
				break;
			}
			else {System.out.println("****** Sorry You enter wrong ID. ********  \n");}
		  }
		}catch(Exception e){System.out.println(" Exception(Student.java searchStudent() ): "+e); } // if there are any errors then this Exception function will be catch this. 
		
	 }

}