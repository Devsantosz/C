#include <stdio.h>  // Permite usar printf e scanf
#include <string.h> // Permite comparar textos com strcmp

int main(void) {
    // Guarda a senha correta.
    const char password[] = "123456";

    // Espaço para guardar a senha digitada.
    // O limite de leitura abaixo permite até 49 caracteres.
    char tes[50];

    // Conta quantas tentativas já foram feitas.
    int tent = 0;

    // Repete enquanto ainda houver tentativas.
    while (tent < 3) {
        printf("Digite a senha: ");

        // Lê a senha digitada e guarda em tes.
        // %49s limita a leitura para caber no espaço disponível.
        scanf("%49s", tes);

        // strcmp retorna 0 quando os dois textos são iguais.
        if (strcmp(tes, password) == 0) {
            printf("Acesso liberado!\n");

            // Encerra o programa porque a senha está correta.
            return 0;
        }

        // A senha está errada, então conta esta tentativa.
        tent++;

        // Mostra quantas tentativas ainda restam.
        printf("Acesso negado. Tentativas restantes: %d\n", 3 - tent);
    }

    // Esta mensagem aparece quando as três tentativas acabam.
    printf("Número máximo de tentativas atingido.\n");

    // Encerra o programa sem indicar erro.
    return 0;
}