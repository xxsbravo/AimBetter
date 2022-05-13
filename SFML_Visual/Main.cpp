#include <SFML/Graphics.hpp>
#include <random>

int main()
{
    std::random_device random;
    std::uniform_real<float> distribution(5, 50);

    float randFloat = distribution(random);

    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Yeet", sf::Style::Default);
    sf::CircleShape circle(randFloat);

    while (window.isOpen())
    {
        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}