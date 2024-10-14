pokemon_battles: main.cpp Player.cpp Enemy.cpp Pokemon.cpp Attack.cpp QuickAttack.cpp TypeAttack.cpp medicine.cpp SigAttack.cpp Random.cpp Multiplier.cpp
	g++ main.cpp Player.cpp Enemy.cpp Pokemon.cpp Attack.cpp QuickAttack.cpp TypeAttack.cpp medicine.cpp SigAttack.cpp Random.cpp Multiplier.cpp -o pokemon_battles `pkg-config --cflags --libs opencv4`
