#ifndef TINYLISP_H
#define TINYLISP_H
#include <string>

class ConsoleBox
{
public:
    void new_text ();
    void set_text (const std::string& text);
};

void load_script (const char* filename, bool show_script = false);
void load_script ();

#endif