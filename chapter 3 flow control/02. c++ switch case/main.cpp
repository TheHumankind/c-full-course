#include <iostream>

const int pen {10};
const int marker {11};
const int eraser {12};
const int rectangle {13};
const int circle {14};
const int ellipse {15};

int main() {
   int tool {eraser};

   switch (tool)
   {
   case pen: {
    std::cout << "pen is active" << std::endl;
   }
   break;
   case marker: {
    std::cout << "marker is active" << std::endl;
   }
   break;
   case eraser: {
    std::cout << "eraser is active " << eraser << std::endl;
   }
   break;
   case rectangle: {
    std::cout << "rectangle is active" << std::endl;
   }
   break;
   case circle: {
    std::cout << "circle is active" << std::endl;
   }
   break;
   case ellipse: {
    std::cout << "ellipse is active" << std::endl;
   }
   break;
   
   default: {
    std::cout << "no mutch found" << std::endl;
   }
    break;
   }
}