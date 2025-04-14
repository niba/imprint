#pragma on3

/*
 * Imprint Keyboard Layout
 *
 * First layout shows numeric indices for each key position
 * Second layout shows descriptive names for easier reference in keymaps
 *
 ╭─────────────────────────────────────────────────╮
 │  0   1   2   3   4   5 │  6   7   8   9  10  11 │ // Function/Ceiling row
 │ 12  13  14  15  16  17 │ 18  19  20  21  22  23 │ // Number row
 │ 24  25  26  27  28  29 │ 30  31  32  33  34  35 │ // Top row
 │ 36  37  38  39  40  41 │ 42  43  44  45  46  47 │ // Middle row
 │ 48  49  50  51  52  53 │ 54  55  56  57  58  59 │ // Bottom row
 │         60  61         │         62  63         │ // Inner thumb keys
 │─────────────────────────────────────────────────│
 │             64  65  66 │ 67  68  69             │ // Thumbs top row
 │             70  71  72 │ 73  74  75             │ // Thumbs bottom row
 ╰─────────────────────────────────────────────────╯
 
 ╭───────────────────────────────────────────────────╮
 │ LC5 LC4 LC3 LC2 LC1 LC0 │ RC0 RC1 RC2 RC3 RC4 RC5 │ // Function/Ceiling row
 │ LN5 LN4 LN3 LN2 LN1 LN0 │ RN0 RN1 RN2 RN3 RN4 RN5 │ // Number row
 │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │ // Top row
 │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │ // Middle row
 │ LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 │ // Bottom row
 │         LF1 LF0         │         RF0 RF1         │ // Additional keys
 │───────────────────────────────────────────────────│
 │          LH2 LH1 LH0    │ RH0 RH1 RH2             │ // Thumbs top row
 │          LHB2 LHB1 LHB0 │ RHB0 RHB1 RHB2          │ // Thumbs bottom row
 ╰───────────────────────────────────────────────────╯
 */

// Define a helper macro for layer definition
#define IMPRINT_LAYER3ame, start, mid, end, thumb_inner, thumb_outer) \
  ZMK_LAYER(name, start thumb_inner mid thumb_outer end)

/* Left side key positions */

// Left top row - "Ceiling" row
#define LC5  0
#define LC4  1
#define LC3  2
#define LC2  3
#define LC1  4
#define LC0  5

// Left second row - "Number" row
#define LN5  12
#define LN4  13
#define LN3  14
#define LN2  15
#define LN1  16
#define LN0  17

// Left third row - "Top" row
#define LT5  24
#define LT4  25
#define LT3  26
#define LT2  27
#define LT1  28
#define LT0  29

// Left fourth row - "Middle" row
#define LM5  36
#define LM4  37
#define LM3  38
#define LM2  39
#define LM1  40
#define LM0  41

// Left fifth row - "Bottom" row
#define LB5  48
#define LB4  49
#define LB3  50
#define LB2  51
#define LB1  52
#define LB0  53

/* Right side key positions */

// Right top row - "Ceiling" row
#define RC0  6
#define RC1  7
#define RC2  8
#define RC3  9
#define RC4  10
#define RC5  11

// Right second row - "Number" row
#define RN0  18
#define RN1  19
#define RN2  20
#define RN3  21
#define RN4  22
#define RN5  23

// Right third row - "Top" row
#define RT0  30
#define RT1  31
#define RT2  32
#define RT3  33
#define RT4  34
#define RT5  35

// Right fourth row - "Middle" row
#define RM0  42
#define RM1  43
#define RM2  44
#define RM3  45
#define RM4  46
#define RM5  47

// Right fifth row - "Bottom" row
#define RB0  54
#define RB1  55
#define RB2  56
#define RB3  57
#define RB4  58
#define RB5  59

/* Thumb key positions */

// Inner thumb keys
#define LF1  60
#define LF0  61
#define RF0  62
#define RF1  63

// Outer thumb keys - top row
#define LH2  64
#define LH1  65
#define LH0  66
#define RH0  67
#define RH1  68
#define RH2  69

// Outer thumb keys - bottom row
#define LHB2  70
#define LHB1  71
#define LHB0  72
#define RHB0  73
#define RHB1  74
#define RHB2  75

/* Optional: Unified Hand & Side naming scheme */

// Top row keys by hand and column
#define L_C5  0   // Left hand, ceiling row, column 5
#define L_C4  1
#define L_C3  2
#define L_C2  3
#define L_C1  4
#define L_C0  5
#define R_C0  6   // Right hand, ceiling row, column 0
#define R_C1  7
#define R_C2  8
#define R_C3  9
#define R_C4  10
#define R_C5  11
