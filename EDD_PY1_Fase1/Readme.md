###### UNIVERSIDAD DE SAN CARLOS DE GUATEMALA
###### FACULTAD DE INGENIERÍA
###### ESCUELA DE SISTEMAS
###### ESTRUCTURA DE DATOS  


# Manual Técnico  


## Resumen
Se han implementado estructuras de datos para el manejo de la información de datos de empleados (desarrolladores de software con distintos tipos de puestos), proyectos y tareas en el entorno de un sistema que gestiona Proyectos asignándoles Empleados para cada proyecto, una prioridad entre tres niveles de prioridad y las tareas propias de cada proyecto. Para los proyectos se ha implementado una cola de prioridad para las prioridades A, B y C según su prioridas máxima, media o básica respectivamente.
## Introducción
Se ha solicitado la creación de un sistema para la gestión de los proyectos que habrá de realizar un equipo de trabajo. En el equipo se encontrarán distintos desarrolladores identificados por su nombre, puesto en el proyecto e identificador único. Un mismo empleado podrá trabajar en distintos proyectos a la vez y cada proyecto cuenta con distintas tareas y jeraraquías, algúnas tareas dependen de otras para poder ser realizadas. Los proyectos tendrán distintas prioridades por lo cual al crearse un proyecto se deben organizar según dicha prioridad. La gestión de la plataforma estará a cargo de los Proyect Managers quienes tendrán la capacidad de agregar miembros empleados, crear proyectos y tareas, asignar proyectos y tareas a los empleados. Se realizarán reportes gráficos de la situación de los proyectos vs los desarrolladores.

## Composición y uso
### a) Estructura del programa
La plataforma se compone de estructuras de datos implementadas para cada tipo de dato manejable. 
Para los empleados se ha utilizado una lista simplemente enlazada para cada tipo de empleado entre los cuáles se encuentran los Project Managers, Frontend Developers, Backend Developers y Quality Assurances.
Cola de prioridades para los proyectos los cuáles se asignan en tres distintas prioridades, la prioridad es seleccionada en el momento de la creación del proyecto y se sitúa en el lugar correspondiente.
Los empleados y proyectos poseen un id único generado por la plataforma.
Finalmente se han implementado listas doblemente enlazadas para las tareas.
### b) Clases
### b.1) Menu
Clase que se encarga del manejo inicial de las estructuras así como de mostrar las opciones al usuario. Es propietaria de los objetos necesarios de las estructuras previamente descritas.
### b.2) Reader
Se encarga de realizar todas las acciones que requieran almacenar información en las estructuras de datos, creación de objetos y asignación de identificadores únicos.
### b.3) Writer
Se encarga de realizar las acciones de reportes o salidas empleando la información almacenada. Escribe el código en lenguaje "dot" para las salidas en "Graphviz".
### b.4) Employees
Lista simplemente enlazada que almacena a los empleados.
### b.5) Employee
Nodo de la lista *Employees* que almacena la información del empleado: nombre, identificador único y puesto.
### b.6) Proyects
Cola de prioridas que almacena y provee los proyectos según el nivel de prioridad de dicho proyecto.
### b.7) Proyect
Nodo de la cola *Proyects* que almacena la información del proyecto: nombre, identificador único y tipo de prioridad. Los tipos de prioridad son: A, B y C a los cuáles se les ha asignado un "nivel de prioridad" que es un valor numérico: 1, 2 y 3 respectivamente para cada tipo. Dicho nivel de prioridad es utilizado para el manejo de los proyectos como una jerarquía siendo a menor número mayor prioridad.
### b.8) Tasks
Lista doblemente enlazada que guarda todas las tareas. Existen múltiples listas de tareas debido a la naturaleza de ellas estando las tareas de tipo: antecesor, sucesor y responsables.
### b.9) Task
Nodo de la lista *Tasks* que almacena el nombre de la tarea.
### b.10) Matrix
Matriz dispersa que almacena a los proyectos como cabeceras horizontales y empleados como cabeceras verticales tras las respectivas asignaciones.
### b.11) Node
Nodo de la matriz dispersa que es la intersección entre un proyecto y un desarrollador.
## c) Uso del programa
La navegación del programa ocurre en consola totalmente ingresando valores numéricos para navegar entre las opciones ofrecidas en los menú. Ingreso de nombres para agregar a empleados, proyectos y tareas.
Durante las asignaciones se selecciona un proyecto para lo cuál el usuario debe ingresar el ID que se muestra en pantalla correspondiente al proyecto requerido.
Para la lectura masiva de empleados el usuario debe colocar los archivos con extensión ".csv" dentro de la carpeta "Archivos de entrada" que se encuentra en un directorio superior al del programa. Una vez colocado un archivo de entrada en dicha carpeta el usuario debe redactar el nombre del archivo para su lectura y almacenamiento de todos los datos en él.
## Anexos
#### Anexo 1: *Menú principal.*
![Anexo 1](https://github.com/pduarteg/EDD_2S2023_PY_201709149/blob/main/Anexos/Anexo01.JPG)

### Anexo 2: *Ejemplo de archivo de entrada.*
![Anexo 2](https://github.com/pduarteg/EDD_2S2023_PY_201709149/blob/main/Anexos/Anexo02.JPG)

#### Anexo 3: *Ejemplo de gráfica generada de la cola de prioridad.*
![Anexo 3](https://github.com/pduarteg/EDD_2S2023_PY_201709149/blob/main/Anexos/Anexo03.JPG)
