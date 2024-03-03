import java.util.Scanner;
class Vehicle {
    Scanner x = new Scanner(System.in);
    private
    int year;
    String brand;
    public
    void set_p(){
        System.out.print("brand name : ");
        brand=x.nextLine();
        System.out.print("manufacturing year : ");
        year=x.nextInt();
    }
    void displayP(){
        System.out.println("vehicle details");
        System.out.println("brand name of vehicle is : "+brand);
        System.out.println("manufactoring year : "+year);
    }
}

class Bike extends Vehicle{
    private
    int price;
    public
    void set_c(){
        set_p();
        System.out.print("enter the price : ");
        price=x.nextInt();
    }
    void displayC(){
        displayP();
        System.out.println("the price is: "+price);
    }
}

public class SimpleInherit{
    public static void main(String[] args) {
        Bike b1 = new Bike();
        b1.set_c();
        b1.displayC();
    }
}
