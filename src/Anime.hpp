#include <Movie.hpp>

class Anime : public Movie
{
public:
    Anime(const std::string & title,
          const unsigned int & year,
          const Genere & genere,
          const std::string & director,
          const std::string & mainCharacter,
          const std::string & studio,
          const std::vecotr<int> & noEpisodes);

    std::string getStudio() const;
    std::vector<int> getNoEpisodes() const;

private:
    std::string studio_;
    std::vector<int> noEpisodes_;
};