#include "config.h"
#include "text_editor.h"
#include <iostream>

int main() {
    std::cout << APP_NAME << " version " << APP_VERSION << std::endl;

    // Create and initialize text editor
    TextEditor editor;
    
    if (!editor.initialize()) {
        std::cerr << "Failed to initialize text editor!" << std::endl;
        return -1;
    }
    
    // Run the text editor (this starts the main loop)
    editor.run();

    return 0;
}