# CPP-RandomNumbers

A simple c++ application to generate a 2D array of dynamic size, then fill it with random numbers between 1-500. And the last step is to print the even numbers out of it.

## Methods

### generate2DArray

Generates a 2D array of size (arrayDimensions x arrayDimensions) and fills it with random numbers between 1-500

### showArray

Prints the 2D array created in above step

### findEvenNumber

Prints the Event numbers in the randomly generated 2D array

### releaseResources (!! Important)

Having alloted memory to dynamically created pointers. We need to release the memory too. In java, C# this is done by Garbage Collector. But still it's a good practice to do it on your own.

