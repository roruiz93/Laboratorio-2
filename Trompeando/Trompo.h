#pragma once
#include <SFML/Graphics.hpp>

enum class TrompoEstado
{
<<<<<<< Updated upstream
    Quieto,
    Movimiento
=======
    protected:
        sf::CircleShape _shape;
        float _velocidad;

    public:
        Trompo();
        sf::CircleShape& getDraw();
        //Colision
>>>>>>> Stashed changes
};


class Trompo
{
protected:
    sf::Sprite _sprite;
    sf::Texture _texture;
    float _velocidad;
    sf::Vector2f _direccion;
    float _frame;
    float _velocidadGiro;
    TrompoEstado _estado = TrompoEstado::Quieto;

public:
    void update();
    void draw(sf::RenderWindow& window);
    void setPosition(float x, float y);
    void Rebotar(sf::Vector2f direccion);
    sf::Sprite getSprite();
    float getVelocidadGiro();
    sf::Vector2f getDireccion();
};
