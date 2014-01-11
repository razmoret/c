#ifndef _CARD_PARSER_H_
#define _CARD_PARSER_H_

#define DEBUG
#ifdef DEBUG
#define dbg(fmt, ...) do { \
                              fprintf(stderr, "%s| %s()[%d]: " fmt , __FILE__, __func__, __LINE__, ##__VA_ARGS__); \
                              } while (0)
#else
#define dbg(fmt, ...)
#endif

#endif
