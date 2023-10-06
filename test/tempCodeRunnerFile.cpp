int main(){
    void fun();
    fun();
}

void fun(){
    int i=10;
    if(i<10) return 2.0;
    return 3.0;
}