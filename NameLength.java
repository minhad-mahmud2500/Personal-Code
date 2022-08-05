/* 
 * Can take in names of any length and will return the correct amount of letters in the given name.
 * Accounts for white spaces to produce the correct length.
 */

import java.util.Scanner;

public class NameLength {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.print("Please enter your full name: ");
		String name = scan.nextLine();
		
		System.out.println("Your name has a length of " + name.replace(" ", "").length() + " letters.");
		
		scan.close();
	}
}

/*
 * Sample Output:
 * Please enter your full name: Olamide Otunjele Bagune Ratibu
 * Your name has a length of 27 letters.
*/
