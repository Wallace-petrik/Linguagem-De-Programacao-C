#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    char resp;
    printf("\nResponda \"s\" minusculo para, sim.\nQualquer coisa diferente de \"s\", será considerado Não.");
    printf("\nÉ Répteis:");
        scanf(" %c",&resp);

    if(resp=='s'){
        printf("\nCom casco:");
            scanf(" %c",&resp);
            if(resp=='s'){
                printf("\nTartaruga");
            }else{
                printf("\nCarnívoros:");
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
        printf("\nÉ Aves:");
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
                        printf("\nÁguia");
                    }else{
                        printf("\nNão-voadoras:");
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
        printf("\nÉ Mamíferos:");
            scanf(" %c",&resp);
            if(resp=='s'){
            printf("\nAquático:");
                scanf(" %c",&resp);
                if(resp=='s'){
                    printf("\nBaleia");
                }else{
                    printf("\nVoadores:");
                        scanf(" %c",&resp);
                        if(resp=='s'){
                            printf("\nMorcego");
                        }else{
                            printf("\nBípedes:");
                                scanf(" %c",&resp);
                                if(resp=='s'){
                                    printf("\nOnívoros:");
                                        scanf(" %c",&resp);
                                        if(resp=='s'){
                                            printf("\nHomem");
                                        }else{
                                           printf("\nFrutívoros:");
                                            scanf(" %c",&resp);
                                            if(resp=='s'){
                                                printf("\nMacaco");
                                            }else{
                                                printf("\nErro ao definir animal.\nOu resposta invalida.");
                                            }
                                        }
                                }
                        printf("\nQuadrúpedes:");
                            scanf(" %c",&resp);
                            if(resp=='s'){
                                printf("\nCarnívoros:");
                                    scanf(" %c",&resp);
                                    if(resp=='s'){
                                        printf("\nLeão");
                                    }else{
                                       printf("\nHerbívoros:");
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
