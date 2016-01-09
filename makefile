CXX = g++
CXXFLAGS = -Wall -MMD -g
EXEC = a4q1
OBJECTS = main.o list.o node.o unsorted.o sorted.o vector.o linkedlist.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
