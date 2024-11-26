#ifndef COMMON_HPP
#define COMMON_HPP

#include <iostream>

// ========================================
//           Mathematical Constants
// ========================================
#define PI 3.141592653589793              // Pi (π)
#define E 2.718281828459045               // Euler's number (e)
#define SQRT2 1.414213562373095           // Square root of 2
#define GOLDEN_RATIO 1.618033988749895    // Golden ratio (ϕ)

// Trigonometric conversions
#define DEG_TO_RAD (PI / 180.0)           // Degrees to Radians conversion
#define RAD_TO_DEG (180.0 / PI)           // Radians to Degrees conversion

// ========================================
//           Physical Constants
// ========================================
#define GRAVITY 9.81                      // m/s^2 (Gravitational acceleration on Earth)
#define SPEED_OF_LIGHT 299792458          // m/s (Speed of light in vacuum)
#define PLANCK_CONSTANT 6.62607015e-34    // J⋅s (Planck's constant)
#define BOLTZMANN_CONSTANT 1.380649e-23   // J/K (Boltzmann constant)
#define GAS_CONSTANT 8.314462618          // J/(mol⋅K) (Universal gas constant)
#define AVOGADRO_CONSTANT 6.02214076e23   // 1/mol (Avogadro's number)
#define ELEMENTARY_CHARGE 1.602176634e-19 // C (Elementary charge)

// ========================================
//           General Constants
// ========================================
#define MAX_BUFFER_SIZE 1024              // Common buffer size for reading
#define DEFAULT_PORT 8080                 // Default port for network applications
#define MAX_CONNECTIONS 100               // Maximum connections for a server
#define EPSILON 1e-9                      // A small value used for floating point comparisons
#define MAX_THREADS 8                     // Maximum number of threads (for multi-threading)

// Color Codes (for terminal output)
#define RESET_COLOR "\033[0m"             // Reset terminal color
#define RED_COLOR "\033[31m"              // Red text
#define GREEN_COLOR "\033[32m"            // Green text
#define YELLOW_COLOR "\033[33m"           // Yellow text
#define BLUE_COLOR "\033[34m"             // Blue text

// ========================================
//           Time Constants
// ========================================
#define SECONDS_IN_MINUTE 60
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_DAY 86400
#define MILLISECONDS_IN_SECOND 1000
#define MICROSECONDS_IN_SECOND 1000000
#define NANOSECONDS_IN_SECOND 1000000000

#endif // COMMON_HPP
