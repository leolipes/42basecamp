#!/bin/sh
cat /etc/passwd | cut -f 1 -d : | sed -n 2~2p | rev | sort -r | head -n$FT_LINE2 | tail -n+$FT_LINE1 |  tr '\n' ', ' | tr -d '\n' | sed 's\,$\.\'

//cat vai me mostrar oq tem dentro do arquivo passwd que ta dentro do diretorio etc e vai printar na saida padrao

//head/tail -n o -n é pra eu modificar o padrao de quantidade de linhas printadas

2>/dev/null vou jogar a impressão do erro pro null