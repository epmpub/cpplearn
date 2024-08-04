all: SaveTimeToFile.cpp iterator_demo.cpp remove_duplicate.cpp

EXE=SaveTimeToFile iterator_demo remove_duplicate

all: $(EXE)

%: %.c
	g++ -Wall -ggdb  -o $@ $<
clean:
	rm -rfv $(EXE)
