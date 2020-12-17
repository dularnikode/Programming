public class Shop{

    public static void main(String args[]){
        // Phone p=new Phone("Android",2,"qualcom",5.5,3100);
        Phone p= new PhoneBuilder().setOs("Android").setBattery(5100).getPhone();
        System.out.println(p);
    }

}