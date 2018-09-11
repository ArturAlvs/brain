all:
	# g++ -o brain brain.cpp */*.cpp
	# g++ -std=c++11 -o brain brain.cpp synapses/synapse.cpp structure/structure.cpp neuron/neuron.cpp eventos/*.cpp
	g++ *.cpp -o brain
	./brain