package teacherStudent;                          // declearing package for teacherStudent folder.

import java.util.Scanner;                       // import scanner package
public class Faculty
{
private String Name;
private String course;                      // here we declearing some String which is private
private String email;

 Scanner in=new Scanner(System.in);
public Faculty (){     
    //empty construstor.                    // enpty construstor (No work done this line).
 }
public Faculty(String Name,String course,String email){                         // parameterized construstor for set value.
	this.Name=Name;
	this.course=course;                             
	this.email=email;
}

public void setName(String Name)           // create setter method for set faculty member name.
{
	this.Name=Name;

}

public void setCourse(String course)          // create setter method for set course name.
{
	this.course=course;
}

public void setEmail(String email)            // create setter method for set faculty members email.
{
	
	this.email=email;
}


    public String getName()                // create getter method for get faculty member name.
	{
		return Name;
	}
	
    public String getCourse()              // create getter method for get faculty course name.
	{
	return course;
	}
	
    public String getEmail()            // create getter method for get faculty member email.
	{
		return email;
	}
    	
/*
Create a show() function for show all value of faculty member or teacher.
*/


public void show(){
	System.out.println("Name="+Name+"\t\t\t\t Course="+course+"\t\t\t\t Email="+email);
}

 // after this line code for student  because every student has faculty.
 
/*
declearing some String veriable for Student.
*/
                public String studentName;
                public String studentId;
                public String studentcourseName;      
                public String studentAddress;
                public String studentPhonNumber;

//parameterized function for set all value of student.

public void setData(String studentName,String studentId,String studentcourseName,String studentaddress,String studentemail)
{
	this.studentName=studentName;
	this.studentId=studentId;
	this.studentcourseName=studentcourseName;
	this.studentAddress=studentAddress;
	this.studentPhonNumber=studentPhonNumber;
	
}

public void setstudentname(String studentName)          // create setter method for set student name. 
 
  { 
     this.studentName=studentName;
   
  }
  
public void setstudentId(String studentId)         // create setter method for set student ID.

  {
	  this.studentId=studentId;
	  
  }  
  
  
public void setstudentcourseName(String studentcourseName)         // create setter method for set student courseName.

  {
	  this.studentcourseName=studentcourseName;
	  
  } 

  
public void setstudentaddress(String studentAddress)             // create setter method for set student address.

  {
	  this.studentAddress=studentAddress;
	  
  } 

  
public void setstudentPhonNumber(String studentPhonNumber)          // create setter method for set student mobile Number.

  {
	  this.studentPhonNumber=studentPhonNumber;
	  
  }  


//gettter method for student data 


public String  getstudentname()          //get student name
     {
		 return studentName;
	 }
	 
public String getstudentId()         //get student ID
     {
		 return studentId;
	 }
	 
public String getstudentcourseName()    //get student course name
     {
		 return studentcourseName;
	 }
	 
public String getstudentAddress()      //get student address
     {
		 return studentAddress;
	 }
	 
public String getstudentPhonNumber()     //get student mobile number.
     {
		 return studentPhonNumber;
	 }
  
public void  getData()     // create this function for get all student value.
     {
      System.out.print("Name:"+studentName+"\t\t\t ID:"+studentId+"\t\t\t Course:"+studentcourseName+"\n Address:"+studentAddress+"\t\t\t Mobile:"+studentPhonNumber);
      System.out.println();
	 }
	
	
	
	

}