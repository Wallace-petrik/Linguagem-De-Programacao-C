#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    char resp;
    printf("\nResponda \"s\" minusculo para, sim.\nQualquer coisa diferente de \"s\", ser� considerado N�o.");
    printf("\n� R�pteis:");
        scanf(" %c",&resp);

    if(resp=='s'){
        printf("\nCom casco:");
            scanf(" %c",&resp);
            if(resp=='s'){
                printf("\nTartaruga");
            }else{
                printf("\nCarn�voros:");
                    scanf(" %c",&resp);
                    if(resp=='s'){
                        printf("\nCrocodilo");
                    }else{
                        printf("\nSem patas:");
                            scanf(" %c",&resp);
                            if(resp=='s'){
                                printf("\nCobra");
                            }else{
                                printf("\nErro ao definir animal.\nOu resposta invalida.");
                            }
                    }
            }
    }else{
        printf("\n� Aves:");
            scanf(" %c",&resp);
        if(resp=='s'){
        printf("\nNadadoras:");
            scanf(" %c",&resp);
            if(resp=='s'){
                printf("\nPato");
            }else{
                printf("\nDe rapina:");
                    scanf(" %c",&resp);
                    if(resp=='s'){
                        printf("\n�guia");
                    }else{
                        printf("\nN�o-voadoras:");
                            scanf(" %c",&resp);
                            if(resp=='s'){
                                printf("\nTropicais:");
                                    scanf(" %c",&resp);
                                    if(resp=='s'){
                                        printf("\nAvestruz");
                                    }else{
                                       printf("\nPolares:");
                                        scanf(" %c",&resp);
                                        if(resp=='s'){
                                            printf("\nPinguim");
                                        }else{
                                            printf("\nErro ao definir animal.\nOu resposta invalida.");
                                        }
                                    }
                            }else{
                                printf("\nErro ao definir animal.\nOu resposta invalida.");
                            }
                    }
            }
        }
        printf("\n� Mam�feros:");
            scanf(" %c",&resp);
            if(resp=='s'){
            printf("\nAqu�tico:");
                scanf(" %c",&resp);
                if(resp=='s'){
                    printf("\nBaleia");
                }else{
                    printf("\nVoadores:");
                        scanf(" %c",&resp);
                        if(resp=='s'){
                            printf("\nMorcego");
                        }else{
                            printf("\nB�pedes:");
                                scanf(" %c",&resp);
                                if(resp=='s'){
                                    printf("\nOn�voros:");
                                        scanf(" %c",&resp);
                                        if(resp=='s'){
                                            printf("\nHomem");
                                        }else{
                                           printf("\nFrut�voros:");
                                            scanf(" %c",&resp);
                                            if(resp=='s'){
                                                printf("\nMacaco");
                                            }else{
                                                printf("\nErro ao definir animal.\nOu resposta invalida.");
                                            }
                                        }
                                }
                        printf("\nQuadr�pedes:");
                            scanf(" %c",&resp);
                            if(resp=='s'){
                                printf("\nCarn�voros:");
                                    scanf(" %c",&resp);
                                    if(resp=='s'){
                                        printf("\nLe�o");
                                    }else{
                                       printf("\nHerb�voros:");
                                        scanf(" %c",&resp);
                                        if(resp=='s'){
                                            printf("\nCavalo");
                                        }else{
                                            printf("\nErro ao definir animal.\nOu resposta invalida.");
                                        }
                                    }
                            }else{
                                printf("\nErro ao definir animal.\nOu resposta invalida.");
                            }
                    }
            }
        }else{
            printf("\nErro ao definir animal.\nOu resposta invalida.");
        }
    }

    return 0;
}
