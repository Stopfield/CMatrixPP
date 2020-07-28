char** CreateMatrix(int width, int height){
	char** matrix;

    	// Array = [*, *, *, *] 
    	matrix = new char* [width];

    	// Array = {
    	//  [*, *, *, *, *]   
    	//  [A, B, C, D, E]
	// }
   	for (int i = 0; i < width; i++)
        	matrix[i] = new char[height];
	
	return matrix;
}