
# Trabalho 01 
#### Projeto 1 da disciplina de Fundamentos de Sistemas Embarcados.

## Aluno
|Matrícula | Aluno |
| -- | -- |
| 140156909  |  Nathalia Lorena Cardoso Dias |

## Sobre
Este trabalho tem por objetivo a criação de um sistema distribuído de automação predial para monitoramento e acionamento de sensores e dispositivos de um prédio com múltiplas salas. O sistema deve ser desenvolvido para funcionar em um conjunto de placas Raspberry Pi com um servidor central responsável pelo controle e interface com o usuário e servidores distribuídos para leitura e acionamento dos dispositivos. Dentre os dispositivos envolvidos estão o monitoramento de temperatura e umidade, sensores de presença, sensores de fumaça, sensores de contagem de pessoas, sensores de abertura e fechamento de portas e janelas, acionamento de lâmpadas, aparelhos de ar-condicionado, alarme e aspersores de água em caso de incêndio.

## Instruções para execução

#### 1) Clone o repositório:
```sh 
git clone https://github.com/Natilorens/FSE_Trabalho1.git
```

#### 2) Acesse a pasta do projeto:
```sh 
cd FSE_Trabalho1
cd FSE_Trabalho1/src
```

**Obs:** Substituir <nome_de_usuario> pelo seu nome de usuário dentro da placa nos comandos abaixo.

#### 1) Copiar a pasta para dentro da rhaspberry:
```sh
scp -P 13508 -r ./FSE_Trabalho1 <nome_de_usuario>@164.41.98.28:~

```

#### 2) Acessar o seguinte caminho:
```sh
cd src
cd src/menu_comandos.c
```

#### 3) Compilar o programa:
```sh
gcc -o prog menu_comandos.c -lwiringPi

```
#### 4) Executar o programa:
```sh
./prog
```
