#ifndef theme
#define theme

/*
 * appearance
 *
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */
static char *font = "Noto Sans Mono:pixelsize=14.25";
static char *sparefonts[] = {
    "FontAwesome:style=Regular",
    "file\\-icons:style=icons",
    "all\\-the\\-icons:style=Regular",
    "github\\-octicons:style=Regular",
    "Weather Icons:style=Regular",
    "Material Icons:style=Regular:size=13",
    "Symbola:style=Regular",
};

static int borderpx = 30;

/* an-old-hope colors (first 16 used by escape sequences) */
static const char *colorname[] = {
	"black",   /* black */
	"#EB3D54", /* red */
	"#78BD65", /* green */
	"#EF7C2A", /* orange */
	"#4FB4D8", /* blue */
	"#BA78AB", /* magenta */
	"#67E4C5", /* cyan */
	"#45474F", /* grey */

	"#848794", /* bright grey */
	"#f43434", /* bright red */
	"#5bc85b", /* bright green */
	"#EF7C2A", /* bright orange */
	"#5689f0", /* bright blue */
	"#c270b0", /* bright magenta */
	"#19e6b3", /* bright cyan */
	"white",   /* bright white */

	/* more colors can be added after 255 to use with DefaultXX */
	[256] = "#CBCDD2", // foreground
	[257] = "#1C1D21", // background
    [258] = "#4FB4D8", // cursor

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

/* bg opacity */
float alpha = 0.8;

#endif
