char** CreateMatrix(int width, int height){
	char** matrix;

    	// Array = [*, *, *, *] 
    	screen = new char* [width];

    	// Array = {
    	//  [*, *, *, *, *]   
    	//  [A, B, C, D, E]
	// }
   	for (int i = 0; i < width; i++)
        	screen[i] = new char[height];
}