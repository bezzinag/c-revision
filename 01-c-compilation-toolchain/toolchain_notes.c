//Source Code (.c) - > the code written
//      |
//      |
//Preprocessor - > just a text processor, not a c compiler
//              -> handles lines starting with #
//              -> the output is called translation unit
//              -> it removes comments, expands macros, processes directives like #include and #define
//              -> output is C code, not machine code
//              -> passed to the compiler for further processing
//      |
//      |
//  Compiler -> the real brain  
//          -> translates the preprocessed C code into assembly code
//          -> performs syntax and semantic analysis
//          -> input file - > .c file
//          -> output file - > assembly code file (.s)
//      |
//      |
//   Assembler -> translates assembly code into machine code
//            -> input file - > assembly code file (.s)
//            -> output file - > object file (.o or .obj)
//             -> converts assembly codes into binary instructions
//      |
//      |
//   Linker -> combines multiple object files into a single executable
//          -> resolves function and variable references between object files
//          -> links in libraries if needed
//          -> input file - > object files (.o or .obj)
//          -> output file - > executable file (.exe or a.out)

// GCC - > A driver not just a compiler
//     -> handles all stages of the compilation process
//     -> invoked with a single command (e.g., gcc main.c -o main)