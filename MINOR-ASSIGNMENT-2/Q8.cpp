8. Write the SFM-C++ statements to fly the image soa.jpeg across the screen from left to right. You can make use of the 
Sprite class method setScale to set the scale factors of the sprite object.
Answer:>>
sprite.setScale(0.5f, 0.5f);         // Scale the sprite to half size
sprite.setPosition(0, 270);          // Start at the left center of the screen
sprite.move(1, 0);                   // Move 1 pixel right per frame
