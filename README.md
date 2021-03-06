# TSP Solvers

A series of traveling salesman problem solvers.

### Dependencies

Install [SFML 2](http://www.sfml-dev.org/) via your package manager (Linux) or their website.

### Build instructions:

After obtaining the source run 

	cmake .

(or specify a generator via -G), and then build the project via

	make

### Usage instructions

>  TSPRunner [CITY_LIST] [OPTIONS] -c [NUM_CITIES] -a [ALGORITHM]
>
>  Options:
>   --no-gui	Disables SFML
> 
>  Algorithm shorthand:
>  
>  r&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Random
> 
>  t&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Two-Opt
>  
>  s&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Simulated Annealing

Relevant city lists from the [TSPLIB](http://www.iwr.uni-heidelberg.de/groups/comopt/software/TSPLIB95/tsp/) project are provided in the assets/data directory. Optimal results have already been computed [here](http://www.iwr.uni-heidelberg.de/groups/comopt/software/TSPLIB95/STSP.html) .

![](http://i.imgur.com/wd91ApJ.gif)