class IYou
{
	static string iyou(string msg)
	{	
		return "i " + msg.ToLower().replace(" ", "") + " you";
	}
}