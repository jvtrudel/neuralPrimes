<h1 id="objectif">Objectif</h1>
<p>Concevoir un réseau de neurone capable de déterminer si un nombre entier est premier ou non.</p>
<h1 id="réflexions-et-quelques-idées">Réflexions et quelques idées</h1>
<h2 id="difficultés">Difficultés</h2>
<ul>
<li><p>Quelle représentation adopter pour les données entrantes? On pourrait assigner à chaque neurones un chiffre. Cependant, même si on peut facilement déterminer tous les nombres premiers de 1 à 100, cette représentation ne nous donnerait aucune information sur la quatrième décimale.</p></li>
<li><p>Quelle est la <em>dimension</em> du problème? Quel type de réseau de neurones peut représenter une solution pour n décimales?</p></li>
<li><p>Combien de mémoire faut-il pour représenter une solution pour <span class="math inline"><em>n</em></span> décimales?</p></li>
<li><p>Combien de temps faut-il pour en trainer le réseau de neurones?</p></li>
<li><p>En admettant que l'on puisse trouver une solution pour <span class="math inline"><em>n</em></span> décimales? Combien de temps supplémentaire cela prendra-t-il pour trouver une solution pour n+1 neuronnes?</p></li>
</ul>
<h2 id="deep-learning">Deep Learning</h2>
<p>Résoudre et utiliser le résultat des problèmes auxiliaires tels que</p>
<ul>
<li>trouver les <span class="math inline"><em>a</em></span> et <span class="math inline"><em>b</em></span> de l'équation suivante (forme factorisée):</li>
</ul>
<p><br /><span class="math display"><em>m</em> = <em>b</em><sub>1</sub><sup><em>a</em><sub>1</sub></sup> × <em>b</em><sub>2</sub><sup><em>a</em><sub>2</sub></sup> × ... × <em>b</em><sub><em>i</em></sub><sup><em>a</em><sub><em>i</em></sub></sup> + 1</span><br /></p>
<ul>
<li>tenter de déterminer une probabilité que le prochain nombre soit premier selon la forme factorisé pu pour une suite de forme factorisé</li>
<li>utiliser n'importe quelle autre propriété qui semble avoir un lien avec les nombres premiers.</li>
</ul>
<h2 id="représentation">Représentation</h2>
<p>Utiliser une autre représentation pour les valeurs d'entrée ou utiliser simultanément plusieurs représentations.</p>
<h2 id="problème-similaire">Problème similaire</h2>
<p>Si l'on donne en entrée les coefficients et les exposants de la forme factorisée, <span class="math inline"><em>m</em></span> est-il premier ou non?</p>
<h2 id="capacité-dextrapolation">Capacité d'extrapolation</h2>
<p>Pendant la conception du réseau de neuronne, toujours tenir compte de la capacité d'extrapolation, i.e. qu'il faut minimiser le temps nécessaire pour trouver une solution à <span class="math inline"><em>n</em> + 1</span> décimale à partir de la solution à <span class="math inline"><em>n</em></span> décimale.</p>
<h1 id="références">Références</h1>
<h2 id="nombres-premiers">Nombres premiers</h2>
<ul>
<li><a href="http://www.nombres-premiers.fr/">Généralité sur les nombres premiers</a> (contient surtout quelques liens intéressants vers des listes de nombres premiers)</li>
<li><a href="http://www.mersenne.org/download/#source">site internet du projet GIMPS</a></li>
<li><a href="http://dspace.lib.kanazawa-u.ac.jp/dspace/bitstream/2297/6796/1/TE-PR-NAKAYAMA-K-2577.pdf">Neural Networks Following a Binary Approach Applied to the Integer Prime-Factorization Problem</a></li>
</ul>
<h2 id="réseaux-de-neurones">Réseaux de neurones</h2>
<ul>
<li><a href="https://fr.wikipedia.org/wiki/R%C3%A9seau_de_neurones_artificiels">Wikipédia en français</a></li>
<li><a href="https://en.wikipedia.org/wiki/Artificial_neural_network">Wikipédia en anglais</a></li>
<li><a href="http://neuralnetworksanddeeplearning.com/chap1.html">Introduction et application simple en python</a></li>
<li><a href="http://www.opennn.net/">OpenNN: librairie en c++</a></li>
<li><a href="https://keras.io/">Keras: librairie en python</a></li>
<li><a href="https://github.com/libfann/fann">FANN: librairie en c</a></li>
</ul>
