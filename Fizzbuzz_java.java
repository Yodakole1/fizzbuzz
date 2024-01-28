/*
 * FizzBuzz in java
 */
import java.util.Scanner;
import java.util.ArrayList;

class Fizzbuzz_java{
    
    static Scanner idk = new Scanner(System.in);
    
    public static void metod(int num,ArrayList<String> resenje){
        for(int i =1; i<num;i++){
            if(i%5==0 && i%3==0){
                resenje.add("FizzBuzz");
            }   else if(i%5==0){
                resenje.add("Buzz");
            }   else if(i%3==0){
                    resenje.add("Fizz");
            }   else {
                resenje.add(String.valueOf(i));
            }
        }
        System.out.println(resenje);
    }
    
    public static void main(String[] args){
        
        ArrayList<String> resenje = new ArrayList<String>();
        System.out.println("Enter a number: ");
        int num = idk.nextInt();
        metod(num, resenje);
    }
}