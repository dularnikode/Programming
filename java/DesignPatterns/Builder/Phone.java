public class Phone {

    private String os;
    private int rom;
    private String processor;
    private double screenSize;
    private int battery;

    public Phone (String os,int rom,String processor,double screenSize,int battery){
        super();
        this.os=os;
        this.rom=rom;
        this.processor=processor;
        this.screenSize=screenSize;
        this.battery=battery;
    }
    @Override
    public String toString(){
        return "Phone[os="+os+", rom="+rom+",battery="+battery+"processor= "+processor+", screenSize= "+screenSize+"]";
    }
    
}