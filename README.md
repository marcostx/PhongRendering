# Phong Ilumination (with opacity)

In this work, we implemented a refinement of Phong Shading for opaque objects, now considering opacity for each of the objects in the scene and a semi-transparency. Therefore, we are not going to stop the ray of light by finding an alight and visible point of the object, but rather to match the colors of the next objects along the radius until saturation of an accumulated opacity. 

## Getting Started

### Prerequisites

This project is built using the functions of the IFT library. Here we use the compiled lib for Mac. GCC and CMake are the most important prerequisites for this project.


### Compiling


```
make Phong
```


## Running 
```
./Phong input.csn 
            input-label.scn
            tilt
            spin
            config.txt
            output-image.png
```

where config.txt is the file that contains the information of each object (colors, visibility and opacity) and output-image.png is the output file, which will be generated at the end of the program in the data folder. Each line of the configuration file represents the characteristics of an object in scene, following strictly this formatting:
```
     red, green, blue, opacity, visibility
```
in which red, green, blue and opacity are scalars [0., 1.] and visibility is a binary integer 0 or 1. Note that the amount of lines in this file should be the same as the number of objects in the scene.


## Authors

* **Marcos Teixeira** - (https://github.com/marcostx)

## Details

For more details on theory, implementation and results, read the report **report5_mo815.pdf**.


## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Prof. Alexandre Falcão - UNICAMP
