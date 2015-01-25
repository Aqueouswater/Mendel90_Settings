#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "Marlin.h"

#define OVERSAMPLENR 16

#if (THERMISTORHEATER_0 == 1) || (THERMISTORHEATER_1 == 1)  || (THERMISTORHEATER_2 == 1) || (THERMISTORBED == 1) //100k bed thermistor

const short temptable_1[][2] PROGMEM = {
{       23*OVERSAMPLENR ,       300     },
{       25*OVERSAMPLENR ,       295     },
{       27*OVERSAMPLENR ,       290     },
{       28*OVERSAMPLENR ,       285     },
{       31*OVERSAMPLENR ,       280     },
{       33*OVERSAMPLENR ,       275     },
{       35*OVERSAMPLENR ,       270     },
{       38*OVERSAMPLENR ,       265     },
{       41*OVERSAMPLENR ,       260     },
{       44*OVERSAMPLENR ,       255     },
{       48*OVERSAMPLENR ,       250     },
{       52*OVERSAMPLENR ,       245     },
{       56*OVERSAMPLENR ,       240     },
{       61*OVERSAMPLENR ,       235     },
{       66*OVERSAMPLENR ,       230     },
{       71*OVERSAMPLENR ,       225     },
{       78*OVERSAMPLENR ,       220     },
{       84*OVERSAMPLENR ,       215     },
{       92*OVERSAMPLENR ,       210     },
{       100*OVERSAMPLENR        ,       205     },
{       109*OVERSAMPLENR        ,       200     },
{       120*OVERSAMPLENR        ,       195     },
{       131*OVERSAMPLENR        ,       190     },
{       143*OVERSAMPLENR        ,       185     },
{       156*OVERSAMPLENR        ,       180     },
{       171*OVERSAMPLENR        ,       175     },
{       187*OVERSAMPLENR        ,       170     },
{       205*OVERSAMPLENR        ,       165     },
{       224*OVERSAMPLENR        ,       160     },
{       245*OVERSAMPLENR        ,       155     },
{       268*OVERSAMPLENR        ,       150     },
{       293*OVERSAMPLENR        ,       145     },
{       320*OVERSAMPLENR        ,       140     },
{       348*OVERSAMPLENR        ,       135     },
{       379*OVERSAMPLENR        ,       130     },
{       411*OVERSAMPLENR        ,       125     },
{       445*OVERSAMPLENR        ,       120     },
{       480*OVERSAMPLENR        ,       115     },
{       516*OVERSAMPLENR        ,       110     },
{       553*OVERSAMPLENR        ,       105     },
{       591*OVERSAMPLENR        ,       100     },
{       628*OVERSAMPLENR        ,       95      },
{       665*OVERSAMPLENR        ,       90      },
{       702*OVERSAMPLENR        ,       85      },
{       737*OVERSAMPLENR        ,       80      },
{       770*OVERSAMPLENR        ,       75      },
{       801*OVERSAMPLENR        ,       70      },
{       830*OVERSAMPLENR        ,       65      },
{       857*OVERSAMPLENR        ,       60      },
{       881*OVERSAMPLENR        ,       55      },
{       903*OVERSAMPLENR        ,       50      },
{       922*OVERSAMPLENR        ,       45      },
{       939*OVERSAMPLENR        ,       40      },
{       954*OVERSAMPLENR        ,       35      },
{       966*OVERSAMPLENR        ,       30      },
{       977*OVERSAMPLENR        ,       25      },
{       985*OVERSAMPLENR        ,       20      },
{       993*OVERSAMPLENR        ,       15      },
{       999*OVERSAMPLENR        ,       10      },
{       1004*OVERSAMPLENR       ,       5       },
{       1008*OVERSAMPLENR       ,       0       } //safety
};
#endif
#if (THERMISTORHEATER_0 == 2) || (THERMISTORHEATER_1 == 2) || (THERMISTORHEATER_2 == 2) || (THERMISTORBED == 2) //200k bed thermistor
const short temptable_2[][2] PROGMEM = {
//200k ATC Semitec 204GT-2
//Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
   {1*OVERSAMPLENR, 848},
   {30*OVERSAMPLENR, 300}, //top rating 300C
   {34*OVERSAMPLENR, 290},
   {39*OVERSAMPLENR, 280},
   {46*OVERSAMPLENR, 270},
   {53*OVERSAMPLENR, 260},
   {63*OVERSAMPLENR, 250},
   {74*OVERSAMPLENR, 240},
   {87*OVERSAMPLENR, 230},
   {104*OVERSAMPLENR, 220},
   {124*OVERSAMPLENR, 210},
   {148*OVERSAMPLENR, 200},
   {176*OVERSAMPLENR, 190},
   {211*OVERSAMPLENR, 180},
   {252*OVERSAMPLENR, 170},
   {301*OVERSAMPLENR, 160},
   {357*OVERSAMPLENR, 150},
   {420*OVERSAMPLENR, 140},
   {489*OVERSAMPLENR, 130},
   {562*OVERSAMPLENR, 120},
   {636*OVERSAMPLENR, 110},
   {708*OVERSAMPLENR, 100},
   {775*OVERSAMPLENR, 90},
   {835*OVERSAMPLENR, 80},
   {884*OVERSAMPLENR, 70},
   {924*OVERSAMPLENR, 60},
   {955*OVERSAMPLENR, 50},
   {977*OVERSAMPLENR, 40},
   {993*OVERSAMPLENR, 30},
   {1004*OVERSAMPLENR, 20},
   {1012*OVERSAMPLENR, 10},
   {1016*OVERSAMPLENR, 0},
};

#endif
#if (THERMISTORHEATER_0 == 3) || (THERMISTORHEATER_1 == 3) || (THERMISTORHEATER_2 == 3) || (THERMISTORBED == 3) //mendel-parts
const short temptable_3[][2] PROGMEM = {
                {1*OVERSAMPLENR,864},
                {21*OVERSAMPLENR,300},
                {25*OVERSAMPLENR,290},
                {29*OVERSAMPLENR,280},
                {33*OVERSAMPLENR,270},
                {39*OVERSAMPLENR,260},
                {46*OVERSAMPLENR,250},
                {54*OVERSAMPLENR,240},
                {64*OVERSAMPLENR,230},
                {75*OVERSAMPLENR,220},
                {90*OVERSAMPLENR,210},
                {107*OVERSAMPLENR,200},
                {128*OVERSAMPLENR,190},
                {154*OVERSAMPLENR,180},
                {184*OVERSAMPLENR,170},
                {221*OVERSAMPLENR,160},
                {265*OVERSAMPLENR,150},
                {316*OVERSAMPLENR,140},
                {375*OVERSAMPLENR,130},
                {441*OVERSAMPLENR,120},
                {513*OVERSAMPLENR,110},
                {588*OVERSAMPLENR,100},
                {734*OVERSAMPLENR,80},
                {856*OVERSAMPLENR,60},
                {938*OVERSAMPLENR,40},
                {986*OVERSAMPLENR,20},
                {1008*OVERSAMPLENR,0},
                {1018*OVERSAMPLENR,-20}
        };

#endif
#if (THERMISTORHEATER_0 == 4) || (THERMISTORHEATER_1 == 4) || (THERMISTORHEATER_2 == 4) || (THERMISTORBED == 4) //10k thermistor
const short temptable_4[][2] PROGMEM = {
   {1*OVERSAMPLENR, 430},
   {54*OVERSAMPLENR, 137},
   {107*OVERSAMPLENR, 107},
   {160*OVERSAMPLENR, 91},
   {213*OVERSAMPLENR, 80},
   {266*OVERSAMPLENR, 71},
   {319*OVERSAMPLENR, 64},
   {372*OVERSAMPLENR, 57},
   {425*OVERSAMPLENR, 51},
   {478*OVERSAMPLENR, 46},
   {531*OVERSAMPLENR, 41},
   {584*OVERSAMPLENR, 35},
   {637*OVERSAMPLENR, 30},
   {690*OVERSAMPLENR, 25},
   {743*OVERSAMPLENR, 20},
   {796*OVERSAMPLENR, 14},
   {849*OVERSAMPLENR, 7},
   {902*OVERSAMPLENR, 0},
   {955*OVERSAMPLENR, -11},
   {1008*OVERSAMPLENR, -35}
};
#endif

