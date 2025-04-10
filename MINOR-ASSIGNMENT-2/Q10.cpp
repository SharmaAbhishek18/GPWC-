10.The Clock clock; clock.restart() function restart the clock. The clock is restarted in every
frame to know how long each and every frame takes. In addition, however, clock.restart();
returns the amount of time that has elapsed since the last time we restarted the clock. So, compute
the distance a spriteBee object will cover in a frame assuming the speed of the spriteBee is
beeSpeed pixels/second.
ANSWER:>>
sf::Clock clock;                // Create a clock
float beeSpeed = 200.0f;        // Speed in pixels/second

while (window.isOpen()) {
    sf::Time elapsed = clock.restart();  // Restart the clock and get elapsed time
    float deltaTime = elapsed.asSeconds();  // Convert elapsed time to seconds

    float distance = beeSpeed * deltaTime; // Compute distance for the frame

    spriteBee.move(distance, 0);           // Move the spriteBee horizontally
}
