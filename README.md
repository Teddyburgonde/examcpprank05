# 🧪 cpp_module_00

## Sujet — Classe Warlock

| Partie | Description                                                              | Tentatives |
|--------|---------------------------------------------------------------------------|------------|
| 1️⃣     | Implémentation de la classe `Warlock` (name, title)                      | 🔁 x1      |
| 2️⃣     | Forme de Coplien (constructeur, destructeur, interdictions)              | 🔁 x1      |
| 3️⃣     | Accesseurs `getName`, `getTitle`                                         | 🔁 x1      |
| 4️⃣     | Mutateur `setTitle`                                                      | 🔁 x1      |
| 5️⃣     | Comportement spécial (introduce + messages de vie/mort)                  | 🔁 x1      |
| 6️⃣     | Respect des contraintes (pas de copie, pas d’instanciation vide)         | 🔁 x1      |
| 7️⃣     | Fonction `introduce()`                                                   | 🔁 x1      |
| 8️⃣     | Test avec `main()` (sorties attendues et vérification)                   | ⏳ x0      |

---

### 📓 Légende
- ✅ : Partie maîtrisée
- 🔁 : En cours d’entraînement
- ⏳ : Pas encore commencée
- `xN` : Nombre de tentatives effectuées



<br>



# 📘 cpp_module01

## Sujet "Warlock & Sorts" — 6 parties principales

| Partie | Description                                                   | Tentatives |
|--------|---------------------------------------------------------------|------------|
| 1️⃣     | Classe Warlock de base (name, title, getters/setters)         | 🔁 x1      |
| 2️⃣     | Classe abstraite ASpell                                       | 🔁 x1      |
| 3️⃣     | Classe abstraite ATarget                                      | 🔁 x1      |
| 4️⃣     | Sort concret : Fwoosh (hérite de ASpell)                      | ✅ x5      |
| 5️⃣     | Cible concrète : Dummy (hérite de ATarget)                    | 🔁 x3      |
| 6️⃣     | Warlock : apprendre / oublier / lancer des sorts (logique)    | ✅ x5     |

---

### 📓 Légende
- ✅ : Partie maîtrisée
- 🔁 : En cours d’entraînement
- ⏳ : Pas encore commencée
- `xN` : Nombre de tentatives effectuées


<br>


# 🧙 cpp_module02

## Sujet — Système de magie avancé avec SpellBook & TargetGenerator

| Partie | Description                                                            | Tentatives |
|--------|------------------------------------------------------------------------|------------|
| 1️⃣     | Création de nouveaux sorts : `Fireball`, `Polymorph`                 | ✅ x5      |
| 2️⃣     | Création de la cible `BrickWall`                                      | ✅ x5     |
| 3️⃣     | Classe `SpellBook` (apprentissage, oubli, création de sorts)         | ⏳ x0      |
| 4️⃣     | Modification de `Warlock` pour intégrer un `SpellBook`               | ⏳ x0      |
| 5️⃣     | Classe `TargetGenerator` (gestion de cibles dynamiques)              | ⏳ x0      |
| 6️⃣     | Intégration finale : test complet avec `main()`                      | ⏳ x0      |

---

### 📓 Légende
- ✅ : Partie maîtrisée
- 🔁 : En cours d’entraînement
- ⏳ : Pas encore commencée
- `xN` : Nombre de tentatives effectuées



<br>


# 🎯 Plan de révision express – `cpp_module02` (sur 2 jours)

---

## 🟢 Jour 1 – Cimenter les bases

- [✅ x5 ] 🔥 Partie 1 : Créer `Fireball` et `Polymorph` (héritent de `ASpell`)
- [✅ x5] 🧱 Partie 2 : Créer `BrickWall` (hérite de `ATarget`)
- [ ] 📘 Partie 3 : Implémenter `SpellBook`
  - [ ] learnSpell()
  - [ ] forgetSpell()
  - [ ] createSpell()
- [ ] 🔁 Refaire `SpellBook` au moins 1 fois (chrono conseillé)

---

## 🟡 Jour 2 – Intégration et logique finale

- [ ] 🧙 Partie 4 : Intégrer le `SpellBook` dans la classe `Warlock`
  - [ ] Utiliser `learnSpell()` / `forgetSpell()` / `launchSpell()` via le spellbook
- [ ] 🎯 Partie 5 : Créer `TargetGenerator`
  - [ ] learnTarget()
  - [ ] forgetTarget()
  - [ ] createTarget()
- [ ] 🧪 Partie 6 : Faire un `main.cpp` de test complet (lancer des sorts sur des cibles)
- [ ] 🧠 Répéter un test global final sans regarder les notes (chrono)

---

## ⏱️ Objectif final :
- 2 jours → 5h max
- 1 test complet fonctionnel
- 90–100% de compréhension + automatisme
