public class Music{

    // Statict
    
    private int QtdArts;
    private String title = new String();
    private String[] artistlist;
    private long time;
    private String gen = new String();
    private char harm;
    private String record = new String();
    
    //methods
    
    public Music(int QtdArts, String title, String[] artistlist, long time, String gen,
    char harm, String record){
        
        this.QtdArts = QtdArts;
        this.time = time;
        this.title = title;
        this.gen = gen;
        this.harm = harm;
        this.record = record;
        this.artistlist = new String[QtdArts];
        for(int i = 0; i < QtdArts; i++){
            this.artistlist[i] = artistlist[i];
        };
        
    };
    
    public boolean Equals(Music outra){
        
        int equal = 0;
        
        for(int iCont = 0; iCont < this.QtdArts; iCont++){
            if(this.artistlist[iCont] == outra.artistlist[iCont]){
               equal += 1;
            }
        }
        if(equal == this.QtdArts){
            if(this.title == outra.title){
                return true;
            }else
                return false;
        }else
            return false;
        
    }
    
    public double proximidade(Music outra){
    
        float prox = 0;
        
        if(this.harm == outra.harm)
            prox += 1;
            
        prox +=((this.getGravadora().equals(outra.getGravadora())) ? 1 : 0);
        prox +=((this.getGenero().equals(outra.getGenero())) ? 1 : 0);              
        prox += pctArtistas(outra);
        
        return prox;
    }
    
    public double pctArtistas(Music outra){
        double aux = 0;
        for(int iCont = 0; iCont < this.QtdArts; iCont++){
            for(int jCont = 0; jCont <outra.QtdArts; jCont++){
                if(this.artistlist[iCont] == outra.artistlist[jCont]){
                    aux++;
                };
            }
        }
        return aux/this.QtdArts;
    }
        
        
    public char getHarm(){
        return this.harm;
    }
    
    public String getGravadora(){
        return this.record;
    }
    
    public String getGenero(){
        return this.gen;
    }
    
    public long getDuracao(){
        return this.time;
    }
    
    private void setQtdartistas(int qtd){
        this.QtdArts = qtd;  
    }
    
    private void setNomeartista(String[] nome){
        this.artistlist = nome;
    }
    
    private void setGravadora(String gravadora){
        this.record = gravadora;
    }
    
    private void setCampo(char campo){
        this.harm = campo;
    }
    
    private void setDuring(long duracao){
        this.time = duracao;
    }
    
    private void setTitulo(String titulo){
        this.title = titulo;
    }
}
