Q6.Consider the two SFML classes, Texture and Sprite, that will take care of drawing sprites into the screen. Use
  the two classes to draw an image soa.jpeg onto the window of size 960  540.
ANS:
#include <SFML/Graphics.hpp>
int main() {
    //Window Creation
    sf::RenderWindow window(sf::VideoMode(960, 540), "Image");
    //Load the texture from the image file
    sf::Texture texture;
    texture.loadFromFile("soa.jpeg");
    // Create a sprite and attach the texture
    sf::Sprite sprite(texture);
  
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
          //Close the window when the close button is pressed
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(sprite);
        window.display();
    }
    return 0;
}
