

all:tp1.c
	gcc tp1.c -Wall -pedantic -std=c99 -o tp1  

	

test:tp1
	./tp1
	
clean:
	rm tp1
	rm sortie.txt
	
data:
	wget  https://www.github.com/guyfrancoeur/INF3135_H2019/raw/master/tp1/data.zip
	unzip data
