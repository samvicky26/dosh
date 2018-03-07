# DOSH

A CryptoNote based Cryptocurrency.

# About

The advent of the Dosh Cryptocurrency is a coherent outcome to the
prerequisite for a more decentralized untraceable digital cash. 

DOSH is a CryptoNote based Cryptocurrency that utilizes proof-of-work to keep the network secure.
CryptoNight is the hashing algorithm used in stance to keep the network fairly accessible and distributed.

By using DOSH, you prevent any entity from obtaining your transactional history as the default mechanics of DOSH is to
obfuscate your activity. Participants are effectively protected by Ring Signatures when sending and receiving funds.

# Purpose
Our endeavor is to establish DOSH as a privacy focused decentralized Cryptocurrency, with the use of
an Egalitarian proof-of-work system where all participants have equal voting rights within the network.

This coin is for the users of the network and should remain fairly distributed. All development stages will be voted and
funded by the community in the effort to improve the project.

# Conf
* 18.4 Million coins
* 120 seconds per block w/ 18 ES Factor
* POW - CryptoNight
* Type - CryptoNote
* Issue date - 1st March 2018

# Building Dosh

On Unix:

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55.
You may download them from:
http://gcc.gnu.org/
http://www.cmake.org/
http://www.boost.org/

Alternatively, it may be possible to install them using a package manager.

To build, change to a directory where this file is located, and run `make'. The resulting executables can be found in build/release/src.

Advanced options:
Parallel build: run `make -j<number of threads>' instead of `make'.
Debug build: run `make build-debug'.
Test suite: run `make test-release' to run tests in addition to building. Running `make test-debug' will do the same to the debug version.
Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++' before running `make'.

On Windows:
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55. You may download them from:
http://www.microsoft.com/
http://www.cmake.org/
http://www.boost.org/

To build, change to a directory where this file is located, and run this commands:
mkdir build
cd build
cmake -G "Visual Studio 12 Win64" ..

And then do Build.
Good luck!