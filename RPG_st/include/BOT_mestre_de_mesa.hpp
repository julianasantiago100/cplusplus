#ifndef BOT_MESTRE_DE_MESA_HPP
#define BOT_MESTRE_DE_MESA_HPP

#include <iostream>
#include "personagem.hpp"
#include <vector>
#include <fstream>
#include <random>
#include <algorithm>

class BOT_mestre_de_mesa{
    private:
        std::string m_nome = "010"; //!Nome fixo do BOT mestre de mesa
        int m_jogadores_na_partida; //!Quantidade de jogadores jogando
        std::vector<Personagem*> m_personagens; //!Vetor com as referências aos personagens que estão jogando
        static std::minstd_rand rnd;
    public:
        /**
         * @brief Recebe o nome do personagem do usuário e inicializa outros jogadores
         * BOT's para jogar com ele, baseado na quantidade que o usuário digitou inicialmente
         * @param Personagem, é o objeto do usuário que está jogando o jogo 
         */
        void setter_jogadores_and_BOT(Personagem);
        std::vector<std::string>  name_jogador_BOT(Personagem p); 
};

#endif