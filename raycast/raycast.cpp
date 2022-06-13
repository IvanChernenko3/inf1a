#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}


/*
#include <SFML/Graphics.hpp>
#include <iostream>
void DrawGrid(sf::VertexArray l1, int sizeX, int sizeY, int step);
sf::RenderWindow window(sf::VideoMode(640, 640), "Shape!");
int main()
{
    
    sf::CircleShape shape(100, 3);
    shape.setFillColor(sf::Color::Magenta);
    sf::Vector2i position = { 0,0 };
    sf::VertexArray line(sf::LinesStrip, 2);
    float speed = 1;
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            
            switch (event.key.code)
            {
                case sf::Keyboard::Left:
                    position.x += -1;
                    break;
                case sf::Keyboard::Right:
                    position.x += 1;
                    break;
                case sf::Keyboard::Up:
                    position.y += -1;
                    break;
                case sf::Keyboard::Down:
                    position.y += 1;
                    break;
                //default: position = { 0,0 }; break;
            }

                
                
        }

        window.clear();
        shape.setPosition(position.x * speed, position.y * speed);
        
        DrawGrid(line, 640, 640, 50);
        window.draw(shape);
        
        
        window.display();
    }

    return 0;
}

void DrawGrid(sf::VertexArray l1, int sizeX, int sizeY, int step)
{
    for (float x = 0; x < sizeX; x += step)
    {
        l1[0].position = sf::Vector2f(0, x);
        l1[1].position = sf::Vector2f(640, x);
        window.draw(l1);
    }
    for (float x = 0; x < sizeX; x += step)
    {
        l1[0].position = sf::Vector2f(x, 0);
        l1[1].position = sf::Vector2f(x, 640);
        window.draw(l1);
    }
}
*/