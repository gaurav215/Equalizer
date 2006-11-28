/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EQTOKEN_GLOBAL = 258,
     EQTOKEN_CONNECTION_SATTR_HOSTNAME = 259,
     EQTOKEN_CONNECTION_SATTR_LAUNCH_COMMAND = 260,
     EQTOKEN_CONNECTION_IATTR_TYPE = 261,
     EQTOKEN_CONNECTION_IATTR_TCPIP_PORT = 262,
     EQTOKEN_CONNECTION_IATTR_LAUNCH_TIMEOUT = 263,
     EQTOKEN_CONFIG_FATTR_EYE_BASE = 264,
     EQTOKEN_WINDOW_IATTR_HINTS_STEREO = 265,
     EQTOKEN_WINDOW_IATTR_HINTS_DOUBLEBUFFER = 266,
     EQTOKEN_WINDOW_IATTR_HINTS_FULLSCREEN = 267,
     EQTOKEN_WINDOW_IATTR_HINTS_DECORATION = 268,
     EQTOKEN_WINDOW_IATTR_PLANES_COLOR = 269,
     EQTOKEN_WINDOW_IATTR_PLANES_ALPHA = 270,
     EQTOKEN_WINDOW_IATTR_PLANES_DEPTH = 271,
     EQTOKEN_WINDOW_IATTR_PLANES_STENCIL = 272,
     EQTOKEN_SERVER = 273,
     EQTOKEN_CONFIG = 274,
     EQTOKEN_APPNODE = 275,
     EQTOKEN_NODE = 276,
     EQTOKEN_PIPE = 277,
     EQTOKEN_WINDOW = 278,
     EQTOKEN_ATTRIBUTES = 279,
     EQTOKEN_HINTS = 280,
     EQTOKEN_STEREO = 281,
     EQTOKEN_DOUBLEBUFFER = 282,
     EQTOKEN_FULLSCREEN = 283,
     EQTOKEN_DECORATION = 284,
     EQTOKEN_PLANES = 285,
     EQTOKEN_COLOR = 286,
     EQTOKEN_ALPHA = 287,
     EQTOKEN_DEPTH = 288,
     EQTOKEN_STENCIL = 289,
     EQTOKEN_ON = 290,
     EQTOKEN_OFF = 291,
     EQTOKEN_AUTO = 292,
     EQTOKEN_CHANNEL = 293,
     EQTOKEN_COMPOUND = 294,
     EQTOKEN_CONNECTION = 295,
     EQTOKEN_NAME = 296,
     EQTOKEN_TYPE = 297,
     EQTOKEN_TCPIP = 298,
     EQTOKEN_HOSTNAME = 299,
     EQTOKEN_COMMAND = 300,
     EQTOKEN_TIMEOUT = 301,
     EQTOKEN_TASK = 302,
     EQTOKEN_EYE = 303,
     EQTOKEN_EYE_BASE = 304,
     EQTOKEN_BUFFER = 305,
     EQTOKEN_CLEAR = 306,
     EQTOKEN_DRAW = 307,
     EQTOKEN_ASSEMBLE = 308,
     EQTOKEN_READBACK = 309,
     EQTOKEN_CYCLOP = 310,
     EQTOKEN_LEFT = 311,
     EQTOKEN_RIGHT = 312,
     EQTOKEN_VIEWPORT = 313,
     EQTOKEN_RANGE = 314,
     EQTOKEN_DISPLAY = 315,
     EQTOKEN_SCREEN = 316,
     EQTOKEN_WALL = 317,
     EQTOKEN_BOTTOM_LEFT = 318,
     EQTOKEN_BOTTOM_RIGHT = 319,
     EQTOKEN_TOP_LEFT = 320,
     EQTOKEN_SYNC = 321,
     EQTOKEN_LATENCY = 322,
     EQTOKEN_SWAPBARRIER = 323,
     EQTOKEN_OUTPUTFRAME = 324,
     EQTOKEN_INPUTFRAME = 325,
     EQTOKEN_STRING = 326,
     EQTOKEN_FLOAT = 327,
     EQTOKEN_INTEGER = 328,
     EQTOKEN_UNSIGNED = 329
   };
