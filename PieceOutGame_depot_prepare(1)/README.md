# Projet PieceOut

## Auteurs
Fatoumata NDOUR 22321513

Abdoulbasti MUKAILA ALH SHITTU 22024114

**Université :** Université Paris Cité

## Description du projet

Le projet **PieceOut** est un exercice en C++ visant à démontrer la maîtrise de plusieurs concepts de programmation vus durant le semestre, tels que la gestion de la construction, destruction, copie des objets, l’héritage, la généricité, les exceptions, et les énumérations. L’objectif est de créer un jeu de puzzle inspiré de Tetris, où l'utilisateur doit manipuler des pièces dans un espace restreint afin d’atteindre une configuration spécifique.

Chaque puzzle présente un ensemble de pièces pouvant être déplacées et tournées selon des règles spécifiques. Le but du jeu est de résoudre le puzzle en respectant ces contraintes. Le programme utilise des concepts de programmation orientée objet, et s'inspire des patrons de conception **Decorator** et **Visitor** pour gérer les transformations des pièces.

Le jeu présente plusieurs niveaux de difficulté et permet de visualiser les mouvements nécessaires pour parvenir à la solution d’un puzzle donné.

Ce projet est conçu pour être joué via une interface graphique en utilisant la bibliothèque **SFML**, permettant de gérer les interactions et le rendu visuel des pièces.

## Prérequis

Avant de pouvoir exécuter le programme, vous devez disposer des éléments suivants :

- Un compilateur C++ (par exemple, `g++`).

- La bibliothèque **SFML** pour la gestion des fenêtres et des graphismes. Si vous ne l'avez pas déjà installée, suivez les instructions sur [le site de SFML](https://www.sfml-dev.org/download.php).

## Installation

1. Décompressez les fichiers fournis dans un répertoire de votre choix.
2. Ouvrez un terminal dans ce répertoire.

## Compilation

Le projet utilise **Make** pour faciliter la compilation. Exécutez les commandes suivantes pour compiler le modèle et la vue séparément : 

1. Pour compiler le modèle et la vue, exécutez :

```bash
make all_vue 
```

Le programme sera automatiquement lancé après la compilation. Si vous souhaitez rejouer après la fin du programme, exécutez la commande suivante pour relancer le jeu :

```bash
./build/ProgramVue 
```

## Nettoyage

Pour nettoyer les fichiers compilés, utilisez les commandes suivantes dans le terminal :

```bash
make clean_modele
make clean_vue
```

# Utilisation

Une fois le programme lancé, une fenêtre s'ouvrira avec les quatre puzzles proposés. Utilisez votre souris pour cliquer sur l'un des puzzles.

## Instructions pour résoudre les puzzles

### Puzzle 1
1. Une rotation sur la pièce verte.
2. Une rotation suivie d'un déplacement vers le haut sur la pièce bleue.
3. Une rotation sur la pièce verte.
4. Trois déplacements vers la gauche de la pièce jaune.
5. Une rotation de la pièce verte.
6. Enfin, six déplacements vers le haut de la pièce rouge.

### Puzzle 2
1. Une rotation suivie d'un déplacement à gauche de la pièce rouge.
2. Un déplacement en haut suivi d'une symétrie horizontale de la pièce verte.
3. Deux rotations successives de la pièce violette.
4. Une symétrie horizontale suivie de trois déplacements, puis une autre symétrie horizontale de la pièce verte.
5. Un déplacement vers la droite suivi d'une rotation, puis cinq déplacements vers le bas de la pièce rouge.

### Puzzle 3
1. Une symétrie verticale de la pièce violette.
2. Trois déplacements vers le haut de la pièce bleue.
3. Un déplacement vers le bas de la pièce jaune.
4. Deux rotations de la pièce bleue.
5. Deux déplacements vers la droite de la pièce rouge.
6. Deux déplacements vers le bas de la pièce violette.
7. Une rotation suivie de trois déplacements vers la gauche, puis une rotation de la pièce bleue.
8. Deux déplacement vers le haut de la pièce violette.
9. Trois déplacements vers le haut, suivis d'un déplacement vers la droite, puis un déplacement en haut de la pièce rouge.
10. Trois déplacements vers le bas, suivis d'une symétrie de la pièce violette.
11. Deux rotations suivies de deux déplacements vers le bas de la pièce bleue.
12. Enfin, quatre déplacements vers la gauche de la pièce rouge.

### Puzzle 4
1. Deux déplacements vers le bas suivis de deux rotations de la pièce verte.
2. Quatre déplacements vers le bas, suivis d'une rotation et d'un déplacement vers la droite de la pièce bleue.
3. Une rotation suivie d'un déplacement vers la gauche, une rotation, puis deux déplacements vers le haut de la pièce verte.
4. Deux déplacements vers le bas, suivis d'une rotation et de trois déplacements vers la droite de la pièce rouge.
5. Une rotation de la pièce bleue.
6. Une rotation suivie de deux déplacements de la pièce rouge.
7. Une rotation suivie d'un déplacement à gauche, une rotation, deux déplacements en bas, une rotation, un déplacement à gauche, trois rotations, puis deux déplacements vers le bas de la pièce verte.
