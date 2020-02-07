public class run
{
  Clock clock = new Clock();
      
   public run(Clock clock){
       this.clock = clock;
  }
  
  public void rotation(){
     int x = 0;
     while(x < 2){
         if(this.clock.getNo().getCont() == 2){
             this.clock.getNo().setId(clock.getNo().getId() + 1);
             this.clock.getNo().setCont(0);
         }
         clock.proximoNo();
         x++;
     }
  }
  
}
