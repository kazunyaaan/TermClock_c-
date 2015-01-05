#ifndef DIGI_NUMBER_H
#define DIGI_NUMBER_H

namespace gray
{
const int N = 5;
const std::string num0[N] = {
    "\e[46m      \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m      \e[m ",
};

const std::string num1[N] = {
    "\e[m \e[46m   \e[m   ",
    "\e[m  \e[46m  \e[m   ",
    "\e[m  \e[46m  \e[m   ",
    "\e[m  \e[46m  \e[m   ",
    "\e[m \e[46m    \e[m  ",
};

const std::string num2[N] = {
    "\e[46m      \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[46m      \e[m ",
    "\e[46m  \e[m     ",
    "\e[46m      \e[m ",
};

const std::string num3[N] = {
    "\e[46m      \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[46m      \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[46m      \e[m ",
};

const std::string num4[N] = {
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m      \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[m    \e[46m  \e[m ",
};

const std::string num5[N] = {
    "\e[46m      \e[m ",
    "\e[46m  \e[m     ",
    "\e[46m      \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[46m      \e[m ",
};

const std::string num6[N] = {
    "\e[46m  \e[m     ",
    "\e[46m  \e[m     ",
    "\e[46m      \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m      \e[m ",
};

const std::string num7[N] = {
    "\e[46m      \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[m    \e[46m  \e[m ",
};

const std::string num8[N] = {
    "\e[46m      \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m      \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m      \e[m ",
};

const std::string num9[N] = {
    "\e[46m      \e[m ",
    "\e[46m  \e[m  \e[46m  \e[m ",
    "\e[46m      \e[m ",
    "\e[m    \e[46m  \e[m ",
    "\e[46m      \e[m ",
};

const std::string colon[N] = {
    "\e[m       ",
    "\e[m  \e[46m  \e[m   ",
    "\e[m       ",
    "\e[m  \e[46m  \e[m   ",
    "\e[m       ",
};

const std::string empty[N] = {
    "\e[m       ",
    "\e[m       ",
    "\e[m       ",
    "\e[m       ",
    "\e[m       ",
};


const std::string* num[] = {
    num0,
    num1,
    num2,
    num3,
    num4,
    num5,
    num6,
    num7,
    num8,
    num9,
    colon,
    empty,
};

} // white


namespace Rwhite
{
const int N = 5;
const std::string num0[N] = {
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string num1[N] = {
    "\e[47m \e[m   \e[47m   \e[m",
    "\e[47m  \e[m  \e[47m   \e[m",
    "\e[47m  \e[m  \e[47m   \e[m",
    "\e[47m  \e[m  \e[47m   \e[m",
    "\e[47m \e[m    \e[47m  \e[m",
};

const std::string num2[N] = {
    "\e[m      \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m     \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string num3[N] = {
    "\e[m      \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string num4[N] = {
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
};

const std::string num5[N] = {
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m     \e[m",
    "\e[m      \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string num6[N] = {
    "\e[m  \e[47m     \e[m",
    "\e[m  \e[47m     \e[m",
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string num7[N] = {
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
};

const std::string num8[N] = {
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string num9[N] = {
    "\e[m      \e[47m \e[m",
    "\e[m  \e[47m  \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
    "\e[47m    \e[m  \e[47m \e[m",
    "\e[m      \e[47m \e[m",
};

const std::string colon[N] = {
    "\e[47m       \e[m",
    "\e[47m  \e[m  \e[47m   \e[m",
    "\e[47m       \e[m",
    "\e[47m  \e[m  \e[47m   \e[m",
    "\e[47m       \e[m",
};

const std::string empty[N] = {
    "\e[47m       \e[m",
    "\e[47m       \e[m",
    "\e[47m       \e[m",
    "\e[47m       \e[m",
    "\e[47m       \e[m",
};


const std::string* num[] = {
    num0,
    num1,
    num2,
    num3,
    num4,
    num5,
    num6,
    num7,
    num8,
    num9,
    colon,
    empty,
};

} // Rwhite


namespace white
{
const int N = 5;
const std::string num0[N] = {
    "\e[47m      \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m      \e[m ",
};

const std::string num1[N] = {
    "\e[m \e[47m   \e[m   ",
    "\e[m  \e[47m  \e[m   ",
    "\e[m  \e[47m  \e[m   ",
    "\e[m  \e[47m  \e[m   ",
    "\e[m \e[47m    \e[m  ",
};

const std::string num2[N] = {
    "\e[47m      \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[47m      \e[m ",
    "\e[47m  \e[m     ",
    "\e[47m      \e[m ",
};

const std::string num3[N] = {
    "\e[47m      \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[47m      \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[47m      \e[m ",
};

const std::string num4[N] = {
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m      \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[m    \e[47m  \e[m ",
};

const std::string num5[N] = {
    "\e[47m      \e[m ",
    "\e[47m  \e[m     ",
    "\e[47m      \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[47m      \e[m ",
};

const std::string num6[N] = {
    "\e[47m  \e[m     ",
    "\e[47m  \e[m     ",
    "\e[47m      \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m      \e[m ",
};

const std::string num7[N] = {
    "\e[47m      \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[m    \e[47m  \e[m ",
};

const std::string num8[N] = {
    "\e[47m      \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m      \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m      \e[m ",
};

const std::string num9[N] = {
    "\e[47m      \e[m ",
    "\e[47m  \e[m  \e[47m  \e[m ",
    "\e[47m      \e[m ",
    "\e[m    \e[47m  \e[m ",
    "\e[47m      \e[m ",
};

const std::string colon[N] = {
    "\e[m       ",
    "\e[m  \e[47m  \e[m   ",
    "\e[m       ",
    "\e[m  \e[47m  \e[m   ",
    "\e[m       ",
};

const std::string empty[N] = {
    "\e[m       ",
    "\e[m       ",
    "\e[m       ",
    "\e[m       ",
    "\e[m       ",
};


const std::string* num[] = {
    num0,
    num1,
    num2,
    num3,
    num4,
    num5,
    num6,
    num7,
    num8,
    num9,
    colon,
    empty,
};

} // white

namespace mono
{

const std::string num0[6] = {
    "┏━━━━┓ ",
    "┃ ┏┓ ┃ ",
    "┃ ┃┃ ┃ ",
    "┃ ┃┃ ┃ ",
    "┃ ┗┛ ┃ ",
    "┗━━━━┛ ",
};

const std::string num1[6] = {
    "┏━━┓   ",
    "┗┓ ┃   ",
    " ┃ ┃   ",
    " ┃ ┃   ",
    "┏┛ ┗┓  ",
    "┗━━━┛  ",
};

const std::string num2[6] = {
    "┏━━━━┓ ",
    "┗━━┓ ┃ ",
    "┏━━┛ ┃ ",
    "┃ ┏━━┛ ",
    "┃ ┗━━┓ ",
    "┗━━━━┛ ",
};

const std::string num3[6] = {
    "┏━━━━┓ ",
    "┗━━┓ ┃ ",
    "┏━━┛ ┃ ",
    "┗━━┓ ┃ ",
    "┏━━┛ ┃ ",
    "┗━━━━┛ ",
};

const std::string num4[6] = {
    "┏━┓┏━┓ ",
    "┃ ┃┃ ┃ ",
    "┃ ┗┛ ┃ ",
    "┗━━┓ ┃ ",
    "   ┃ ┃ ",
    "   ┗━┛ ",
};

const std::string num5[6] = {
    "┏━━━━┓ ",
    "┃ ┏━━┛ ",
    "┃ ┗━━┓ ",
    "┗━━┓ ┃ ",
    "┏━━┛ ┃ ",
    "┗━━━━┛ ",
};

const std::string num6[6] = {
    "┏━┓    ",
    "┃ ┃    ",
    "┃ ┗━━┓ ",
    "┃ ┏┓ ┃ ",
    "┃ ┗┛ ┃ ",
    "┗━━━━┛ ",
};

const std::string num7[6] = {
    "┏━━━━┓ ",
    "┃ ┏┓ ┃ ",
    "┗━┛┃ ┃ ",
    "   ┃ ┃ ",
    "   ┃ ┃ ",
    "   ┗━┛ ",
};

const std::string num8[6] = {
    "┏━━━━┓ ",
    "┃ ┏┓ ┃ ",
    "┃ ┗┛ ┃ ",
    "┃ ┏┓ ┃ ",
    "┃ ┗┛ ┃ ",
    "┗━━━━┛ ",
};

const std::string num9[6] = {
    "┏━━━━┓ ",
    "┃ ┏┓ ┃ ",
    "┃ ┗┛ ┃ ",
    "┗━━┓ ┃ ",
    "┏━━┛ ┃ ",
    "┗━━━━┛ ",
};

const std::string colon[6] = {
    "      ",
    " ┏━┓  ",
    " ┗━┛  ",
    " ┏━┓  ",
    " ┗━┛  ",
    "      ",
};

const std::string empty[6] = {
    "      ",
    "      ",
    "      ",
    "      ",
    "      ",
    "      ",
};


const std::string* num[] = {
    num0,
    num1,
    num2,
    num3,
    num4,
    num5,
    num6,
    num7,
    num8,
    num9,
    colon,
    empty,
};

const int N = 6;

}
#endif // DIGI_NUMBER_H
