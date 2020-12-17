import java.lang.String;
public class myclassinterface 
{
    void out(int c){
	System.out.println("multiple inhertance using interface and abstracct method"+c);
	}
}

interface father
{
	double ht=6.2;
	void height();
}
interface mother
{
	double ht=5.2;
	void height();
}

class child implements mother,father
{
	public void height()
	{
		double ht=(father.ht+mother.ht)/2;
		
		System.out.println("child height is : "+ht);
	}
}
class full
{
	public static void main(String args[])
	{
		myclassinterface obj=new myclassinterface();
		child obj1=new child();
		
		obj.out(2);
		obj1.height();
	}
}

