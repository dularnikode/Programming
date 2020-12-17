//Wrapper class demo


public class WrapperClass{

    public static void public static void main(String[] args) {
        int i = 5;
        Integer ii = new Integer(i); //Boxing

        Integer jj= i ; //auto boxing

        int j = jj.intValue(); //Unboxing 

        int k =jj; //Auto Unboxing

        //use Case iN collection

        ArrayList<Integer> values =new ArrayList();

        values.add(5);
        values.add(7);
        values.add(8);
        values.add("Dular");


        //int :: -when we want speed and no functionality use Int -Premetive(Loops and Operations)
        
        //Integer :: -when we want more functiononality use Integer Object -nonPremetive(Frameworks)




        
    }
}