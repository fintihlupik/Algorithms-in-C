#include <unistd.h>

void write_number(int number){

    char c;

    if(number>=10){  
        write_number(number/10); 
    }
    c = number%10 + '0';
    write(1,&c,1);  
}

int main()
{
    int i;

    i = 0;
    while (i++ < 100){
        if(i%5 == 0){
            if(i%3 == 0)
                write(1,"fizzbuzz",8);
            else
                write(1,"buzz",4);
        }
        else if(i%3 == 0)
            write(1,"fizz",4);
        else
            write_number(i);
        write(1,"\n",1);
    }
}

void number(int i){
    char c;

    if (i>=10)
        number(i/10);
    c = i%10 + '0'; 
    write(1,&c,1);
}



int main(){
    int i;
    
    i = 0;
    while (i++ < 100){
        if(i%15==0)
            write(1,"fizzbuzz",8);
        else if(i%5==0)
            write(1,"buzz",4);
        else if(i%3==0)
            write(1,"fizz",4);
        else
            number(i);
        write(1,"\n",1);
    }

}
