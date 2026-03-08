/*
=============
Com_Printf

Both client and server can use this, and it will output
to the appropriate place.

A raw string should NEVER be passed as fmt, because of "%f" type crashers.
=============
*/

#define QDECL

void QDECL Com_Printf(const char *fmt, ...) {

}

void QDECL Com_Error(const char *fmt, ...) {

}