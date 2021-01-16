import static java.lang.System.out;
public class  Making{
	
	public static void main (String args[])
	{

		int total = 248;
		int quaters = total /25 ;
		int whatsLeft = total%25;

		int dimes  = whatsLeft /10;
		whatsLeft = whatsLeft % 10;

		int nickels = whatsLeft / 5 ;
		whatsLeft = whatsLeft % 5 ;
		int cents = whatsLeft ; 

		out.println("From " + total + " cents you get");
		out.println(quaters + "quaters");
		out.println(dimes + " dimes");
		out.println(nickels + "nickels");
		out.println(cents + " cents");
	}
}