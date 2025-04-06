1. State the header file(s) and name of the namespace(s) required to use SFML libary to design game programs. Also
  write the compilation and execution commands in Linux-based enviroment.
ANSWER:>>
Header Files: #include <SFML/Graphics.hpp> , #include <SFML/Window.hpp> , #include <SFML/Network.hpp>,#include <SFML/Audio.hpp>
Namespace : The SFML library uses the namespace sf. E.g: sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Game");
Compilation Command: g++ -o game main.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
Execution Command : ./game
  
