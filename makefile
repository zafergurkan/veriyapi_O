DerleCalistir: Derle Calistir

Derle:okul main
	g++ -I ./lib/Okul.o ./lib/main.o -o ./bin/program
okul:
	g++ -I "./include/" -c ./src/Okul.cpp -o ./lib/Okul.o
main:
	g++ -I "./include/" -c ./src/main.cpp -o ./lib/main.o
Calistir: