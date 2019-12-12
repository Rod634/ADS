class Door{
    
    public boolean status; //status can be true or false
    
    public Door(){
        this(false);
    }
    
    public Door(boolean other){
        this.Setclose();
    }
    
    public Door(Door other){
        this(other.Getstate());
    }
    
    public void Setopen(){
        this.status = true;
    }
    
    public void Setclose(){
        this.status = false;
    }
    
    public boolean Getstate(){
        return this.status;
    }
       
    
}