// Question 1: Simple Interest
// Write a program to calculate and print simple interest.
// Formula: Simple Interest = (Principal * Rate * Time) / 100

// Example:
// Input: 
// Principal = 1000
// Rate = 5
// Time = 2

// Output:
// Simple Interest = 100

public class SimpleInterest{
    double calculateSimpleInterest(double principal, double rate, double time){
        double SI = (principal* rate* time)/100;
        return SI;
    }

    public static void main(String[] args)
    {
        double principal = 1000;
        double rate = 5;
        double time = 2;
        
        SimpleInterest si = new SimpleInterest();
        double result = si.calculateSimpleInterest(principal, rate, time);
        System.out.println("Simple Interest:" + result);

    }
}
