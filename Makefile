all: SaveTimeToFile.cpp iterator_demo.cpp remove_duplicate.cpp remove_duplicate2.cpp

EXE=SaveTimeToFile iterator_demo remove_duplicate remove_duplicate2

all: $(EXE)

%: %.c
	g++ -Wall -ggdb  -o $@ $<
clean:
	rm -rfv $(EXE)
