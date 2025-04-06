Q4. Write C++ statements to open a window with 960 pixels wide by 540 pixels high.
#include <SFML/Graphics.hpp>
int main() {
    // Create a window with specified dimensions
    sf::RenderWindow window(sf::VideoMode(960, 540), "SFML Window");
}
