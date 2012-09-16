The FizzBuzz programming language is a special-purpose language specifically
created to solve the FizzBuzz problem.

References:

* [http://imranontech.com/2007/01/24/using-fizzbuzz-to-find-developers-who-grok-coding/](Using FizzBuzz to Find Developers who Grok Coding) by Imran Ghory
* [http://www.codinghorror.com/blog/2007/02/why-cant-programmers-program.html](Why Can't Programmers.. Program?) by Jeff Atwood

The language was inspired by my own [99 programming language](https://github.com/Keith-S-Thompson/99)
and by my [fizzbuzz-polyglog](https://github.com/Keith-S-Thompson/fizzbuzz-polyglot) project.
Students of the 99 language will note a remarkable similarity in syntax.

It is *not* suitable for the [99 Bottles of Beer](http://99-bottles-of-beer.net)
web site.  I may eventually devise a hybrid of the FizzBuzz and 99
programming languages.

The language definition is relatively straightforward.

Syntax:

- A FizzBuzz program consists of a single text file.

- On each line, everything from a `#` character to the end of the
  line is ignored, i.e., comments are introduced by `#` characters.
  (Unlike some other languages, `#` characters within character
  constants and string literals are not an issue.)

- After comments are stripped, leading and trailing white space
  are ignored.

- Empty lines are ignored.

- Anything not ignored is a syntax error.

Semantics:

- A syntactically valid FizzBuzz program, when executed, prints exactly
  100 lines of output as specified by the FizzBuzz problem.

This distribution includes a FizzBuzz interpreter `fizzbuzz`, written in Perl 5,
two sample FizzBuzz program, `fizzbuzz.fizzbuzz` and `empty.fizzbuzz`, and a sample output
file, `fizzbuzz.fizzbuzz.out`.  The interpreter can read its input either
from a file named on the command line, or from standard input if no
arguments are given.  The interpreter implements a language extension,
permitting multiple input files to be treated as a single FizzBuzz program;
this extension is not supported by the language definition, as no
actual use for it has been discovered.

For your convenience, most systems already include a sample FizzBuzz program,
typically called `/dev/null` (on Unix-like systems), `NUL:` (CP/M,
MS-DOS and Windows), `NIL:` (Amiga), `NL:`, or `NLA0:` (OpenVMS).

References:

- https://github.com/Keith-S-Thompson/fizzbuzz
- https://github.com/Keith-S-Thompson/fizzbuzz-polyglot
- https://github.com/Keith-S-Thompson/fizzbuzz-c

   -- [Keith Thompson](mailto:Keith.S.Thompson@gmail.com) Sat 2012-09-15
