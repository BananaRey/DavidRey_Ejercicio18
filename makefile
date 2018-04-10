segunda_derivada.png ZvsY.png: graph2.py segundorden.cpp  primerorden.cpp
	c++ segundorden.cpp
	./a.out>puntos.txt
	python graph2.py

primera_derivada.png: graph.py primerorden.cpp
	c++ primerorden.cpp
	./a.out>puntos2.txt
	python graph.py


