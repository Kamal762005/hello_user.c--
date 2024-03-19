import java.util.*;
public class m_overriding {
    //public
    void set(int a){
        System.out.println("the value of integer is "+a);
    }
    void set(double b){
        System.out.println("the value of float is "+b);
    }
}
class test{
    public static void main(String[] args) {
        m_overriding obj =new m_overriding();
        obj.set(12);
        obj.set(122.3);
    }
}
