12. Write SFML-C++ statements to display and set the center of the a message text “ SOA UNIVERSITY”
to the center of the screen of size 1920*1080. Additionally set the character size 100, text
color Red and font family KONIKAP .ttf

ANSWER:
sf::Font font;
font.loadFromFile("KONIKAP.ttf");

sf::Text text("SOA UNIVERSITY", font, 100);
text.setFillColor(sf::Color::Red);
text.setPosition(960, 540);
