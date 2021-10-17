// Program to calculate the percentage of 5 subjects 
// takes the input of max marks 

import java.util.Scanner;
public class E1_percentage{
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
    //   taking the input of max marks for more efficiency
      System.out.print("Enter the max marks of all subjects: ");  
      float max = sc.nextFloat();
      max *= 5;
      System.out.println("Enter your respected subject marks-->");  
      System.out.print("Subject 1: ");
      float s1 = sc.nextFloat();
      System.out.print("Subject 2: ");
      float s2 = sc.nextFloat();
      System.out.print("Subject 3: "); 
      float s3 = sc.nextFloat();
      System.out.print("Subject 4: ");
      float s4 = sc.nextFloat();
      System.out.print("Subject 5: ");
      float s5 = sc.nextFloat();
      float total = s1 + s2 + s3 + s4 + s5;
      System.out.println("Total marks: "+total);
      float prcnt = total / max * 100;
      System.out.println("Percentage: "+prcnt+" %");
    }
}

