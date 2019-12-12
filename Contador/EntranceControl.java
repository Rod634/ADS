class EntranceControl{

    Door door = new Door();
    LapseCount Lapse = new LapseCount();

    public void Setopen(){
        if(!this.door.Getstate()){
            this.Lapse.Setincrement();
            this.door.Setopen();
        }
    }

    public void close(){
        this.door.Setclose();
    }

    public int Cont(){
        return this.Lapse.Getstatus();
    }

    public void reset(){
        this.door.Setclose();
        this.Lapse.Setinitializer();
    }

}