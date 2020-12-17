package college;
import java.lang.String;
import java.lang.System;
public class teacher {
	protected void printt1()
	{
		System.out.println("Inside private teacher");
	}
	
	public void printt2()
	{
		System.out.println("Inside public teacher");
		printt1();
	}

}

