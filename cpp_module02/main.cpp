
// #include "Warlock.hpp"
// #include "Dummy.hpp"
// #include "Fwoosh.hpp"
// #include "ASpell.hpp"
// #include "ATarget.hpp"
// #include "BrickWall.hpp"
// #include "Polymorph.hpp"
// //#include "TargetGenerator.hpp"
// #include "Fireball.hpp"


// int main()
// {
//   Warlock richard("Richard", "foo");
//   richard.setTitle("Hello, I'm Richard the Warlock!");
//   BrickWall model1;

//   Polymorph* polymorph = new Polymorph();
//   TargetGenerator tarGen;

//   tarGen.learnTargetType(&model1);
//   richard.learnSpell(polymorph);

//   Fireball* fireball = new Fireball();

//   richard.learnSpell(fireball);

//   ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

//   richard.introduce();
//   richard.launchSpell("Polymorph", *wall);
//   richard.launchSpell("Fireball", *wall);
// }

#include "SpellBook.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include <iostream>

int main()
{
    SpellBook book;

    Fwoosh* f1 = new Fwoosh();
    Fwoosh* f2 = new Fwoosh();

    // Apprendre deux fois le même sort
    book.learnSpell(f1);
    book.learnSpell(f2);  // doit delete le précédent et le remplacer

    delete f1;
    delete f2;

    ASpell* fClone = book.createSpell("Fwoosh");
    Dummy target;

    if (fClone)
        fClone->launch(target);  // devrait afficher : "Target Practice Dummy has been fwooshed!"

    delete fClone;  // important !

    book.forgetSpell("Fwoosh");  // supprime de la map

    // Vérification : create après forget
    ASpell* test = book.createSpell("Fwoosh");
    if (!test)
        std::cout << "Sort inconnu (correct)" << std::endl;

    return 0;
}
