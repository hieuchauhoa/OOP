package bt1;



public class hinhchunhat extends SHAPE
{
    POINT lt,rb;
    public hinhchunhat(POINT p1, POINT p2)
    {
        lt=new POINT(p1.x, p1.y);
        rb=new POINT(p2.x, p2.y);
    }

    int getWidth()
        {
            return Math.abs(lt.y-rb.y);
        }   
        


}
