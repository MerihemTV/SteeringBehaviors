DE CLERCQ Romain DECR28099806
NOUVELLON Adrien NOUA13129601


Il existe 3 "modes de controle" différents : 

-Leader Wandering : un agent leader se déplace de manière aléatoire en utilisant l'algorithme de wandering, et est suivi par une chaine d'agents poursuiveurs qui fonctionnent avec une poursuite en offset par rapport à l'agent précédent.

-Control Leader : il est possible de diriger l'agent leader grâce aux flèches du clavier : gauche et droite permettent de tourner respectivement à gauche et droite par rapport à la direction courante du leader. La flèche du haut permet d'accélérer tandis que la flèche du bas permet de ralentir. Il y a 4 agents autour du leader qui se déplacent avec une poursuite en offset. Le reste des agents évite le leader lorsque ce dernier se rapproche d'eux afin de simuler la "protection" des agents poursuiveurs.

-V flocking : les agents (le "leader" est ici un agent comme les autres) suivent les règles indiquées pour simuler une formation d'oiseaux sauvages. On active pour chaque agent une poursuite vers l'agent le plus proche s'il est éloigné de tout agent, un mouvement d'évitement s'il y a un agent trop proche, et un mouvement de flocking avec ses voisins proches s'il n'est ni trop proche ni trop loin de ces voisins.

Il est possible de changer de mode de controle grâce au menu "Control" dans la barre d'outils de l'application.
