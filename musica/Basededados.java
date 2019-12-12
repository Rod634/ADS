public class Basededados
{
    Music[] musicas;
    
    private Basededados(){
        this.musicas = new Music[0];
    }
    
    private void addMusic(Music musica){
       Music[] outra = new Music[this.musicas.length + 1];
       for(int iCont = 0; iCont < this.musicas.length; iCont++){
           outra[iCont] = this.musicas[iCont];
       }
       outra[this.musicas.length] = musica;
       this.musicas = outra;
    }
    
    private Playlist setnovaplay(String nome, long duracao, Playlist nova){
        Playlist similar = new Playlist(nome);
        return nova;
    }
    
    
}
