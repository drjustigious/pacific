#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "PacificConfig.hpp"


const sf::Color BACKGROUND_COLOR = sf::Color(16,24,32,255);


int main()
{
    std::cout << PacificConfig::TITLE_STRING << std::endl << "---" << std::endl;
    // Initialize SFML GUI
    sf::RenderWindow window(sf::VideoMode(PacificConfig::INITIAL_WINDOW_WIDTH, PacificConfig::INITIAL_WINDOW_HEIGHT), PacificConfig::TITLE_STRING);
    window.setFramerateLimit(PacificConfig::FRAME_RATE);

    // Run SFML GUI
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type) {
                case sf::Event::Closed: {
                    // The "close window" button was clicked.
                    window.close();
                    break;
                }

                case sf::Event::Resized: {
                    // The window was resized. Enforce aspect ratio and minimum size.
                    unsigned int newWidth = std::max(event.size.width, PacificConfig::MINIMUM_WINDOW_WIDTH);
                    window.setSize(
						sf::Vector2u(newWidth, (int)(newWidth * PacificConfig::WINDOW_ASPECT_RATIO))
					);
                    break;
                }

                default: {
                    break;
                }
            }
        }

        window.clear(BACKGROUND_COLOR);
        window.display();
    }

    return 0;
}
