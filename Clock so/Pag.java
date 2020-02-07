public class Pag{
    
    private Pag proximo;
    private int id;
    private int contP;
    
    public Pag(int id, int contP){
        this.id = id;
        this.contP = contP;
    }
    
    public void setId(int id) {
        this.id = id;
    }
    
    public int getId() {
        return id;
    }
    
    public Pag getProximo() {
        return proximo;
    }
    
    public void setProximo(Pag node) {
        proximo = node;
    }
    
    public void setCont(int cont){
        this.contP = cont;   
    }
    
    public int getCont(){
        return this.contP;
    }
    
    public void NoUsePage(){
        this.contP++;
    }
}