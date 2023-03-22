package Tuan5_6.Bai2T5_6;

public class Main 
{
    public static void main(String[] args)
    {
        Person pr=new Person("hieu", "chau hoa");
        System.out.println(pr);

        Student st=new Student("hieu", "chau hoa", "program", 2001, 1.0);
        System.out.println(st);

        Staff stf=new Staff("hieu", "chau hoa ", "dh sai gon", 10.0);
        System.out.println(stf);
    }
}
