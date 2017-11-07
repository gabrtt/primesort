#include <stdio.h>

int verificaPrimo(int entrada){
    if(entrada < 2) return 0;
    if(entrada == 2) return 1;
    if(!(entrada%2)) return 0;

    for(int i = 3; i <= entrada/2;i+=2){

        if(!(entrada%i)) return 0;
        
    }
    
    return 1;
}

int main() {


FILE *file = popen("sort -r -n","w") ;

int entrada = 0;
    
if( file == NULL){
    printf("ERROW\n");
    return 0;
}

while(entrada != -1){   

    scanf("%d", &entrada);
    
    if(!verificaPrimo(entrada) && (entrada != -1)){
        fprintf(file, "%d\n", entrada);
    }
    
}
    pclose(file);
    return 0;
}
