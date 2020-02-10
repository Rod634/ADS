package clock;

public class Teste {
	 
	public static void main(String[] args) {
        clock circular = new clock();
        int tam = 7;
        int qtdPro = 1;

        Pag pg = new Pag('G', 1);
        circular.add(pg);
        Pag pf = new Pag('F',1);
        circular.add(pf);
        Pag pe = new Pag('E',1);
        circular.add(pe);
        Pag pd = new Pag('D',1);
        circular.add(pd);
        Pag pc = new Pag('C',1);
        circular.add(pc);
        Pag pb = new Pag('B',1);
        circular.add(pb);
        Pag pa = new Pag('A',1);
        circular.add(pa);
        
        
        System.out.println("Tamanho da memoria " + tam + "\n");
        
        System.out.println("Primeira chance\n");
        
        for(int i = 0; i < tam; i++) {
        	if(circular.getNo().getBitr() == 0 || circular.getNo().getBitr() == 1) {
	         	System.out.println("PROCESSO: " + circular.getNo().getId() + " BitR: " + circular.getNo().getBitr());
	         	circular.proximoNo();
        	}
        }
        
    	System.out.println();
        	
        for(int i = 0; i< qtdPro; i++) {
        	if(circular.getNo().getBitr() == 1) {
        		circular.getNo().setBitR(0);
        		circular.proximoNo();
        	}	
        }	
        
        System.out.println("Segunda chance\n");
        
        for(int i = 0; i < tam; i++) {
        	if(circular.getNo().getBitr() == 0 || circular.getNo().getBitr() == 1) {
	         	System.out.println("PROCESSO: " + circular.getNo().getId() + " BitR: " + circular.getNo().getBitr());
	         	circular.proximoNo();
        	}
        }
        
        for(int i = 0; i < tam; i++) {
        	if(circular.getNo().getBitr() == 0) {
        		System.out.println("\nPROCESSO: " + circular.getNo().getId() + " BitR: " + circular.getNo().getBitr() + " saiu\n");
        		circular.getNo().setBitR(-1);
	         	circular.proximoNo();
        	}else {
        		circular.proximoNo();
        	}
        }
        
        System.out.println("resultado\n");
        
        for(int i = 0; i < tam; i++) {
        	if(circular.getNo().getBitr() == 0 || circular.getNo().getBitr() == 1) {
	         	System.out.println("PROCESSO: " + circular.getNo().getId() + " BitR: " + circular.getNo().getBitr());
	         	circular.proximoNo();
        	}else {
        		circular.proximoNo();
        	}
        		
        }
        
        
    }
}

	
