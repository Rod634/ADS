package clock;

public class clock {
	
	    private Pag pag;
	    private int cont;
	    
	    public clock() {
	        this.pag = null;
	        cont = 0;
	    }
	    
	    public int quantDeNo() {
	        return this.cont;
	    }
	    
	    public Pag getNo() {
	        return this.pag;
	    }
	    
	    public void proximoNo() {
	        pag = pag.getProximo();
	    }
	    
	    public void add(Pag node) {
	        if (this.pag == null) {
	            node.setProximo(node);
	            this.pag = node;
	        } else {
	            node.setProximo(this.pag.getProximo());
	            this.pag.setProximo(node);
	        }
	        cont++;
	    }
	  
}
