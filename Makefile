# First makefile \o/

all : mdp-gen

mdp-gen : main.c
	gcc main.c -o mdp-gen
