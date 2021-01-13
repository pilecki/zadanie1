#include <iostream>

// using namespace std;

int main() {
  // std::cout << "Hello World!\n";
  std::cout << "Zdanie1\nZdanie2\nZdanie3\nZdanie4\n";
  
  std::string imie = "Bartek";
  std::string nazwisko = "Malinowski";
  int wiek = 23;
  const std::string pesel = "012121212";
  char plec = 'K';
  float waga = 90.5;
  float wzrost = 176.35;
  bool w_zwiazku = false;
  float oceny[] = {0.00};
  float oceny1[] = {5.1, 6.4, 10.0, 7.0};
  std::cout << oceny1[2] << std::endl;
  std::cout << "Wprowadz oceny: " << std::endl;
  
  for (int i = 0; i < 4; i++) {
    std::cout << "Podaj ocenę: ";
    std::cin >> oceny[i];
  }

  for (int i = 0; i < 4; i++ ) {
    std::cout << "Przedmiot " << i << " = " << oceny[i]<< std::endl;
  }
}