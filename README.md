# Tetris en C++ — Programmation orientée objet

## Présentation

Projet académique de programmation orientée objet en **C++**, consacré à la modélisation de pièces inspirées du jeu Tetris et à l'application de patrons de conception (*design patterns*).

Le dépôt contient un **prototype de modèle** permettant de représenter des pièces à partir de coordonnées et de leur appliquer des opérations de déplacement. Il comprend également une **ébauche d'interface graphique SFML**, distincte du modèle.

> **État du projet :** prototype pédagogique. Les fichiers présents ne constituent pas, à ce stade, un jeu Tetris complet et directement exécutable. La configuration de compilation nécessite une remise en cohérence des chemins.

## Objectifs pédagogiques

- Mettre en pratique les principes de la **programmation orientée objet** : classes, héritage, abstraction et polymorphisme.
- Représenter les pièces par des ensembles de coordonnées.
- Concevoir des opérations sur les pièces en s'appuyant sur les patrons **Decorator** et **Visitor**.
- Expérimenter une interface graphique avec **SFML**.

## Technologies

- **C++11**
- **G++** et **Make**
- **SFML** (dans l'ébauche graphique)

## Structure du dépôt

| Fichier | Rôle |
| --- | --- |
| `Piece.hpp`, `Piece.cpp` | Interface de base des pièces |
| `PieceConcrete.hpp`, `PieceConcrete.cpp` | Pièce concrète et coordonnées |
| `PieceOperateur.hpp`, `PieceOperateur.cpp` | Abstraction des opérations sur les pièces |
| `OperateurDeplacement.hpp`, `OperateurDeplacement.cpp` | Déplacements des pièces |
| `OrientationDeplacement.hpp` | Définition des directions |
| `test.cpp` | Petit programme d'essai du modèle |
| `ebaucheModel.cpp` | Ébauche autonome du modèle |
| `ebaucheVue.cpp` | Étude de faisabilité graphique avec SFML |
| `texture.jpg` | Ressource graphique de l'ébauche |
| `Projet2024.pdf` | Document PDF associé au projet |
| `Makefile` | Configuration de compilation d'origine |

Le dépôt conserve aussi une archive ZIP et des fichiers objets issus du travail initial.

## Fonctionnement du prototype

Une pièce est représentée par une collection de coordonnées `(x, y)`. Le modèle distingue la pièce concrète des objets qui décrivent les opérations à lui appliquer. Les déplacements sont définis selon quatre directions : nord, sud, est et ouest.

Les classes abstraites et les méthodes virtuelles permettent de structurer les interactions entre pièces et opérateurs. Cette organisation illustre des idées proches des patrons **Decorator** et **Visitor**.

L'ébauche graphique `ebaucheVue.cpp` expérimente l'affichage d'une grille et l'interaction à la souris avec SFML. Elle n'est pas intégrée au programme de test du modèle.

## Compilation et exécution

Le `Makefile` d'origine référence des dossiers `source/Modele/` et `include/Modele/` qui ne correspondent pas à l'arborescence actuelle. De même, certains fichiers sources utilisent encore des chemins d'inclusion relatifs à cette ancienne organisation.

**La compilation n'est donc pas documentée comme opérationnelle dans l'état actuel du dépôt.** Une remise en cohérence des chemins et une vérification du programme sont nécessaires avant de fournir une commande d'exécution fiable.

## Pistes d'amélioration

- Harmoniser l'arborescence et les inclusions C++.
- Corriger puis tester la compilation.
- Ajouter des tests sur les déplacements et les coordonnées.
- Relier le modèle à une interface graphique.
- Compléter les règles du jeu si l'objectif est d'obtenir un Tetris jouable.

## Contexte

Projet académique réalisé dans le cadre d'un enseignement de **programmation orientée objet en C++**.
