public class IYou {
	public static String main(String msg){
		return "i " + (msg.toLowerCase().replaceAll("\\s+","")) + " you"
	}
}