typedef struct {
    int real;
    int imaginario;
} num_complexo;

num_complexo inicializa (int,int);
void soma(num_complexo,num_complexo);
void imprime(num_complexo);
void copia(num_complexo*,num_complexo);
int real(num_complexo);
