clean: run
    rm run

compile: main.cpp
    g++ main.cpp -lraylib -o run

run: run
    ./run
