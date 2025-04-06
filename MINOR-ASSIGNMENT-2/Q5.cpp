5. Write the SFML-C++ statements for the Game loop/ Application loop to stay in the program until the player want to quit for the Game Timber. Additionally enable the Esc key to terminate the game
loop, when the key is pressed. SFML-C++

  ANS:>
  #include <SFML/Graphics.hpp>

int main() {
    
    sf::RenderWindow window(sf::VideoMode(960, 540), "Timber Game");
    while (window.isOpen()) {
        // Event object to handle user input
        sf::Event event;
        
       while (window.pollEvent(event)) {
            // Handle the event where the player closes the window
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Handle the Escape key event to terminate the game
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }
      window.clear();
      window.display();
    }

    return 0;
}
