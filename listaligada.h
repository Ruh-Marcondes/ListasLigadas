#ifdef LISTALIGADA_H

   typedef struct no{
    int value;
    struct no *next; //isso aqui é umponteiro do tipo structic. Isso é responsavel por mostrar pro proximo nó.
}No;


// variaveis

extern struct no *inico;
extern struct no *aux;
extern struct no *antes;

//protoripos
void inicializar();
void finalizar(struct no *quem);//Mostra quem é que finaliza a lista
void adicionar(int dado);
void adicionarNoInicio();
void adicionarNoMeio();
void adicionarNoFim();
    
    

#endif // LISTALIGADA_H