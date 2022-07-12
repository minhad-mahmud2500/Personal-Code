import java.util.TimeZone;
import java.util.Calendar;
import java.util.GregorianCalendar;

public class TimeConversion {
	public static void main(String[] args) {
		
		Calendar localTime = Calendar.getInstance();
		
		int hour = localTime.get(Calendar.HOUR_OF_DAY); // .HOUR uses a 12-hour clock
		int minute = localTime.get(Calendar.MINUTE);
		int second = localTime.get(Calendar.SECOND);
		int month = localTime.get(Calendar.MONTH) + 1; // Calendar starts months from 0
		int dayOfMonth = localTime.get(Calendar.DAY_OF_MONTH);
		int year = localTime.get(Calendar.YEAR);
		
		if (hour >= 12) {
			System.out.printf("Local Time: %02d:%02d:%02d PM \n", hour, minute, second);
		} else {
			System.out.printf("Local Time: %02d:%02d:%02d AM \n", hour, minute, second);
		}
		
		System.out.printf("Local Date: %02d/%02d/%02d \n", month, dayOfMonth, year);
		
		Calendar banglaTime = new GregorianCalendar(TimeZone.getTimeZone("Asia/Dhaka"));
		banglaTime.setTimeInMillis(localTime.getTimeInMillis());
		hour = banglaTime.get(Calendar.HOUR_OF_DAY); // .HOUR uses a 12-hour clock
		minute = banglaTime.get(Calendar.MINUTE);
		second = banglaTime.get(Calendar.SECOND);
		month = banglaTime.get(Calendar.MONTH) + 1; // Calendar starts months from 0
		dayOfMonth = banglaTime.get(Calendar.DAY_OF_MONTH);
		year = banglaTime.get(Calendar.YEAR);
		
		if (hour >= 12) {
			System.out.printf("Time in Dhaka, Bangladesh: %02d:%02d:%02d PM \n", hour, minute, second);
		} else {
			System.out.printf("Time in Dhaka, Bangladesh: %02d:%02d:%02d AM \n", hour, minute, second);
		}
		
		System.out.printf("Date in Dhaka, Bangladesh: %02d/%02d/%02d", month, dayOfMonth, year);
	}
}