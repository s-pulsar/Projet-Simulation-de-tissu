CXX = g++
CC  = $(CXX)

CXXFLAGS = -std=c++11  # C++11

# Partie commentée : choisissez les options que vous voulez avoir
#                    en décommentant la/les lignes correspondantes
#
CXXFLAGS += -pedantic -Wall         # pour les purs et durs
CXXFLAGS += -g                      # pour debugger
# CXXFLAGS += -pg                   # pour profiler
# LDFLAGS  += -pg                   # pour profiler
# CXXFLAGS += -O2                   # pour optimiser la vitesse

all: testVecteur

Vecteur3D.o: Vecteur3D.cpp Vecteur3D.hpp

testVecteur.o: testVecteur.cpp Vecteur3D.hpp

testVecteur: testVecteur.o Vecteur3D.o