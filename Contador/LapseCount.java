class LapseCount{
    
    public int loop;
    
    public void LapseCount(){ //construtor = tem o mesmo nome da classe e a inicializa
        this.Setinitializer();
    }
    
    public void Setincrement(){
        this.loop++;
    }
    
    public void SetAdd(int value){
        this.loop += value;
    }
    
    public void SetAddcount(LapseCount other){
        this.loop += other.loop;
    }
    
    public void Setinitializer(){
        this.loop = 0;
    }
    
    public int Getstatus(){
        return this.loop;
    }
        
    
}