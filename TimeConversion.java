/*
Retrieves the local time and date, formats it properly.
Retrieves the time and date from Dhaka, Bangladesh.
Prints out the local time, date.
Prints out the time, date in Dhaka, Bangladesh in accordance with the local time, date.
Juxtaposes the two times and dates, returns whether the two times and dates are in sync or how much they differ (in hours).
*/

import java.util.TimeZone;
import java.util.Calendar;
import java.util.GregorianCalendar;

public class TimeConversion {
	public static void main(String[] args) {
		
		Calendar localTime = Calendar.getInstance();	
		int hour1 = localTime.get(Calendar.HOUR_OF_DAY); // .HOUR uses a 12-hour clock, .HOUR_OF_DAY uses a 24-hour clock
		int minute1 = localTime.get(Calendar.MINUTE);
		int second1 = localTime.get(Calendar.SECOND);
		int month1 = localTime.get(Calendar.MONTH) + 1; // Calendar starts months from 0
		int dayOfMonth1 = localTime.get(Calendar.DAY_OF_MONTH);
		int year1 = localTime.get(Calendar.YEAR);
		
		if (hour1 >= 12) {
			System.out.printf("Local Time: %02d:%02d:%02d PM \n", hour1, minute1, second1);
		} else {
			System.out.printf("Local Time: %02d:%02d:%02d AM \n", hour1, minute1, second1);
		}
		
		System.out.printf("Local Date: %02d/%02d/%02d \n", month1, dayOfMonth1, year1);
		
		Calendar banglaTime = new GregorianCalendar(TimeZone.getTimeZone("Asia/Dhaka"));
		banglaTime.setTimeInMillis(localTime.getTimeInMillis());
		int hour2 = banglaTime.get(Calendar.HOUR_OF_DAY); // .HOUR uses a 12-hour clock, .HOUR_OF_DAY uses a 24-hour clock
		int minute2 = banglaTime.get(Calendar.MINUTE);
		int second2 = banglaTime.get(Calendar.SECOND);
		int month2 = banglaTime.get(Calendar.MONTH) + 1; // Calendar starts months from 0
		int dayOfMonth2 = banglaTime.get(Calendar.DAY_OF_MONTH);
		int year2 = banglaTime.get(Calendar.YEAR);
		
		if (hour2 >= 12) {
			System.out.printf("Time in Dhaka, Bangladesh: %02d:%02d:%02d PM \n", hour2, minute2, second2);
		} else {
			System.out.printf("Time in Dhaka, Bangladesh: %02d:%02d:%02d AM \n", hour2, minute2, second2);
		}
		
		System.out.printf("Date in Dhaka, Bangladesh: %02d/%02d/%02d", month2, dayOfMonth2, year2);
		
		int timeDiff = hour2 - hour1;
		
		if (timeDiff > 0) {
			System.out.println("\nDhaka, Bangladesh is " + timeDiff + " hours ahead of your local time.");
		} else if (timeDiff < 0) {
			System.out.println("\nDhaka, Bangladesh is " + Math.abs(timeDiff) + " hours behind your local time.");
		} else {
			System.out.println("\nDhaka, Bangladesh is in sync with your local time.");
		}
		
		}
}

/*
Sample Output:
Local Time: 11:03:36 AM 
Local Date: 07/13/2022 
Time in Dhaka, Bangladesh: 21:03:36 PM 
Date in Dhaka, Bangladesh: 07/13/2022
Dhaka, Bangladesh is 10 hours ahead of your local time.
*/
