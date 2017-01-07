# Objectif

Concevoir un réseau de neurone capable de déterminer si un nombre entier est premier ou non.

# Réflexions et quelques idées

## Difficultés

  - Quelle représentation adopter pour les données entrantes? On pourrait assigner à chaque neurones un chiffre. Cependant, même si on peut facilement déterminer tous les nombres premiers de 1 à 100, cette représentation ne nous donnerait aucune information sur la quatrième décimale.

  - Quelle est la *dimension* du problème? Quel type de réseau de neurones peut représenter une solution pour n décimales?

  - Combien de mémoire faut-il pour représenter une solution pour $n$ décimales?

  - Combien de temps faut-il pour en trainer le réseau de neurones?

  - En admettant que l'on puisse trouver une solution  pour $n$ décimales? Combien de temps supplémentaire cela prendra-t-il pour trouver une solution pour n+1 neuronnes?

## Deep Learning

Résoudre et utiliser le résultat des problèmes auxiliaires tels que

  - trouver les $a$ et $b$ de l'équation suivante (forme factorisée):


$$m=b_1^{a_1} \times b_2^{a_2} \times ... \times b_i^{a_i} + 1 $$

  - tenter de déterminer une probabilité que le prochain nombre soit premier selon la forme factorisé pu pour une suite de forme factorisé
  - utiliser n'importe quelle autre propriété qui semble avoir un lien avec les nombres premiers.

## Représentation

Utiliser une autre représentation pour les valeurs d'entrée ou utiliser simultanément plusieurs représentations.

## Problème similaire

Si l'on donne en entrée les coefficients et les exposants de la forme factorisée, $m$ est-il premier ou non?


## Capacité d'extrapolation

Pendant la conception du réseau de neuronne, toujours tenir compte de la capacité d'extrapolation, i.e. qu'il faut minimiser le temps nécessaire pour trouver une solution à $n+1$ décimale à partir de la solution à $n$ décimale.


# Références

## Nombres premiers

  - [Généralité sur les nombres premiers](http://www.nombres-premiers.fr/) (contient surtout quelques liens intéressants vers des listes de nombres premiers)
  - [site internet du projet GIMPS](http://www.mersenne.org/download/#source)
  - [Neural Networks Following a Binary Approach Applied to the Integer Prime-Factorization Problem](http://dspace.lib.kanazawa-u.ac.jp/dspace/bitstream/2297/6796/1/TE-PR-NAKAYAMA-K-2577.pdf)

## Réseaux de neurones

  - [Wikipédia en français](https://fr.wikipedia.org/wiki/R%C3%A9seau_de_neurones_artificiels)
  - [Wikipédia en anglais](https://en.wikipedia.org/wiki/Artificial_neural_network)
  - [Introduction et application simple en python](http://neuralnetworksanddeeplearning.com/chap1.html)
  - [OpenNN: librairie en c++](http://www.opennn.net/)
  - [Keras: librairie en python](https://keras.io/)
  - [FANN: librairie en c](https://github.com/libfann/fann)
