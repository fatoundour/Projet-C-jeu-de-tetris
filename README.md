# Tetris en C++ - Programmation orientée objet

## Présentation

Projet académique de programmation orientée objet en **C++**, consacré au développement d'un jeu inspiré de Tetris et à l'application de patrons de conception (*design patterns*). Le travail a été réalisé à partir d'ébauches fournies par l'enseignant, puis améliorées et complétées dans le cadre du projet.

Le dépôt contient notamment un **modèle de pièces** représentées par des coordonnées, des opérations de déplacement et une **ébauche graphique SFML** issue des supports de départ. Selon le retour de l'autrice, le jeu a été compilé et a fonctionné pendant le projet ; l'état actuel des fichiers publiés ne permet toutefois pas encore de reproduire cette exécution sans vérification.

> **État du dépôt :** projet réalisé et compilé avec succès lors du travail académique, selon l'autrice. Le dépôt actuel nécessite une vérification de son arborescence et de ses chemins de compilation pour permettre une exécution reproductible.

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

Le fichier `ebaucheVue.cpp` est une ébauche fournie dans le cadre du cours pour expérimenter l'affichage d'une grille et l'interaction à la souris avec SFML. Il ne faut pas confondre ce support de départ avec l'ensemble du travail réalisé par les étudiants.

## Compilation et exécution

Le `Makefile` d'origine référence des dossiers `source/Modele/` et `include/Modele/` qui ne correspondent pas à l'arborescence actuelle. De même, certains fichiers sources utilisent encore des chemins d'inclusion relatifs à cette ancienne organisation.

**Le jeu a été compilé et exécuté avec succès pendant le projet, d'après l'autrice.** En revanche, une remise en cohérence des chemins et une vérification sur la version actuellement publiée sont nécessaires avant de fournir une commande d'exécution reproductible.

## Pistes d'amélioration

- Harmoniser l'arborescence et les inclusions C++.
- Corriger puis tester la compilation.
- Ajouter des tests sur les déplacements et les coordonnées.
- Relier le modèle à une interface graphique.
- Documenter et reproduire l'exécution du jeu telle qu'elle avait été obtenue pendant le projet.

## Contexte

Projet académique réalisé dans le cadre d'un enseignement de **programmation orientée objet en C++**. Les ébauches initiales ont été fournies par l'enseignant, puis améliorées et développées par les étudiants.
