#ifndef EPIC_OUTPUT_H
#define EPIC_OUTPUT_H

// Reset
#define RESET "\033[0m"

// Styling Macros
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define ITALIC "\033[3m"
#define BLINK "\033[5m"
#define INVERTED "\033[7m"
#define STRIKE "\033[9m"

// Color Text
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define GRAY "\033[1;90m"

// Backgrounds
#define BG_BLUE "\033[44m"
#define BG_WHITE "\033[47m"
#define BG_BLACK "\033[40m"
#define BG_GRAY "\033[100m"
#define BG_BRIGHT_WHITE "\033[107m"

// Custom Macros
#define INFO(msg) printf(CYAN BOLD "[INFO] " RESET CYAN "%s\n" RESET, msg)
#define SUCCESS(msg) printf(GREEN BOLD "[SUCCESS] " RESET GREEN "%s\n" RESET, msg)
#define WARNING(msg) printf(YELLOW BOLD "[WARNING] " RESET YELLOW "%s\n" RESET, msg)
#define ERROR(msg) printf(RED BOLD "[ERROR] " RESET RED "%s\n" RESET, msg)
#define TITLE(msg) printf("\n" BOLD UNDERLINE BLUE "%s\n" RESET, msg)
#define BANNER(msg) printf(BOLD CYAN BG_BLACK "==================================== %s ====================================%s\n", msg, RESET)

#endif

