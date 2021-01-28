#ifndef theme
#define theme

/*
 * appearance
 *
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */
static char *font = "Meslo LG M DZ:style=Regular:pixelsize=13";
static char *sparefonts[] = {
    // Decent icons with comprehensive coverage.
    "Symbols Nerd Font:size=12",
    "devicons:style=Regular",
    // Font families from emacs [[https://github.com/domtronn/all-the-icons.el][all-the-icons]].
    "FontAwesome:style=Regular",
    "file\\-icons:style=icons",
    "all\\-the\\-icons:style=Regular",
    "github\\-octicons:style=Regular",
    "Weather Icons:style=Regular",
    "Material Icons:style=Regular:size=13",
    // Fonts that cover everything in existence.
    // God help you if you end up needing these.
    "Symbola:style=Regular",
    "Unifont:style=Medium:size=13",
};

static int borderpx = 15;

/* an-old-hope colors (first 16 used by escape sequences) */
static const char *colorname[] = {
	"#3b3d45", /* black */
	"#eb3d54", /* red */
	"#78bd65", /* green */
	"#e5cd52", /* yellow */
	"#4fb4d8", /* blue */
	"#c46eb1", /* magenta */
	"#85e0c9", /* cyan */
	"white",   /* white */

	"#525560", /* bright grey */
	"#f1223e", /* bright red */
	"#6cc653", /* bright green */
	"#edcd2c", /* bright yellow */
	"#21acde", /* bright blue */
	"#ce64b7", /* bright magenta */
	"#63e9c7", /* bright cyan */
	"white",   /* bright white */

	/* more colors can be added after 255 to use with DefaultXX */
	[256] = "#cbcdd2", // foreground
	[257] = "#18181b", // background
	[258] = "#4fb4d8", // cursor

	"#cccccc",
	"#555555",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;

unsigned int selectionbg = 256;
unsigned int selectionfg = 256;

/*
 * configure style on selection, set to:
 *   - 0 to disable any selection modification
 *   - 1 to reverse the foreground and background
 *   - 2 apply selectionbg, but not selectionfg
 *   - x apply both selectionfg and selectionbg
 */
static int selectionstyle = 1;

/*
 * Default shape of cursor
 * 2: Block ("█")
 * 4: Underline ("_")
 * 6: Bar ("|")
 * 7: Snowman ("☃")
 */
static unsigned int cursorshape = 2;

/*
 * Default colour and shape of the mouse cursor
 */
static unsigned int mouseshape = XC_xterm;
static unsigned int mousefg = 7;
static unsigned int mousebg = 0;

/*
 * When defined the alpha level set by alpha/alpha_unfocused applies
 * to all cells, not just the default background cell.
 */
#define ALPHA_ALL

/* bg opacity */
float alpha = 1;
float alpha_unfocused = 0.96;

#endif
