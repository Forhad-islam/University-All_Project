package teacherStudent;                // declearing package name
import java.lang.*;                  
import java.util.Scanner;           

// we implements A,B class in C class.
public class C implements A, B{

// rewrite abstract function of class A. And we have  created a body.
    public double MidTerm(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Please provide Mid Term marks: \n");
        System.out.println("Provide Attendance marks(Out of 10):");
        int A = sc.nextInt();
        System.out.println("Provide Performance marks (Out of 10):");
        int P = sc.nextInt();
        System.out.println("Provide first Quiz mark (Out of 20) :");
        int m1 = sc.nextInt();
        System.out.println("Provide second quiz mark (Out of 20) :");
        int m2 = sc.nextInt();
        System.out.println("Provide marks of written exam (Out of 40) :");
        int W = sc.nextInt();
        float converter = 40/100F;                                         //  we will count  only 40% mark from mid.
        double M = converter * (A + P + m1 + m2 + W) ;
        System.out.println("Mid term Mark: "+M);
        return M;
    }

// rewrite abstract function of class B. And we have  created a body.
    public double FinalTerm(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Please provide Final Term marks:\n");
        System.out.println("Provide Attendance marks(Out of 10):");
        int A = sc.nextInt();
        System.out.println("Provide Performance marks (Out of 10):");
        int P = sc.nextInt();
        System.out.println("Provide first Quiz mark (Out of 20) :");
        int m1 = sc.nextInt();
        System.out.println("Provide second quiz mark (Out of 20) :");
        int m2 = sc.nextInt();
        System.out.println("Provide marks of written exam (Out of 40) :");
        int W = sc.nextInt();
        float converter = 60/100F ;                                     // we will count 60% mark  from Final term.
        double F = converter * (A + P + m1 + m2 + W) ;
        System.out.println("Final term Mark: "+F);
        return F ;

    }
}