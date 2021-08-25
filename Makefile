C = clang
CFLAGS=-I.
LDLIBS += -lcs50
caesar: caesar.o 
	$(C) -o caesar caesar.o $(LDLIBS)
