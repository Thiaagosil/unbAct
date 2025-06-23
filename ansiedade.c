#include <stdio.h>

int comparar_strings(char *str1, char *str2){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return 0;
        }        
        i++;
    }
    return(str1[i] == '\0' && str2[i] == '\0');

}



int main() {
    char resposta[10]; 
    int triagens = 0; 
    int sim_count;
    
    while (1) {
        sim_count = 0;
        
        for (int i = 0; i < 10; i++) {
            if (scanf("%s", resposta) == EOF) {
                break;
            }

      
            if (comparar_strings(resposta, "sim") == 1) {
                sim_count++;
            }
        }

        if (feof(stdin)) {
            break;
        }
        
        if (sim_count >= 2) {
            triagens++;
        }
    }
    
    printf("%d\n", triagens);
    
    return 0;
}