#if (THERMISTORHEATER_0 == 5) || (THERMISTORHEATER_1 == 5) || (THERMISTORHEATER_2 == 5) || (THERMISTORBED == 5) //100k ParCan thermistor (104GT-2)
const short temptable_5[][2] PROGMEM = {
// ATC Semitec 104GT-2 (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
   {1*OVERSAMPLENR, 713},
   {17*OVERSAMPLENR, 300}, //top rating 300C
   {20*OVERSAMPLENR, 290},
   {23*OVERSAMPLENR, 280},
   {27*OVERSAMPLENR, 270},
   {31*OVERSAMPLENR, 260},
   {37*OVERSAMPLENR, 250},
   {43*OVERSAMPLENR, 240},
   {51*OVERSAMPLENR, 230},
   {61*OVERSAMPLENR, 220},
   {73*OVERSAMPLENR, 210},
   {87*OVERSAMPLENR, 200},
   {106*OVERSAMPLENR, 190},
   {128*OVERSAMPLENR, 180},
   {155*OVERSAMPLENR, 170},
   {189*OVERSAMPLENR, 160},
   {230*OVERSAMPLENR, 150},
   {278*OVERSAMPLENR, 140},
   {336*OVERSAMPLENR, 130},
   {402*OVERSAMPLENR, 120},
   {476*OVERSAMPLENR, 110},
   {554*OVERSAMPLENR, 100},
   {635*OVERSAMPLENR, 90},
   {713*OVERSAMPLENR, 80},
   {784*OVERSAMPLENR, 70},
   {846*OVERSAMPLENR, 60},
   {897*OVERSAMPLENR, 50},
   {937*OVERSAMPLENR, 40},
   {966*OVERSAMPLENR, 30},
   {986*OVERSAMPLENR, 20},
   {1000*OVERSAMPLENR, 10},
   {1010*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 6) || (THERMISTORHEATER_1 == 6) || (THERMISTORHEATER_2 == 6) || (THERMISTORBED == 6) // 100k Epcos thermistor
const short temptable_6[][2] PROGMEM = {
   {1*OVERSAMPLENR, 350},
   {28*OVERSAMPLENR, 250}, //top rating 250C
   {31*OVERSAMPLENR, 245},
   {35*OVERSAMPLENR, 240},
   {39*OVERSAMPLENR, 235},
   {42*OVERSAMPLENR, 230},
   {44*OVERSAMPLENR, 225},
   {49*OVERSAMPLENR, 220},
   {53*OVERSAMPLENR, 215},
   {62*OVERSAMPLENR, 210},
   {71*OVERSAMPLENR, 205}, //fitted graphically
   {78*OVERSAMPLENR, 200}, //fitted graphically
   {94*OVERSAMPLENR, 190},
   {102*OVERSAMPLENR, 185},
   {116*OVERSAMPLENR, 170},
   {143*OVERSAMPLENR, 160},
   {183*OVERSAMPLENR, 150},
   {223*OVERSAMPLENR, 140},
   {270*OVERSAMPLENR, 130},
   {318*OVERSAMPLENR, 120},
   {383*OVERSAMPLENR, 110},
   {413*OVERSAMPLENR, 105},
   {439*OVERSAMPLENR, 100},
   {484*OVERSAMPLENR, 95},
   {513*OVERSAMPLENR, 90},
   {607*OVERSAMPLENR, 80},
   {664*OVERSAMPLENR, 70},
   {781*OVERSAMPLENR, 60},
   {810*OVERSAMPLENR, 55},
   {849*OVERSAMPLENR, 50},
   {914*OVERSAMPLENR, 45},
   {914*OVERSAMPLENR, 40},
   {935*OVERSAMPLENR, 35},
   {954*OVERSAMPLENR, 30},
   {970*OVERSAMPLENR, 25},
   {978*OVERSAMPLENR, 22},
   {1008*OVERSAMPLENR, 3},
   {1023*OVERSAMPLENR, 0}  //to allow internal 0 degrees C
};
#endif

#if (THERMISTORHEATER_0 == 7) || (THERMISTORHEATER_1 == 7) || (THERMISTORHEATER_2 == 7) || (THERMISTORBED == 7) // 100k Honeywell 135-104LAG-J01
const short temptable_7[][2] PROGMEM = {
   {1*OVERSAMPLENR, 941},
   {19*OVERSAMPLENR, 362},
   {37*OVERSAMPLENR, 299}, //top rating 300C
   {55*OVERSAMPLENR, 266},
   {73*OVERSAMPLENR, 245},
   {91*OVERSAMPLENR, 229},
   {109*OVERSAMPLENR, 216},
   {127*OVERSAMPLENR, 206},
   {145*OVERSAMPLENR, 197},
   {163*OVERSAMPLENR, 190},
   {181*OVERSAMPLENR, 183},
   {199*OVERSAMPLENR, 177},
   {217*OVERSAMPLENR, 171},
   {235*OVERSAMPLENR, 166},
   {253*OVERSAMPLENR, 162},
   {271*OVERSAMPLENR, 157},
   {289*OVERSAMPLENR, 153},
   {307*OVERSAMPLENR, 149},
   {325*OVERSAMPLENR, 146},
   {343*OVERSAMPLENR, 142},
   {361*OVERSAMPLENR, 139},
   {379*OVERSAMPLENR, 135},
   {397*OVERSAMPLENR, 132},
   {415*OVERSAMPLENR, 129},
   {433*OVERSAMPLENR, 126},
   {451*OVERSAMPLENR, 123},
   {469*OVERSAMPLENR, 121},
   {487*OVERSAMPLENR, 118},
   {505*OVERSAMPLENR, 115},
   {523*OVERSAMPLENR, 112},
   {541*OVERSAMPLENR, 110},
   {559*OVERSAMPLENR, 107},
   {577*OVERSAMPLENR, 105},
   {595*OVERSAMPLENR, 102},
   {613*OVERSAMPLENR, 99},
   {631*OVERSAMPLENR, 97},
   {649*OVERSAMPLENR, 94},
   {667*OVERSAMPLENR, 92},
   {685*OVERSAMPLENR, 89},
   {703*OVERSAMPLENR, 86},
   {721*OVERSAMPLENR, 84},
   {739*OVERSAMPLENR, 81},
   {757*OVERSAMPLENR, 78},
   {775*OVERSAMPLENR, 75},
   {793*OVERSAMPLENR, 72},
   {811*OVERSAMPLENR, 69},
   {829*OVERSAMPLENR, 66},
   {847*OVERSAMPLENR, 62},
   {865*OVERSAMPLENR, 59},
   {883*OVERSAMPLENR, 55},
   {901*OVERSAMPLENR, 51},
   {919*OVERSAMPLENR, 46},
   {937*OVERSAMPLENR, 41},
   {955*OVERSAMPLENR, 35},
   {973*OVERSAMPLENR, 27},
   {991*OVERSAMPLENR, 17},
   {1009*OVERSAMPLENR, 1},
   {1023*OVERSAMPLENR, 0}  //to allow internal 0 degrees C
};
#endif

#if (THERMISTORHEATER_0 == 71) || (THERMISTORHEATER_1 == 71) || (THERMISTORHEATER_2 == 71) || (THERMISTORBED == 71) // 100k Honeywell 135-104LAF-J01
// R0 = 100000 Ohm
// T0 = 25 °C
// Beta = 3974
// R1 = 0 Ohm
// R2 = 4700 Ohm
const short temptable_71[][2] PROGMEM = {
   {35*OVERSAMPLENR, 300},
   {51*OVERSAMPLENR, 270},
   {54*OVERSAMPLENR, 265},
   {58*OVERSAMPLENR, 260},
   {59*OVERSAMPLENR, 258},
   {61*OVERSAMPLENR, 256},
   {63*OVERSAMPLENR, 254},
   {64*OVERSAMPLENR, 252},
   {66*OVERSAMPLENR, 250},
   {67*OVERSAMPLENR, 249},
   {68*OVERSAMPLENR, 248},
   {69*OVERSAMPLENR, 247},
   {70*OVERSAMPLENR, 246},
   {71*OVERSAMPLENR, 245},
   {72*OVERSAMPLENR, 244},
   {73*OVERSAMPLENR, 243},
   {74*OVERSAMPLENR, 242},
   {75*OVERSAMPLENR, 241},
   {76*OVERSAMPLENR, 240},
   {77*OVERSAMPLENR, 239},
   {78*OVERSAMPLENR, 238},
   {79*OVERSAMPLENR, 237},
   {80*OVERSAMPLENR, 236},
   {81*OVERSAMPLENR, 235},
   {82*OVERSAMPLENR, 234},
   {84*OVERSAMPLENR, 233},
   {85*OVERSAMPLENR, 232},
   {86*OVERSAMPLENR, 231},
   {87*OVERSAMPLENR, 230},
   {89*OVERSAMPLENR, 229},
   {90*OVERSAMPLENR, 228},
   {91*OVERSAMPLENR, 227},
   {92*OVERSAMPLENR, 226},
   {94*OVERSAMPLENR, 225},
   {95*OVERSAMPLENR, 224},
   {97*OVERSAMPLENR, 223},
   {98*OVERSAMPLENR, 222},
   {99*OVERSAMPLENR, 221},
   {101*OVERSAMPLENR, 220},
   {102*OVERSAMPLENR, 219},
   {104*OVERSAMPLENR, 218},
   {106*OVERSAMPLENR, 217},
   {107*OVERSAMPLENR, 216},
   {109*OVERSAMPLENR, 215},
   {110*OVERSAMPLENR, 214},
   {112*OVERSAMPLENR, 213},
   {114*OVERSAMPLENR, 212},
   {115*OVERSAMPLENR, 211},
   {117*OVERSAMPLENR, 210},
   {119*OVERSAMPLENR, 209},
   {121*OVERSAMPLENR, 208},
   {123*OVERSAMPLENR, 207},
   {125*OVERSAMPLENR, 206},
   {126*OVERSAMPLENR, 205},
   {128*OVERSAMPLENR, 204},
   {130*OVERSAMPLENR, 203},
   {132*OVERSAMPLENR, 202},
   {134*OVERSAMPLENR, 201},
   {136*OVERSAMPLENR, 200},
   {139*OVERSAMPLENR, 199},
   {141*OVERSAMPLENR, 198},
   {143*OVERSAMPLENR, 197},
   {145*OVERSAMPLENR, 196},
   {147*OVERSAMPLENR, 195},
   {150*OVERSAMPLENR, 194},
   {152*OVERSAMPLENR, 193},
   {154*OVERSAMPLENR, 192},
   {157*OVERSAMPLENR, 191},
   {159*OVERSAMPLENR, 190},
   {162*OVERSAMPLENR, 189},
   {164*OVERSAMPLENR, 188},
   {167*OVERSAMPLENR, 187},
   {170*OVERSAMPLENR, 186},
   {172*OVERSAMPLENR, 185},
   {175*OVERSAMPLENR, 184},
   {178*OVERSAMPLENR, 183},
   {181*OVERSAMPLENR, 182},
   {184*OVERSAMPLENR, 181},
   {187*OVERSAMPLENR, 180},
   {190*OVERSAMPLENR, 179},
   {193*OVERSAMPLENR, 178},
   {196*OVERSAMPLENR, 177},
   {199*OVERSAMPLENR, 176},
   {202*OVERSAMPLENR, 175},
   {205*OVERSAMPLENR, 174},
   {208*OVERSAMPLENR, 173},
   {212*OVERSAMPLENR, 172},
   {215*OVERSAMPLENR, 171},
   {219*OVERSAMPLENR, 170},
   {237*OVERSAMPLENR, 165},
   {256*OVERSAMPLENR, 160},
   {300*OVERSAMPLENR, 150},
   {351*OVERSAMPLENR, 140},
   {470*OVERSAMPLENR, 120},
   {504*OVERSAMPLENR, 115},
   {538*OVERSAMPLENR, 110},
   {552*OVERSAMPLENR, 108},
   {566*OVERSAMPLENR, 106},
   {580*OVERSAMPLENR, 104},
   {594*OVERSAMPLENR, 102},
   {608*OVERSAMPLENR, 100},
   {622*OVERSAMPLENR, 98},
   {636*OVERSAMPLENR, 96},
   {650*OVERSAMPLENR, 94},
   {664*OVERSAMPLENR, 92},
   {678*OVERSAMPLENR, 90},
   {712*OVERSAMPLENR, 85},
   {745*OVERSAMPLENR, 80},
   {758*OVERSAMPLENR, 78},
   {770*OVERSAMPLENR, 76},
   {783*OVERSAMPLENR, 74},
   {795*OVERSAMPLENR, 72},
   {806*OVERSAMPLENR, 70},
   {818*OVERSAMPLENR, 68},
   {829*OVERSAMPLENR, 66},
   {840*OVERSAMPLENR, 64},
   {850*OVERSAMPLENR, 62},
   {860*OVERSAMPLENR, 60},
   {870*OVERSAMPLENR, 58},
   {879*OVERSAMPLENR, 56},
   {888*OVERSAMPLENR, 54},
   {897*OVERSAMPLENR, 52},
   {905*OVERSAMPLENR, 50},
   {924*OVERSAMPLENR, 45},
   {940*OVERSAMPLENR, 40},
   {955*OVERSAMPLENR, 35},
   {967*OVERSAMPLENR, 30},
   {970*OVERSAMPLENR, 29},
   {972*OVERSAMPLENR, 28},
   {974*OVERSAMPLENR, 27},
   {976*OVERSAMPLENR, 26},
   {978*OVERSAMPLENR, 25},
   {980*OVERSAMPLENR, 24},
   {982*OVERSAMPLENR, 23},
   {984*OVERSAMPLENR, 22},
   {985*OVERSAMPLENR, 21},
   {987*OVERSAMPLENR, 20},
   {995*OVERSAMPLENR, 15},
   {1001*OVERSAMPLENR, 10},
   {1006*OVERSAMPLENR, 5},
   {1010*OVERSAMPLENR, 0},
};
#endif

#if (THERMISTORHEATER_0 == 8) || (THERMISTORHEATER_1 == 8) || (THERMISTORHEATER_2 == 8) || (THERMISTORBED == 8)
// 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
const short temptable_8[][2] PROGMEM = {
   {1*OVERSAMPLENR, 704},
   {54*OVERSAMPLENR, 216},
   {107*OVERSAMPLENR, 175},
   {160*OVERSAMPLENR, 152},
   {213*OVERSAMPLENR, 137},
   {266*OVERSAMPLENR, 125},
   {319*OVERSAMPLENR, 115},
   {372*OVERSAMPLENR, 106},
   {425*OVERSAMPLENR, 99},
   {478*OVERSAMPLENR, 91},
   {531*OVERSAMPLENR, 85},
   {584*OVERSAMPLENR, 78},
   {637*OVERSAMPLENR, 71},
   {690*OVERSAMPLENR, 65},
   {743*OVERSAMPLENR, 58},
   {796*OVERSAMPLENR, 50},
   {849*OVERSAMPLENR, 42},
   {902*OVERSAMPLENR, 31},
   {955*OVERSAMPLENR, 17},
   {1008*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 9) || (THERMISTORHEATER_1 == 9) || (THERMISTORHEATER_2 == 9) || (THERMISTORBED == 9)
// 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
const short temptable_9[][2] PROGMEM = {
	{1*OVERSAMPLENR, 936},
	{36*OVERSAMPLENR, 300},
	{71*OVERSAMPLENR, 246},
	{106*OVERSAMPLENR, 218},
	{141*OVERSAMPLENR, 199},
	{176*OVERSAMPLENR, 185},
	{211*OVERSAMPLENR, 173},
	{246*OVERSAMPLENR, 163},
	{281*OVERSAMPLENR, 155},
	{316*OVERSAMPLENR, 147},
	{351*OVERSAMPLENR, 140},
	{386*OVERSAMPLENR, 134},
	{421*OVERSAMPLENR, 128},
	{456*OVERSAMPLENR, 122},
	{491*OVERSAMPLENR, 117},
	{526*OVERSAMPLENR, 112},
	{561*OVERSAMPLENR, 107},
	{596*OVERSAMPLENR, 102},
	{631*OVERSAMPLENR, 97},
	{666*OVERSAMPLENR, 92},
	{701*OVERSAMPLENR, 87},
	{736*OVERSAMPLENR, 81},
	{771*OVERSAMPLENR, 76},
	{806*OVERSAMPLENR, 70},
	{841*OVERSAMPLENR, 63},
	{876*OVERSAMPLENR, 56},
	{911*OVERSAMPLENR, 48},
	{946*OVERSAMPLENR, 38},
	{981*OVERSAMPLENR, 23},
	{1005*OVERSAMPLENR, 5},
	{1016*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 10) || (THERMISTORHEATER_1 == 10) || (THERMISTORHEATER_2 == 10) || (THERMISTORBED == 10)
// 100k RS thermistor 198-961 (4.7k pullup)
const short temptable_10[][2] PROGMEM = {
   {1*OVERSAMPLENR, 929},
   {36*OVERSAMPLENR, 299},
   {71*OVERSAMPLENR, 246},
   {106*OVERSAMPLENR, 217},
   {141*OVERSAMPLENR, 198},
   {176*OVERSAMPLENR, 184},
   {211*OVERSAMPLENR, 173},
   {246*OVERSAMPLENR, 163},
   {281*OVERSAMPLENR, 154},
   {316*OVERSAMPLENR, 147},
   {351*OVERSAMPLENR, 140},
   {386*OVERSAMPLENR, 134},
   {421*OVERSAMPLENR, 128},
   {456*OVERSAMPLENR, 122},
   {491*OVERSAMPLENR, 117},
   {526*OVERSAMPLENR, 112},
   {561*OVERSAMPLENR, 107},
   {596*OVERSAMPLENR, 102},
   {631*OVERSAMPLENR, 97},
   {666*OVERSAMPLENR, 91},
   {701*OVERSAMPLENR, 86},
   {736*OVERSAMPLENR, 81},
   {771*OVERSAMPLENR, 76},
   {806*OVERSAMPLENR, 70},
   {841*OVERSAMPLENR, 63},
   {876*OVERSAMPLENR, 56},
   {911*OVERSAMPLENR, 48},
   {946*OVERSAMPLENR, 38},
   {981*OVERSAMPLENR, 23},
   {1005*OVERSAMPLENR, 5},
   {1016*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 11) || (THERMISTORHEATER_1 == 11) || (THERMISTORHEATER_2 == 11) || (THERMISTORBED == 11) 
// QU-BD silicone bed QWG-104F-3950 thermistor

const short temptable_11[][2] PROGMEM = {
         {1*OVERSAMPLENR,        938},
         {31*OVERSAMPLENR,       314},
         {41*OVERSAMPLENR,       290},
         {51*OVERSAMPLENR,       272},
         {61*OVERSAMPLENR,       258},
         {71*OVERSAMPLENR,       247},
         {81*OVERSAMPLENR,       237},
         {91*OVERSAMPLENR,       229},
         {101*OVERSAMPLENR,      221},
         {111*OVERSAMPLENR,      215},
         {121*OVERSAMPLENR,      209},
         {131*OVERSAMPLENR,      204},
         {141*OVERSAMPLENR,      199},
         {151*OVERSAMPLENR,      195},
         {161*OVERSAMPLENR,      190},
         {171*OVERSAMPLENR,      187},
         {181*OVERSAMPLENR,      183},
         {191*OVERSAMPLENR,      179},
         {201*OVERSAMPLENR,      176},
         {221*OVERSAMPLENR,      170},
         {241*OVERSAMPLENR,      165},
         {261*OVERSAMPLENR,      160},
         {281*OVERSAMPLENR,      155},
         {301*OVERSAMPLENR,      150},
         {331*OVERSAMPLENR,      144},
         {361*OVERSAMPLENR,      139},
         {391*OVERSAMPLENR,      133},
         {421*OVERSAMPLENR,      128},
         {451*OVERSAMPLENR,      123},
         {491*OVERSAMPLENR,      117},
         {531*OVERSAMPLENR,      111},
         {571*OVERSAMPLENR,      105},
         {611*OVERSAMPLENR,      100},
         {641*OVERSAMPLENR,      95},
         {681*OVERSAMPLENR,      90},
         {711*OVERSAMPLENR,      85},
         {751*OVERSAMPLENR,      79},
         {791*OVERSAMPLENR,      72},
         {811*OVERSAMPLENR,      69},
         {831*OVERSAMPLENR,      65},
         {871*OVERSAMPLENR,      57},
         {881*OVERSAMPLENR,      55},
         {901*OVERSAMPLENR,      51},
         {921*OVERSAMPLENR,      45},
         {941*OVERSAMPLENR,      39},
         {971*OVERSAMPLENR,      28},
         {981*OVERSAMPLENR,      23},
         {991*OVERSAMPLENR,      17},
         {1001*OVERSAMPLENR,     9},
         {1021*OVERSAMPLENR,     -27}
};
#endif

#if (THERMISTORHEATER_0 == 13) || (THERMISTORHEATER_1 == 13) || (THERMISTORHEATER_2 == 13) || (THERMISTORBED == 13)
// Hisens thermistor B25/50 =3950 +/-1%

const short temptable_13[][2] PROGMEM = {
 {	22.5*OVERSAMPLENR,	300	},
{	24.125*OVERSAMPLENR,	295	},
{	25.875*OVERSAMPLENR,	290	},
{	27.8125*OVERSAMPLENR,	285	},
{	29.9375*OVERSAMPLENR,	280	},
{	32.25*OVERSAMPLENR,	275	},
{	34.8125*OVERSAMPLENR,	270	},
{	37.625*OVERSAMPLENR,	265	},
{	40.6875*OVERSAMPLENR,	260	},
{	44.0625*OVERSAMPLENR,	255	},
{	47.75*OVERSAMPLENR,	250	},
{	51.8125*OVERSAMPLENR,	245	},
{	56.3125*OVERSAMPLENR,	240	},
{	61.25*OVERSAMPLENR,	235	},
{	66.75*OVERSAMPLENR,	230	},
{	72.8125*OVERSAMPLENR,	225	},
{	79.5*OVERSAMPLENR,	220	},
{	87*OVERSAMPLENR,	215	},
{	95.3125*OVERSAMPLENR,	210	},
{	104.1875*OVERSAMPLENR,	205	},
{	112.75*OVERSAMPLENR,	200	},
{	123.125*OVERSAMPLENR,	195	},
{	135.75*OVERSAMPLENR,	190	},
{	148.3125*OVERSAMPLENR,	185	},
{	163.8125*OVERSAMPLENR,	180	},
{	179*OVERSAMPLENR,	175	},
{	211.125*OVERSAMPLENR,	170	},
{	216.125*OVERSAMPLENR,	165	},
{	236.5625*OVERSAMPLENR,	160	},
{	258.5*OVERSAMPLENR,	155	},
{	279.875*OVERSAMPLENR,	150	},
{	305.375*OVERSAMPLENR,	145	},
{	333.25*OVERSAMPLENR,	140	},
{	362.5625*OVERSAMPLENR,	135	},
{	393.6875*OVERSAMPLENR,	130	},
{	425*OVERSAMPLENR,	125	},
{	460.625*OVERSAMPLENR,	120	},
{	495.1875*OVERSAMPLENR,	115	},
{	530.875*OVERSAMPLENR,	110	},
{	567.25*OVERSAMPLENR,	105	},
{	601.625*OVERSAMPLENR,	100	},
{	637.875*OVERSAMPLENR,	95	},
{	674.5625*OVERSAMPLENR,	90	},
{	710*OVERSAMPLENR,	85	},
{	744.125*OVERSAMPLENR,	80	},
{	775.9375*OVERSAMPLENR,	75	},
{	806.875*OVERSAMPLENR,	70	},
{	835.1875*OVERSAMPLENR,	65	},
{	861.125*OVERSAMPLENR,	60	},
{	884.375*OVERSAMPLENR,	55	},
{	904.5625*OVERSAMPLENR,	50	},
{	923.8125*OVERSAMPLENR,	45	},
{	940.375*OVERSAMPLENR,	40	},
{	954.625*OVERSAMPLENR,	35	},
{	966.875*OVERSAMPLENR,	30	},
{	977.0625*OVERSAMPLENR,	25	},
{	986*OVERSAMPLENR,	20	},
{	993.375*OVERSAMPLENR,	15	},
{	999.5*OVERSAMPLENR,	10	},
{	1004.5*OVERSAMPLENR,	5	},
{	1008.5*OVERSAMPLENR,	0	}

 };
#endif

#if (THERMISTORHEATER_0 == 20) || (THERMISTORHEATER_1 == 20) || (THERMISTORHEATER_2 == 20) || (THERMISTORBED == 20) // PT100 with INA826 amp on Ultimaker v2.0 electronics
/* The PT100 in the Ultimaker v2.0 electronics has a high sample value for a high temperature.
This does not match the normal thermistor behaviour so we need to set the following defines */
#if (THERMISTORHEATER_0 == 20)
# define HEATER_0_RAW_HI_TEMP 16383
# define HEATER_0_RAW_LO_TEMP 0
#endif
#if (THERMISTORHEATER_1 == 20)
# define HEATER_1_RAW_HI_TEMP 16383
# define HEATER_1_RAW_LO_TEMP 0
#endif
#if (THERMISTORHEATER_2 == 20)
# define HEATER_2_RAW_HI_TEMP 16383
# define HEATER_2_RAW_LO_TEMP 0
#endif
#if (THERMISTORBED == 20)
# define HEATER_BED_RAW_HI_TEMP 16383
# define HEATER_BED_RAW_LO_TEMP 0
#endif
const short temptable_20[][2] PROGMEM = {
{         0*OVERSAMPLENR ,       0     },
{       227*OVERSAMPLENR ,       1     },
{       236*OVERSAMPLENR ,       10     },
{       245*OVERSAMPLENR ,       20     },
{       253*OVERSAMPLENR ,       30     },
{       262*OVERSAMPLENR ,       40     },
{       270*OVERSAMPLENR ,       50     },
{       279*OVERSAMPLENR ,       60     },
{       287*OVERSAMPLENR ,       70     },
{       295*OVERSAMPLENR ,       80     },
{       304*OVERSAMPLENR ,       90     },
{       312*OVERSAMPLENR ,       100     },
{       320*OVERSAMPLENR ,       110     },
{       329*OVERSAMPLENR ,       120     },
{       337*OVERSAMPLENR ,       130     },
{       345*OVERSAMPLENR ,       140     },
{       353*OVERSAMPLENR ,       150     },
{       361*OVERSAMPLENR ,       160     },
{       369*OVERSAMPLENR ,       170     },
{       377*OVERSAMPLENR ,       180     },
{       385*OVERSAMPLENR ,       190     },
{       393*OVERSAMPLENR ,       200     },
{       401*OVERSAMPLENR ,       210     },
{       409*OVERSAMPLENR ,       220     },
{       417*OVERSAMPLENR ,       230     },
{       424*OVERSAMPLENR ,       240     },
{       432*OVERSAMPLENR ,       250     },
{       440*OVERSAMPLENR ,       260     },
{       447*OVERSAMPLENR ,       270     },
{       455*OVERSAMPLENR ,       280     },
{       463*OVERSAMPLENR ,       290     },
{       470*OVERSAMPLENR ,       300     },
{       478*OVERSAMPLENR ,       310     },
{       485*OVERSAMPLENR ,       320     },
{       493*OVERSAMPLENR ,       330     },
{       500*OVERSAMPLENR ,       340     },
{       507*OVERSAMPLENR ,       350     },
{       515*OVERSAMPLENR ,       360     },
{       522*OVERSAMPLENR ,       370     },
{       529*OVERSAMPLENR ,       380     },
{       537*OVERSAMPLENR ,       390     },
{       544*OVERSAMPLENR ,       400     },
{       614*OVERSAMPLENR ,       500     },
{       681*OVERSAMPLENR ,       600     },
{       744*OVERSAMPLENR ,       700     },
{       805*OVERSAMPLENR ,       800     },
{       862*OVERSAMPLENR ,       900     },
{       917*OVERSAMPLENR ,       1000     },
{       968*OVERSAMPLENR ,       1100     }
};
#endif

#if (THERMISTORHEATER_0 == 30) || (THERMISTORHEATER_1 == 30) || (THERMISTORHEATER_2 == 30) || (THERMISTORBED == 30) // Epcos B57560G104F 100K on JHeadMKV
const short temptable_30[][2] PROGMEM = {
    {     344,       300     }, // r=   101 adc=21.47
    {     369,       295     }, // r=   108 adc=23.08
    {     397,       290     }, // r=   117 adc=24.83
    {     428,       285     }, // r=   126 adc=26.75
    {     461,       280     }, // r=   136 adc=28.84
    {     498,       275     }, // r=   147 adc=31.12
    {     538,       270     }, // r=   160 adc=33.63
    {     582,       265     }, // r=   173 adc=36.37
    {     630,       260     }, // r=   188 adc=39.38
    {     683,       255     }, // r=   205 adc=42.69
    {     741,       250     }, // r=   223 adc=46.32
    {     805,       245     }, // r=   243 adc=50.31
    {     875,       240     }, // r=   266 adc=54.71
    {     953,       235     }, // r=   290 adc=59.55
    {    1038,       230     }, // r=   318 adc=64.88
    {    1132,       225     }, // r=   349 adc=70.77
    {    1236,       220     }, // r=   384 adc=77.26
    {    1351,       215     }, // r=   423 adc=84.42
    {    1477,       210     }, // r=   466 adc=92.32
    {    1617,       205     }, // r=   515 adc=101.05
    {    1771,       200     }, // r=   570 adc=110.68
    {    1941,       195     }, // r=   632 adc=121.30
    {    2128,       190     }, // r=   702 adc=133.01
    {    2335,       185     }, // r=   782 adc=145.91
    {    2562,       180     }, // r=   872 adc=160.11
    {    2811,       175     }, // r=   975 adc=175.70
    {    3085,       170     }, // r=  1092 adc=192.81
    {    3384,       165     }, // r=  1225 adc=211.53
    {    3711,       160     }, // r=  1378 adc=231.95
    {    4066,       155     }, // r=  1554 adc=254.15
    {    4451,       150     }, // r=  1756 adc=278.21
    {    4866,       145     }, // r=  1989 adc=304.15
    {    5312,       140     }, // r=  2258 adc=331.99
    {    5787,       135     }, // r=  2570 adc=361.68
    {    6290,       130     }, // r=  2934 adc=393.15
    {    6820,       125     }, // r=  3357 adc=426.25
    {    7373,       120     }, // r=  3852 adc=460.80
    {    7945,       115     }, // r=  4433 adc=496.54
    {    8531,       110     }, // r=  5116 adc=533.16
    {    9125,       105     }, // r=  5921 adc=570.31
    {    9722,       100     }, // r=  6875 adc=607.60
    {   10314,        95     }, // r=  8007 adc=644.61
    {   10895,        90     }, // r=  9356 adc=680.92
    {   11458,        85     }, // r= 10968 adc=716.13
    {   11998,        80     }, // r= 12903 adc=749.86
    {   12509,        75     }, // r= 15234 adc=781.80
    {   12987,        70     }, // r= 18051 adc=811.66
    {   13428,        65     }, // r= 21469 adc=839.27
    {   13832,        60     }, // r= 25635 adc=864.50
    {   14197,        55     }, // r= 30732 adc=887.30
    {   14523,        50     }, // r= 36995 adc=907.68
    {   14811,        45     }, // r= 44725 adc=925.72
    {   15064,        40     }, // r= 54309 adc=941.52
    {   15284,        35     }, // r= 66249 adc=955.23
    {   15472,        30     }, // r= 81195 adc=967.02
    {   15633,        25     }, // r=100000 adc=977.08
    {   15769,        20     }, // r=123783 adc=985.58
    {   15883,        15     }, // r=154025 adc=992.71
    {   15978,        10     }, // r=192694 adc=998.64
    {   16057,         5     }, // r=242427 adc=1003.54
    {   16121,         0     }, // r=306773 adc=1007.56
};
#endif

#if (THERMISTORHEATER_0 == 31) || (THERMISTORHEATER_1 == 31) || (THERMISTORHEATER_2 == 31) || (THERMISTORBED == 31) // Epcos B57861S 104F 40 100K on Mendel90 bed, max temp 115
const short temptable_31[][2] PROGMEM = {
    {     982,       200     }, // r=   300 adc=61.38
    {    1091,       195     }, // r=   336 adc=68.19
    {    1214,       190     }, // r=   376 adc=75.84
    {    1351,       185     }, // r=   423 adc=84.46
    {    1506,       180     }, // r=   476 adc=94.15
    {    1681,       175     }, // r=   538 adc=105.06
    {    1877,       170     }, // r=   609 adc=117.34
    {    2098,       165     }, // r=   691 adc=131.13
    {    2346,       160     }, // r=   786 adc=146.61
    {    2623,       155     }, // r=   897 adc=163.95
    {    2933,       150     }, // r=  1026 adc=183.33
    {    3279,       145     }, // r=  1177 adc=204.93
    {    3662,       140     }, // r=  1355 adc=228.90
    {    4086,       135     }, // r=  1564 adc=255.39
    {    4552,       130     }, // r=  1810 adc=284.48
    {    5060,       125     }, // r=  2103 adc=316.24
    {    5610,       120     }, // r=  2451 adc=350.62
    {    6200,       115     }, // r=  2866 adc=387.52
    {    6828,       110     }, // r=  3364 adc=426.72
    {    7486,       105     }, // r=  3962 adc=467.90
    {    8170,       100     }, // r=  4684 adc=510.63
    {    8870,        95     }, // r=  5559 adc=554.35
    {    9575,        90     }, // r=  6625 adc=598.45
    {   10276,        85     }, // r=  7928 adc=642.25
    {   10961,        80     }, // r=  9528 adc=685.06
    {   11620,        75     }, // r= 11501 adc=726.23
    {   12242,        70     }, // r= 13947 adc=765.15
    {   12822,        65     }, // r= 16994 adc=801.36
    {   13352,        60     }, // r= 20807 adc=834.50
    {   13830,        55     }, // r= 25606 adc=864.35
    {   14253,        50     }, // r= 31678 adc=890.83
    {   14624,        45     }, // r= 39403 adc=913.98
    {   14943,        40     }, // r= 49289 adc=933.94
    {   15215,        35     }, // r= 62016 adc=950.93
    {   15443,        30     }, // r= 78504 adc=965.21
    {   15633,        25     }, // r=100000 adc=977.08
    {   15789,        20     }, // r=128214 adc=986.83
    {   15916,        15     }, // r=165504 adc=994.75
    {   16018,        10     }, // r=215143 adc=1001.13
    {   16099,         5     }, // r=281716 adc=1006.21
    {   16164,         0     }, // r=371694 adc=1010.23
};
#endif

#if (THERMISTORHEATER_0 == 51) || (THERMISTORHEATER_1 == 51) || (THERMISTORHEATER_2 == 51) || (THERMISTORBED == 51)
// 100k EPCOS (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee.
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: Twice the resolution and better linearity from 150C to 200C
const short temptable_51[][2] PROGMEM = {
   {1*OVERSAMPLENR, 350},
   {190*OVERSAMPLENR, 250}, //top rating 250C
   {203*OVERSAMPLENR, 245},
   {217*OVERSAMPLENR, 240},
   {232*OVERSAMPLENR, 235},
   {248*OVERSAMPLENR, 230},
   {265*OVERSAMPLENR, 225},
   {283*OVERSAMPLENR, 220},
   {302*OVERSAMPLENR, 215},
   {322*OVERSAMPLENR, 210},
   {344*OVERSAMPLENR, 205},
   {366*OVERSAMPLENR, 200},
   {390*OVERSAMPLENR, 195},
   {415*OVERSAMPLENR, 190},
   {440*OVERSAMPLENR, 185},
   {467*OVERSAMPLENR, 180},
   {494*OVERSAMPLENR, 175},
   {522*OVERSAMPLENR, 170},
   {551*OVERSAMPLENR, 165},
   {580*OVERSAMPLENR, 160},
   {609*OVERSAMPLENR, 155},
   {638*OVERSAMPLENR, 150},
   {666*OVERSAMPLENR, 145},
   {695*OVERSAMPLENR, 140},
   {722*OVERSAMPLENR, 135},
   {749*OVERSAMPLENR, 130},
   {775*OVERSAMPLENR, 125},
   {800*OVERSAMPLENR, 120},
   {823*OVERSAMPLENR, 115},
   {845*OVERSAMPLENR, 110},
   {865*OVERSAMPLENR, 105},
   {884*OVERSAMPLENR, 100},
   {901*OVERSAMPLENR, 95},
   {917*OVERSAMPLENR, 90},
   {932*OVERSAMPLENR, 85},
   {944*OVERSAMPLENR, 80},
   {956*OVERSAMPLENR, 75},
   {966*OVERSAMPLENR, 70},
   {975*OVERSAMPLENR, 65},
   {982*OVERSAMPLENR, 60},
   {989*OVERSAMPLENR, 55},
   {995*OVERSAMPLENR, 50},
   {1000*OVERSAMPLENR, 45},
   {1004*OVERSAMPLENR, 40},
   {1007*OVERSAMPLENR, 35},
   {1010*OVERSAMPLENR, 30},
   {1013*OVERSAMPLENR, 25},
   {1015*OVERSAMPLENR, 20},
   {1017*OVERSAMPLENR, 15},
   {1018*OVERSAMPLENR, 10},
   {1019*OVERSAMPLENR, 5},
   {1020*OVERSAMPLENR, 0},
   {1021*OVERSAMPLENR, -5}
};
#endif

#if (THERMISTORHEATER_0 == 52) || (THERMISTORHEATER_1 == 52) || (THERMISTORHEATER_2 == 52) || (THERMISTORBED == 52) 
// 200k ATC Semitec 204GT-2 (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_52[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {125*OVERSAMPLENR, 300}, //top rating 300C
   {142*OVERSAMPLENR, 290},
   {162*OVERSAMPLENR, 280},
   {185*OVERSAMPLENR, 270},
   {211*OVERSAMPLENR, 260},
   {240*OVERSAMPLENR, 250},
   {274*OVERSAMPLENR, 240},
   {312*OVERSAMPLENR, 230},
   {355*OVERSAMPLENR, 220},
   {401*OVERSAMPLENR, 210},
   {452*OVERSAMPLENR, 200},
   {506*OVERSAMPLENR, 190},
   {563*OVERSAMPLENR, 180},
   {620*OVERSAMPLENR, 170},
   {677*OVERSAMPLENR, 160},
   {732*OVERSAMPLENR, 150},
   {783*OVERSAMPLENR, 140},
   {830*OVERSAMPLENR, 130},
   {871*OVERSAMPLENR, 120},
   {906*OVERSAMPLENR, 110},
   {935*OVERSAMPLENR, 100},
   {958*OVERSAMPLENR, 90},
   {976*OVERSAMPLENR, 80},
   {990*OVERSAMPLENR, 70},
   {1000*OVERSAMPLENR, 60},
   {1008*OVERSAMPLENR, 50},
   {1013*OVERSAMPLENR, 40},
   {1017*OVERSAMPLENR, 30},
   {1019*OVERSAMPLENR, 20},
   {1021*OVERSAMPLENR, 10},
   {1022*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 55) || (THERMISTORHEATER_1 == 55) || (THERMISTORHEATER_2 == 55) || (THERMISTORBED == 55) 
// 100k ATC Semitec 104GT-2 (Used on ParCan) (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_55[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {76*OVERSAMPLENR, 300},
   {87*OVERSAMPLENR, 290},
   {100*OVERSAMPLENR, 280},
   {114*OVERSAMPLENR, 270},
   {131*OVERSAMPLENR, 260},
   {152*OVERSAMPLENR, 250},
   {175*OVERSAMPLENR, 240},
   {202*OVERSAMPLENR, 230},
   {234*OVERSAMPLENR, 220},
   {271*OVERSAMPLENR, 210},
   {312*OVERSAMPLENR, 200},
   {359*OVERSAMPLENR, 190},
   {411*OVERSAMPLENR, 180},
   {467*OVERSAMPLENR, 170},
   {527*OVERSAMPLENR, 160},
   {590*OVERSAMPLENR, 150},
   {652*OVERSAMPLENR, 140},
   {713*OVERSAMPLENR, 130},
   {770*OVERSAMPLENR, 120},
   {822*OVERSAMPLENR, 110},
   {867*OVERSAMPLENR, 100},
   {905*OVERSAMPLENR, 90},
   {936*OVERSAMPLENR, 80},
   {961*OVERSAMPLENR, 70},
   {979*OVERSAMPLENR, 60},
   {993*OVERSAMPLENR, 50},
   {1003*OVERSAMPLENR, 40},
   {1010*OVERSAMPLENR, 30},
   {1015*OVERSAMPLENR, 20},
   {1018*OVERSAMPLENR, 10},
   {1020*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 60) || (THERMISTORHEATER_1 == 60) || (THERMISTORHEATER_2 == 60) || (THERMISTORBED == 60) // Maker's Tool Works Kapton Bed Thermister
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=3950 
// r0: 100000
// t0: 25
// r1: 0 (parallel with rTherm)
// r2: 4700 (series with rTherm)
// beta: 3950
// min adc: 1 at 0.0048828125 V
// max adc: 1023 at 4.9951171875 V
const short temptable_60[][2] PROGMEM = {
   {51*OVERSAMPLENR, 272},
   {61*OVERSAMPLENR, 258},
   {71*OVERSAMPLENR, 247},
   {81*OVERSAMPLENR, 237},
   {91*OVERSAMPLENR, 229},
   {101*OVERSAMPLENR, 221},
   {131*OVERSAMPLENR, 204},
   {161*OVERSAMPLENR, 190},
   {191*OVERSAMPLENR, 179},
   {231*OVERSAMPLENR, 167},
   {271*OVERSAMPLENR, 157},
   {311*OVERSAMPLENR, 148},
   {351*OVERSAMPLENR, 140},
   {381*OVERSAMPLENR, 135},
   {411*OVERSAMPLENR, 130},
   {441*OVERSAMPLENR, 125},
   {451*OVERSAMPLENR, 123},
   {461*OVERSAMPLENR, 122},
   {471*OVERSAMPLENR, 120},
   {481*OVERSAMPLENR, 119},
   {491*OVERSAMPLENR, 117},
   {501*OVERSAMPLENR, 116},
   {511*OVERSAMPLENR, 114},
   {521*OVERSAMPLENR, 113},
   {531*OVERSAMPLENR, 111},
   {541*OVERSAMPLENR, 110},
   {551*OVERSAMPLENR, 108},
   {561*OVERSAMPLENR, 107},
   {571*OVERSAMPLENR, 105},
   {581*OVERSAMPLENR, 104},
   {591*OVERSAMPLENR, 102},
   {601*OVERSAMPLENR, 101},
   {611*OVERSAMPLENR, 100},
   {621*OVERSAMPLENR, 98},
   {631*OVERSAMPLENR, 97},
   {641*OVERSAMPLENR, 95},
   {651*OVERSAMPLENR, 94},
   {661*OVERSAMPLENR, 92},
   {671*OVERSAMPLENR, 91},
   {681*OVERSAMPLENR, 90},
   {691*OVERSAMPLENR, 88},
   {701*OVERSAMPLENR, 87},
   {711*OVERSAMPLENR, 85},
   {721*OVERSAMPLENR, 84},
   {731*OVERSAMPLENR, 82},
   {741*OVERSAMPLENR, 81},
   {751*OVERSAMPLENR, 79},
   {761*OVERSAMPLENR, 77},
   {771*OVERSAMPLENR, 76},
   {781*OVERSAMPLENR, 74},
   {791*OVERSAMPLENR, 72},
   {801*OVERSAMPLENR, 71},
   {811*OVERSAMPLENR, 69},
   {821*OVERSAMPLENR, 67},
   {831*OVERSAMPLENR, 65},
   {841*OVERSAMPLENR, 63},
   {851*OVERSAMPLENR, 62},
   {861*OVERSAMPLENR, 60},
   {871*OVERSAMPLENR, 57},
   {881*OVERSAMPLENR, 55},
   {891*OVERSAMPLENR, 53},
   {901*OVERSAMPLENR, 51},
   {911*OVERSAMPLENR, 48},
   {921*OVERSAMPLENR, 45},
   {931*OVERSAMPLENR, 42},
   {941*OVERSAMPLENR, 39},
   {951*OVERSAMPLENR, 36},
   {961*OVERSAMPLENR, 32},
   {981*OVERSAMPLENR, 23},
   {991*OVERSAMPLENR, 17},
   {1001*OVERSAMPLENR, 9},
   {1008*OVERSAMPLENR, 0},
};
#endif
#if (THERMISTORBED == 12) 
//100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup) (calibrated for Makibox hot bed)
const short temptable_12[][2] PROGMEM = {
   {35*OVERSAMPLENR, 180}, //top rating 180C
   {211*OVERSAMPLENR, 140},
   {233*OVERSAMPLENR, 135},
   {261*OVERSAMPLENR, 130},
   {290*OVERSAMPLENR, 125},
   {328*OVERSAMPLENR, 120},
   {362*OVERSAMPLENR, 115},
   {406*OVERSAMPLENR, 110},
   {446*OVERSAMPLENR, 105},
   {496*OVERSAMPLENR, 100},
   {539*OVERSAMPLENR, 95},
   {585*OVERSAMPLENR, 90},
   {629*OVERSAMPLENR, 85},
   {675*OVERSAMPLENR, 80},
   {718*OVERSAMPLENR, 75},
   {758*OVERSAMPLENR, 70},
   {793*OVERSAMPLENR, 65},
   {822*OVERSAMPLENR, 60},
   {841*OVERSAMPLENR, 55},
   {875*OVERSAMPLENR, 50},
   {899*OVERSAMPLENR, 45},
   {926*OVERSAMPLENR, 40},
   {946*OVERSAMPLENR, 35},
   {962*OVERSAMPLENR, 30},
   {977*OVERSAMPLENR, 25},
   {987*OVERSAMPLENR, 20},
   {995*OVERSAMPLENR, 15},
   {1001*OVERSAMPLENR, 10},
   {1010*OVERSAMPLENR, 0},
   {1023*OVERSAMPLENR, -40},
};
#endif

// Pt1000 and Pt100 handling
// 
// Rt=R0*(1+a*T+b*T*T) [for T>0]
// a=3.9083E-3, b=-5.775E-7

#define PtA 3.9083E-3
#define PtB -5.775E-7
#define PtRt(T,R0) ((R0)*(1.0+(PtA)*(T)+(PtB)*(T)*(T)))
#define PtAdVal(T,R0,Rup) (short)(1024/(Rup/PtRt(T,R0)+1))
#define PtLine(T,R0,Rup) { PtAdVal(T,R0,Rup)*OVERSAMPLENR, T },

#if (THERMISTORHEATER_0 == 110) || (THERMISTORHEATER_1 == 110) || (THERMISTORHEATER_2 == 110) || (THERMISTORBED == 110) // Pt100 with 1k0 pullup
const short temptable_110[][2] PROGMEM = {
// only few values are needed as the curve is very flat  
  PtLine(0,100,1000)
  PtLine(50,100,1000)
  PtLine(100,100,1000)
  PtLine(150,100,1000)
  PtLine(200,100,1000)
  PtLine(250,100,1000)
  PtLine(300,100,1000)
};
#endif
#if (THERMISTORHEATER_0 == 147) || (THERMISTORHEATER_1 == 147) || (THERMISTORHEATER_2 == 147) || (THERMISTORBED == 147) // Pt100 with 4k7 pullup
const short temptable_147[][2] PROGMEM = {
// only few values are needed as the curve is very flat  
  PtLine(0,100,4700)
  PtLine(50,100,4700)
  PtLine(100,100,4700)
  PtLine(150,100,4700)
  PtLine(200,100,4700)
  PtLine(250,100,4700)
  PtLine(300,100,4700)
};
#endif
#if (THERMISTORHEATER_0 == 1010) || (THERMISTORHEATER_1 == 1010) || (THERMISTORHEATER_2 == 1010) || (THERMISTORBED == 1010) // Pt1000 with 1k0 pullup
const short temptable_1010[][2] PROGMEM = {
  PtLine(0,1000,1000)
  PtLine(25,1000,1000)
  PtLine(50,1000,1000)
  PtLine(75,1000,1000)
  PtLine(100,1000,1000)
  PtLine(125,1000,1000)
  PtLine(150,1000,1000)
  PtLine(175,1000,1000)
  PtLine(200,1000,1000)
  PtLine(225,1000,1000)
  PtLine(250,1000,1000)
  PtLine(275,1000,1000)
  PtLine(300,1000,1000)
};
#endif
#if (THERMISTORHEATER_0 == 1047) || (THERMISTORHEATER_1 == 1047) || (THERMISTORHEATER_2 == 1047) || (THERMISTORBED == 1047) // Pt1000 with 4k7 pullup
const short temptable_1047[][2] PROGMEM = {
// only few values are needed as the curve is very flat  
  PtLine(0,1000,4700)
  PtLine(50,1000,4700)
  PtLine(100,1000,4700)
  PtLine(150,1000,4700)
  PtLine(200,1000,4700)
  PtLine(250,1000,4700)
  PtLine(300,1000,4700)
};
#endif

#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

#ifdef THERMISTORHEATER_0
# define HEATER_0_TEMPTABLE TT_NAME(THERMISTORHEATER_0)
# define HEATER_0_TEMPTABLE_LEN (sizeof(HEATER_0_TEMPTABLE)/sizeof(*HEATER_0_TEMPTABLE))
#else
# ifdef HEATER_0_USES_THERMISTOR
#  error No heater 0 thermistor table specified
# else  // HEATER_0_USES_THERMISTOR
#  define HEATER_0_TEMPTABLE NULL
#  define HEATER_0_TEMPTABLE_LEN 0
# endif // HEATER_0_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_0_RAW_HI_TEMP
# ifdef HEATER_0_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_0_RAW_HI_TEMP 0
#  define HEATER_0_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_0_RAW_HI_TEMP 16383
#  define HEATER_0_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORHEATER_1
# define HEATER_1_TEMPTABLE TT_NAME(THERMISTORHEATER_1)
# define HEATER_1_TEMPTABLE_LEN (sizeof(HEATER_1_TEMPTABLE)/sizeof(*HEATER_1_TEMPTABLE))
#else
# ifdef HEATER_1_USES_THERMISTOR
#  error No heater 1 thermistor table specified
# else  // HEATER_1_USES_THERMISTOR
#  define HEATER_1_TEMPTABLE NULL
#  define HEATER_1_TEMPTABLE_LEN 0
# endif // HEATER_1_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_1_RAW_HI_TEMP
# ifdef HEATER_1_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_1_RAW_HI_TEMP 0
#  define HEATER_1_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_1_RAW_HI_TEMP 16383
#  define HEATER_1_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORHEATER_2
# define HEATER_2_TEMPTABLE TT_NAME(THERMISTORHEATER_2)
# define HEATER_2_TEMPTABLE_LEN (sizeof(HEATER_2_TEMPTABLE)/sizeof(*HEATER_2_TEMPTABLE))
#else
# ifdef HEATER_2_USES_THERMISTOR
#  error No heater 2 thermistor table specified
# else  // HEATER_2_USES_THERMISTOR
#  define HEATER_2_TEMPTABLE NULL
#  define HEATER_2_TEMPTABLE_LEN 0
# endif // HEATER_2_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_2_RAW_HI_TEMP
# ifdef HEATER_2_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_2_RAW_HI_TEMP 0
#  define HEATER_2_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_2_RAW_HI_TEMP 16383
#  define HEATER_2_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORBED
# define BEDTEMPTABLE TT_NAME(THERMISTORBED)
# define BEDTEMPTABLE_LEN (sizeof(BEDTEMPTABLE)/sizeof(*BEDTEMPTABLE))
#else
# ifdef BED_USES_THERMISTOR
#  error No bed thermistor table specified
# endif // BED_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_BED_RAW_HI_TEMP
# ifdef BED_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_BED_RAW_HI_TEMP 0
#  define HEATER_BED_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_BED_RAW_HI_TEMP 16383
#  define HEATER_BED_RAW_LO_TEMP 0
# endif
#endif

#endif //THERMISTORTABLES_H_
