# auto build files
atomic_user: atomic_user.cpp
	g++ atomic_user.cpp -o atomic_user -lstdc++ -pthread -std=c++20
	./atomic_user
atomic_wait: atomic_wait.cpp
	g++ atomic_wait.cpp -o atomic_wait -lstdc++ -pthread -std=c++20
	./atomic_wait
atomic2: atomic2.cpp
	g++ atomic2.cpp -o atomic2 -lstdc++ -pthread
	./atomic2
atomic7: atomic7.cpp
	g++ atomic7.cpp -o atomic7 -lstdc++ -pthread
	./atomic7
atomic4: atomic4.cpp
	g++ atomic4.cpp -o atomic4 -lstdc++ -pthread
	./atomic4
atomic6: atomic6.cpp
	g++ atomic6.cpp -o atomic6 -lstdc++ -pthread
	./atomic6
atomic3: atomic3.cpp
	g++ atomic3.cpp -o atomic3 -lstdc++ -pthread
	./atomic3
atomic_spin: atomic_spin.cpp
	@echo 'build && run...'
	g++ atomic_spin.cpp -lstdc++ -o atomic_spin -pthread -std=c++20
	./atomic_spin
run:
	./atomic_spin
clear:
	@echo 'remove all *.o files'
	rm *.o