#endif
#define EQTOKEN_GLOBAL 258
#define EQTOKEN_CONNECTION_SATTR_HOSTNAME 259
#define EQTOKEN_CONNECTION_SATTR_LAUNCH_COMMAND 260
#define EQTOKEN_CONNECTION_IATTR_TYPE 261
#define EQTOKEN_CONNECTION_IATTR_TCPIP_PORT 262
#define EQTOKEN_CONNECTION_IATTR_LAUNCH_TIMEOUT 263
#define EQTOKEN_CONFIG_FATTR_EYE_BASE 264
#define EQTOKEN_WINDOW_IATTR_HINTS_STEREO 265
#define EQTOKEN_WINDOW_IATTR_HINTS_DOUBLEBUFFER 266
#define EQTOKEN_WINDOW_IATTR_HINTS_FULLSCREEN 267
#define EQTOKEN_WINDOW_IATTR_HINTS_DECORATION 268
#define EQTOKEN_WINDOW_IATTR_PLANES_COLOR 269
#define EQTOKEN_WINDOW_IATTR_PLANES_ALPHA 270
#define EQTOKEN_WINDOW_IATTR_PLANES_DEPTH 271
#define EQTOKEN_WINDOW_IATTR_PLANES_STENCIL 272
#define EQTOKEN_SERVER 273
#define EQTOKEN_CONFIG 274
#define EQTOKEN_APPNODE 275
#define EQTOKEN_NODE 276
#define EQTOKEN_PIPE 277
#define EQTOKEN_WINDOW 278
#define EQTOKEN_ATTRIBUTES 279
#define EQTOKEN_HINTS 280
#define EQTOKEN_STEREO 281
#define EQTOKEN_DOUBLEBUFFER 282
#define EQTOKEN_FULLSCREEN 283
#define EQTOKEN_DECORATION 284
#define EQTOKEN_PLANES 285
#define EQTOKEN_COLOR 286
#define EQTOKEN_ALPHA 287
#define EQTOKEN_DEPTH 288
#define EQTOKEN_STENCIL 289
#define EQTOKEN_ON 290
#define EQTOKEN_OFF 291
#define EQTOKEN_AUTO 292
#define EQTOKEN_CHANNEL 293
#define EQTOKEN_COMPOUND 294
#define EQTOKEN_CONNECTION 295
#define EQTOKEN_NAME 296
#define EQTOKEN_TYPE 297
#define EQTOKEN_TCPIP 298
#define EQTOKEN_HOSTNAME 299
#define EQTOKEN_COMMAND 300
#define EQTOKEN_TIMEOUT 301
#define EQTOKEN_TASK 302
#define EQTOKEN_EYE 303
#define EQTOKEN_EYE_BASE 304
#define EQTOKEN_BUFFER 305
#define EQTOKEN_CLEAR 306
#define EQTOKEN_DRAW 307
#define EQTOKEN_ASSEMBLE 308
#define EQTOKEN_READBACK 309
#define EQTOKEN_CYCLOP 310
#define EQTOKEN_LEFT 311
#define EQTOKEN_RIGHT 312
#define EQTOKEN_VIEWPORT 313
#define EQTOKEN_RANGE 314
#define EQTOKEN_DISPLAY 315
#define EQTOKEN_SCREEN 316
#define EQTOKEN_WALL 317
#define EQTOKEN_BOTTOM_LEFT 318
#define EQTOKEN_BOTTOM_RIGHT 319
#define EQTOKEN_TOP_LEFT 320
#define EQTOKEN_SYNC 321
#define EQTOKEN_LATENCY 322
#define EQTOKEN_SWAPBARRIER 323
#define EQTOKEN_OUTPUTFRAME 324
#define EQTOKEN_INPUTFRAME 325
#define EQTOKEN_STRING 326
#define EQTOKEN_FLOAT 327
#define EQTOKEN_INTEGER 328
#define EQTOKEN_UNSIGNED 329




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)

typedef union YYSTYPE {
    const char*             _string;
    int                     _int;
    unsigned                _unsigned;
    float                   _float;
    eqNet::Connection::Type _connectionType;
    float                   _viewport[4];
} YYSTYPE;
/* Line 1318 of yacc.c.  */

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE eqLoader_lval;



