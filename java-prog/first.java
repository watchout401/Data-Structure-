import  static java.lang.System.in;
import  static java.lang.System.out;
import java.util.Scanner;
import java.util.Random;


public class first {

    public static void main(String[] args) {

        System.out.println ("Hello World");

        Scanner keyboard = new Scanner(in);

        out.print("Enter an int form 1 to 10 ");

        int inputNumber = keyboard.nextInt();
        int randomNumber = new Random().nextInt(10)+1;
        if (inputNumber == randomNumber )
        {
            out.println("you win ");

        }

        out.println("That was a very good guess");
        out.println("the random number was ");
        out.println(randomNumber + ".");
        out.println("Thank you for playing.");
        keyboard.close();
    }


}