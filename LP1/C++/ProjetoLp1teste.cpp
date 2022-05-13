#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>

int main()
{
      // Inicializacao da biblioteca
      sf::RenderWindow* app = new sf::RenderWindow(sf::VideoMode(800, 600, 32), "MFJ - SFML e C++");

     // Le uma imagem para deixar de fundo
     sf::Image* imageBackground = new sf::Image();
     if (!imageBackground->LoadFromFile("res/background.png"))
     {
         std::cout << "ERRO IMAGEM" << std::endl;
     }
     sf::Sprite* spriteBackground = new sf::Sprite(*imageBackground);
     spriteBackground->SetPosition(0, 0);

     // Le outra imagem para ser movimentada na tela, o alvo.
     int x = 100;
     int y = 100;
     sf::Image* imageTarget = new sf::Image();
     if (!imageTarget->LoadFromFile("res/target.png"))
     {
         std::cout << "ERRO IMAGEM" << std::endl;
     }
     sf::Sprite* spriteTarget = new sf::Sprite(*imageTarget);

     // Le a imagem do tiro
     sf::Image* imageShot = new sf::Image();
     if (!imageShot->LoadFromFile("res/shot.png"))
     {
         std::cout << "ERRO IMAGEM" << std::endl;
     }

     // Le uma music e a coloca para tocar
     sf::Music* music = new sf::Music();
     if (!music->OpenFromFile("res/The_St_Louis_Blues.ogg"))
     {
         std::cout << "ERROR IN MUSIC" << std::endl;
     }
     music->Play();

     // Le um arquivo de som
     int shotSize = 0;
    int shotTimer = 0;
     sf::SoundBuffer* bufferTiro = new sf::SoundBuffer();
     if (!bufferTiro->LoadFromFile("res/shot.wav"))
     {
         std::cout << "ERROR IN SOUND" << std::endl;
     }
     sf::Sound* soundShot = new sf::Sound(*bufferTiro);

     // Escrevendo um text na tela
    int xText = 10;
    int yText = 10;
     sf::Font* fonteTimes = new sf::Font();
     if (!fonteTimes->LoadFromFile("res/times.ttf"))
     {
         std::cout << "ERRO FONTE" << std::endl;
     }
     sf::String* text = new sf::String("Blues is not dead!", *fonteTimes, 48);
     text->SetColor(sf::Color(255, 255, 255));

     // Gameloop - Le os eventos
     while (app->IsOpened())
     {
         // Leitura dos eventos
         sf::Event event;
         while (app->GetEvent(event))
         {
             if (event.Type == sf::Event::Closed)
             {
                 app->Close();
             }
         }
         // Verifica a localizacao do mouse para para posicionar a mira
         int mouseX = app->GetInput().GetMouseX();
         int mouseY = app->GetInput().GetMouseY();
         if ((mouseX > 0) && (mouseY > 0) && (mouseX < (int) app->GetWidth()) && (mouseY < (int) app->GetHeight()))
         {
             x = mouseX - (int) (spriteTarget->GetSize().x / 2);
             y = mouseY - (int) (spriteTarget->GetSize().y / 2);
         }
         spriteTarget->SetPosition(x, y);
         text->SetPosition(xText, yText);

         // Repoiciona o text conforme a utilizacao das setas
         if (app->GetInput().IsKeyDown(sf::Key::Up)) yText--;
         if (app->GetInput().IsKeyDown(sf::Key::Down)) yText++;
         if (app->GetInput().IsKeyDown(sf::Key::Left)) xText--;
         if (app->GetInput().IsKeyDown(sf::Key::Right)) xText++;
         // Som de tiro
         if (app->GetInput().IsKeyDown(sf::Key::Space) || app->GetInput().IsMouseButtonDown(sf::Mouse::Left))
         {
            if (shotTimer == 0)
            {
                 soundShot->Play();
                int xaux = (int) x + (spriteTarget->GetSize().x / 2) - (imageShot->GetWidth() / 2);
                int yaux = (int) y + (spriteTarget->GetSize().y / 2) - (imageShot->GetHeight() / 2);
                imageBackground->Copy(*imageShot, xaux, yaux, sf::IntRect(0, 0, 50, 50), true);
                shotTimer = 20;
                shotSize++;
            }
        }
        if (shotTimer > 0) shotTimer--;
        // Se pressionada a tecla ESC, sai do programa
        if (app->GetInput().IsKeyDown(sf::Key::Escape))
        {
            return EXIT_SUCCESS;
        }

        // Coloca a quantidade de tiros efetuados
        std::stringstream stringShotSize;
        stringShotSize << "Blues is not dead! " << shotSize << " times.";
        text->SetText(stringShotSize.str());

        // Desenha os elementos
        app->Clear();
        app->Draw(*spriteBackground);
        app->Draw(*text);
        app->Draw(*spriteTarget);
        app->Display();
    }
    return EXIT_SUCCESS;
}
