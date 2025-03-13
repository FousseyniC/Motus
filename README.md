Voici un exemple de README en français pour le programme que tu m'as fourni :

---

# 🎯 **Jeu Motus** : Trouve le Mot Mystère !

Bienvenue dans **Jeu Motus**, une implémentation du célèbre jeu de devinettes de mots. Teste tes compétences en découvrant le mot mystère en un minimum d’essais ! 🎉

Le jeu est simple : devine le mot avec l’aide d’indices donnés sous forme de lettres majuscules et minuscules selon leur position dans le mot.

---

## Pourquoi Jouer à Motus ?

- 🧠 **Stimule ton esprit** : Deviner un mot en un nombre limité d'essais mettra ta logique et ton vocabulaire à l’épreuve.
- 🅰️ **Indices visuels** : Les lettres en majuscule sont bien placées, celles en minuscule sont présentes mais mal placées.
- ⌛ **Jeu rapide** : Il ne faut que quelques minutes pour jouer une partie. Un bon passe-temps pour s’amuser ou se challenger.
- 🎮 **Simple et addictif** : Aucune installation nécessaire, il suffit de compiler et de jouer dans ton terminal.
- 📜 **Facile à comprendre** : Les règles sont simples et bien expliquées dès le début.

---

## Règles du Jeu

1. Un mot mystère est choisi aléatoirement parmi une liste de mots.
2. Le but est de deviner ce mot mystère en maximum **7 essais**.
3. À chaque essai :
   - Si une lettre est bien placée, elle apparaît en **majuscule**.
   - Si une lettre est dans le mot mais mal placée, elle apparaît en **minuscule**.
   - Si la lettre n'est pas dans le mot, un `_` est affiché à sa place.
4. Si tu ne devines pas le mot après 7 essais, tu perds et le mot est révélé.

---

## Installation et Exécution

### Compiler et Lancer

1. Télécharge ou copie le code dans un fichier C, par exemple `motus.c`.
2. Compile le programme avec la commande suivante dans ton terminal :
   ```bash
   gcc -o motus motus.c
   ```
3. Exécute le programme :
   ```bash
   ./motus
   ```

---

## Exemple d'Utilisation

Voici un exemple d'une partie typique :

```
***********MOTUS***********
Le but est de trouver le mot mystère en un minimum de coups.
Au fur et à mesure de vos essais, deux types d'indices vous seront donnés :
1) Si la lettre est au bon endroit dans le mot, elle sera en majuscule.
2) Si la lettre est dans le mot mais pas au bon endroit, elle sera en minuscule.

Voici la première lettre : p 

Essai 1 : pecher
Indice : P_e___
Réessayez !

Essai 2 : peigne
Indice : P_e___
Réessayez !

Essai 3 : peignoir
Indice : P_e_gnoir
Félicitations !!! Vous avez trouvé le bon mot !
```

---

## Structure du Code

### Fonctions Principales

- `regle_du_jeu(char mot[])` : Affiche les règles du jeu et la première lettre du mot à deviner.
- `mot_aleatoire(char* liste_de_mot[])` : Sélectionne un mot aléatoirement dans une liste.
- `len(char proposition[])` : Retourne la longueur d'un mot donné.
- `verif(char mot[], char proposition[], int taille)` : Vérifie si la proposition correspond au mot à deviner.
- `indice_majuscule(char mot[], char proposition[], int taille, char indice[])` : Met à jour l'indice avec des lettres en majuscules pour les lettres bien placées.
- `indice_minuscule(char mot[], char proposition[], int taille, char indice[])` : Met à jour l'indice avec des lettres en minuscules pour les lettres présentes mais mal placées.
- `affiche_indice(char indice[])` : Affiche les indices sous forme de lettres majuscules, minuscules, et `_`.

---

## Liste des Mots

Le programme utilise une liste de mots prédéfinis. Actuellement, la liste contient les mots suivants :

```
"peignoir", "chanter", "fleur", "oiseau", "fable", "loupe", "jeter", "humus", "coeur", "chien", "orange", "livre", "voiture", "laine", "boire", "rouge", "voile", "maman", "poire", "table"
```

---

## Améliorations Possibles

- 🔄 **Ajouter des niveaux de difficulté** : Intégrer des mots plus longs pour rendre le jeu plus difficile.
- 📋 **Importer des listes de mots** : Permettre aux joueurs de charger leur propre liste de mots.
- 🌐 **Version graphique** : Créer une interface utilisateur graphique pour rendre le jeu plus interactif.

---

N'hésite pas à me demander si tu souhaites plus d'informations ou des modifications !

