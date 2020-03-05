public class MapaRGB extends Mapas
{
    int r;
    int g;
    int b;
 
    public MapaRGB(int r, int g, int b){
        this.r = r;
        this.g = g;
        this.b = b;
    }
    
    public void setPixel(Pixel[][] pixel){
    }
    
    public void setR(int r){
        if(r > 0 && r < 255) this.r = r;
    }
    
    public void setG(int g){
       if(g > 0 && g < 255) this.g = g;
    }
    
    public void setB(int b){
        if(b > 0 && b < 255) this.b = b;
    }
    
    public int getR(){
        return this.r;
    }
    
    public int getG(){
        return this.g;
    }
    
    public int getB(){
        return this.b;
    }
    
    public String tupla(){
        return "(" + this.r + ", " + this.g + ", " + this.b + ")";
    }
    
}
