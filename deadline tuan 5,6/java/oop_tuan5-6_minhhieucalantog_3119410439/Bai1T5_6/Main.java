package Tuan5_6.Bai1T5_6;

public class Main {
    public static void main(String[] args)
    {
        Circle c=new Circle(10,"red");
        System.out.println(c);

        Cylinder c1 = new Cylinder();
        System.out.println(c1);
 
        Cylinder c2 = new Cylinder(10.0);
        System.out.println(c2);

        Cylinder c3 = new Cylinder(2.0, 10.0,"del");
        System.out.println(c3);

    }



}
