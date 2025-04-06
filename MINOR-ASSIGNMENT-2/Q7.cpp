7. Write the SFM-C++ statements to fly the image soa.jpeg across the screen from top center to bottom of the screen. 
You can make use of the Sprite class method setScale to set the scale factors of the sprite object.
  
ANSWER:>
  
sprite.setScale(0.5f, 0.5f);          // Scale the sprite to half its original size
sprite.setPosition(480, 0);           // Position sprite at the top center of the window
sprite.move(0, 1);                    // Move the sprite downward by 1 pixel per frame

