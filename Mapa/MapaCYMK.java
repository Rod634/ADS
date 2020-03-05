public class MapaCYMK extends Mapas
{
    int c;
    int m;
    int y;
    int k;
 
    public MapaCYMK(int c, int m, int y, int k){
        this.c = c;
        this.m = m;
        this.y = y;
        this.k = k;
    }
    
    public void setPixel(Pixel[][] pixel){
        
    }
    
    public void setC(int c){
        if(c > 0 && c < 100) this.c = c;
    }
    
    public void setM(int m){
        if(m > 0 && m < 100) this.m = m;
    }
    
    public void setY(int y){
        if(y > 0 && y < 100) this.y = y;
    }
    
    public void setK(int k){
        if(k > 0 && k < 100) this.k = k;
    }
    
    public int getC(){
        return this.c;
    }
    
    public int getM(){
        return this.m;
    }
    
    public int getY(){
        return this.y;
    }
    
    public int getK(){
        return this.k;
    }
    
    public String tupla(){
        return "(" + this.c + ", " + this.m + ", " + this.y + ", " + this.k + ")";
    }
}
