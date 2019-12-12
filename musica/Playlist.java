public class Playlist
{
   public String name = new String();
   public Music[] musicas;
   
   public Playlist(String name){
       musicas = new Music[0];
       this.name = name;
   }
   
   public void addplay(Music musica){
       Music[] outra = new Music[this.musicas.length + 1];
       for(int iCont = 0; iCont < this.musicas.length; iCont++){
           outra[iCont] = this.musicas[iCont];
       }
       outra[musicas.length] = musica;
       this.musicas = outra;
   }
   
   public Music[] getplaylits(){
       return this.musicas;
   }
   
   private void setName(String nome){
       this.name = nome;
   }
}
