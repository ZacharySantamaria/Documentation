docs: documentation.o
	gcc Documentation.o -o Docs

documentation.o: Documentation.c Documentation.h
	gcc -c Documentation.c 

clean:
	rm -r *.o Docs
