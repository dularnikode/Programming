import java.util.*;

public class Collection 
{
	public static void main(String []args)
	{
		ArrayList<String> l1=new ArrayList<String>(4);
		l1.add("Ajay");
		l1.add("Rahul");
		l1.add("Dular");
		l1.add("Shri");
		//using iterator
		/*
		Iterator it=l1.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}
		*/

		//System.out.println("using for each Loop:");   
		/*
		for(String a:l1){
		System.out.println(a);
		}
		*/

		//System.out.println("Traversing list through List Iterator:");    
		/*
		ListIterator<String> list1=l1.listIterator(l1.size());  
        while(list1.hasPrevious())  
        {  
		String str=list1.previous();  
		System.out.println(str);  
		} 
		*/

		//System.out.println("Traversing list through forEach() method:");  
		/*
		l1.forEach((a)->{ //Here, we are using lambda expression  
        System.out.println(a);  
        });  
		*/
		Vector v =new Vector();
		v.addElement("One");
		v.addElement("Two");
		v.addElement("Three");
		v.addElement("Four");
		System.out.println(v);

		//System.out.println("Iterate vector using Enumerator cursor")
		/*
		Enumeration e= v.elements();

		while(e.hasMoreElements()){
			String s=(String)e.nextElement();
			System.out.println(s);
		}
		*/
		LinkedList l=new LinkedList();

		l.add("C");
		l.add("CPP");
		l.add("Java");
		l.add("PHP");
	
		System.out.println("using ListIterator to Iteratete");
		/*
		System.out.println(l);
		ListIterator lit= l.listIterator();
		
		while(lit.hasNext()){
			String s=(String)lit.next();
			if(s.equals("Java")){
				lit.set("Java Core");
			}
			else if(s.equals("C")){
				lit.add("DS");
			}
		}
		System.out.println(l);
		*/

		HashSet h=new HashSet();
		h.add("One");
		h.add("Two");
		h.add("Three");
		h.add("Four");

		System.out.println(h);
	}

}