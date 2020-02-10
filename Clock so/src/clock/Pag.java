package clock;

public class Pag {
	
    private Pag proximo;
    private char id;
    private int bitR;
    
    public Pag(char id, int bitR) {
    	this.id = id;
    	this.bitR = bitR;
    }
    
    public void setId(char id) {
        this.id = id;
    }
    
    public char getId() {
        return this.id;
    }
    
    public Pag getProximo() {
        return this.proximo;
    }
    
    public void setProximo(Pag node) {
        this.proximo = node;
    }
    
    public void setBitR(int BitR){
        this.bitR = BitR;   
    }
    
    public int getBitr(){
        return this.bitR;
    }
    
    public void usePage(){
        this.bitR++;
    }

}
