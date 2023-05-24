#include "TrompoP1.h"
//
TrompoP1::TrompoP1()
<<<<<<< Updated upstream
        {
            _texture.loadFromFile("trompo1.png");
            _sprite.setTexture(_texture);
            _sprite.setTextureRect({0,0,60,60});
            _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height/2);
            _sprite.setPosition(450, 300);
            _direccion = {0 ,0};
            _velocidad = 2.f;
            _velocidadGiro = 0.10f;
        }
void TrompoP1::cmd()
        {
            _direccion = {0 ,0};
=======
{
    _shape.setFillColor(sf::Color(rand() % 210, rand() % 222, rand() % 255));
    _shape.setPosition(100, 100);
}
>>>>>>> Stashed changes

            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                _direccion.y = -_velocidad; // ( ,-2)
                _estado = TrompoEstado::Movimiento;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                _direccion.y = _velocidad; // ( , +2)
                _estado = TrompoEstado::Movimiento;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                _direccion.x = _velocidad; // (2, )
                _estado = TrompoEstado::Movimiento;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                _direccion.x = -_velocidad; //(-2, )
                _estado = TrompoEstado::Movimiento;
            }
        }

