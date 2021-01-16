import static java.lang.System.*;
import java.util.Scanner;

public class Checkpassword{
	public static void main(String args[]){
		out.print("What's the password?");

		Scanner keyboard = new Scanner(in);
		String password = keyboard.next();

		out.println("You typed>>" + password + "<<");
		out.println();


		if(password == "swordfish"){
			out.println("The word you typed is stored");
			out.println("in the same place as the real");
			out.println("password. You must be a");
			out.println("hacker.");

		}

		else{

			out.println("The owrd you typed is not");
			out.println("stored in the same place");
			out.println("the real password, but that's");
			out.println("no big deal.");

		}

		out.println();

		if(password.equals("swordfish")){
			out.println("the word you typed has the");
			out.println("same chacters as the real");
			out.println("password. You can use our");
			out.println("precious system.");

		}

		else{

			out.println("the word you typed does't");
			out.println("have the same characters as");
			out.println("the real password. You can't");
			out.println("use our prrcious system.");
		}

		keyboard.close();
	}
}