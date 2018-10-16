hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Yonetim.o -c ./src/Yonetim.cpp
	g++ -I ./include/ -o ./lib/Sinif.o -c ./src/Sinif.cpp
	g++ -I ./include/ -o ./lib/Okul.o -c ./src/Okul.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Okul.o ./lib/Yonetim.o ./lib/Sinif.o ./src/Test.cpp

	
calistir:
	