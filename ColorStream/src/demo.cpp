#include "../include/ColorStream.hpp"
#include "../include/ColorTypes.hpp"

using namespace ColorStream_v1;


int main() {
    ColorStream cs(std::cout);

    cs << "Hi, my name is Stephen Pontikes I am currently a " << Color::color<Red>("UChicago ");
    cs << "student, pursuing a masters degree in Computer Science. " << "It seems that you\'ve stumbled across this ";
    cs << begin<Red> << "c" << begin<Orange1> << "o" << begin<Yellow> << "l" << begin<Green> << "o" << begin<Cyan1>;
    cs << "r" << begin<Blue> << "f" << begin<Navy> << "u" << begin<Purple> << "l " << end<Color>;
    cs << "ostream that I've decided to implement!" << std::endl << std::endl;

    cs << "I decided to use this project to showcase a bit about what I've learned about the inner workings ";
    cs << "of C++'s stream functionality, as well as mess around with some template programming and code generation." ;
    cs << "The code generation is actually done using another type of stream that was implemented as a homework assignment for ";
    cs << "MPCS 51045: Advanced C++: an ostream capable of handling indentation. I hope you (the user) finds this project ";
    cs << "enjoyable and useful!" << std::endl;


}