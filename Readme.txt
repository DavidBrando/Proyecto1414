


===== Sección 1 =====

En la primera sección se han activado las checkbox correspondientes en cada BluePrint (BP) para que se replique en el servidor.
Debido a que nunca he usado la opción de servidor dedicado en unreal, me he encontrado con impedimentos que no he podido resolver y es que, no se vean los proyectiles del otro cliente y el sonido. Dichos impedimentos hacen que muchas de las demas secciones no puedan mostrar los resultados optimos por falta de conocimiento de como funciona un juego online, siendo la primera vez que se hace. He buscado información todo lo posible para ver si lograba solucionarlo pero, no he podido. Siendo la primera vez que hacia mecánicas para multijugador desconozco configurarlo bien.

===== Sección 2 ===== (Clase: UPlayerInfoComponent)

En la segunda sección, se ha creado un complemento en C++ (ActorComponent llamado: UPlayerInfoComponent localizado en la carpeta "C++ Classes") para añadirlo en la clase del jugador. En dicho component se han creado distintos métodos y variables, a parte de las especificadas, para su mejor funcionamiento y ayuda en futuras partes.

El complemento ha sido añadido con C++ en la clase "ABlackmouthFPSCharacter" localizada en la misma carpeta que el component en el constructor de dicha clase. Las variables del component se han declarado públicas y que sean editables en el BP para mayor comodidad y rápidez a la hora de hacer la prueba. Se podría haber hecho un método Inicializador que se le pasaran las variables que se quisieran para dejarlo todo en C++.


===== Sección 3 ===== (Clases: ABlackmouthFPSProjectile y ABlackmouthFPSCharacter)

En la tercera sección, se ha usado el método que facilita Unreal para el daño (Event AnyDamage y TakeDamage), con este método para comunicarse el daño entre bala y objetivo. A la bala se le ha añadido quién es su Owner para que, quién realice el disparo, no se haga daño a si mismo. En la bala se ha llamado al evento "TakeDamage" cuando colisiona contra cualquier objeto y en el jugador se ha sobreescrito el evento "TakeDamage" donde se le aplica el daño llamando al método correspondiente en el ActorComponent.

El sistema de respawn se añaden elementos que facilita Unreal llamados "TargetPoints" de los cuales se eligiria uno aleatorio para que el jugador vuelva a hacer respawn en ellos. Para simular la muerte del jugador, se puede hacer que desaparezca para los demás y que no se pueda mover (usando la variable de si está vivo o no) y, pasados 10 segundos, que haga respawn en alguno de esos puntos con la vida máxima y volviendo a la vida llamando a su método de resucitar. La lógica para controlar su respawn esta en el BP del nivel. 

===== Sección 4 ===== (Carpeta UI)

Se ha creado una barra de vida que se va cambiando conforme recibe daño el enemigo. La vida ha sido bindeada al valor del porcentaje que tiene el elemento progress bar. También se ha añadido un text que te muestra el daño recibido o curado

===== Sección 5 ===== (Carpeta UI)

Se ha creado un widget que parece un hitmarker para cuando un jugador es golpeado salga por pantalla. Se ha añadido una variable que se cambia cuando golpea a un jugador válido y vuelve a su estado normal después. Se ha utilizado la función equivalente al delay en C++ para controlar su ocultación al jugador.


===== Sección 6 ===== (Carpeta Blueprints de apoyo)

Se ha creado un actor simple con un sistema de particulas para que sea el circulo de curación para los jugadores. El sistema de partículas ha sido creado a partir de los standard proporcionados por unreal. En el BP se controla quien entra y sale dentro de él y, mientras esten dentro, son curados.

===== Sección 7 =====

Se crea un bind a la tecla que se desea, en este caso Q, y en c++ se le asigna cuando la tecla se pulsa y se levanta para cuando, la tecla se pulsa, se llame a una funcion que vaya aumentando el tamaño hasta cierto punto. Se crea la bala o elemento correspondiente y se hace un attact al muzzle del arma. Una vez que el jugador levanta la tecla, la bala sale y, cuando colisione contra cualquier actor, se aplica un daño en area. Esta habilidad entraria en cooldown y no se volveria a llamar hasta dentro de 5 segundos.

===== Sección 8 =====

El widget se crearia enlazandolo con el jugador y, cuando se pulsa la tecla correspondiente, con un bool se iria cambiando la visibilidad para que se vea y, con una animación, se llenaria la barra en el mismo tiempo que se le asigne a la carga máxima.