/* Default settings, which can be overriden by running the corresponding
 * command line arguments. */

static int topbar = 1; /* -b option; if 0, dmenu appears at bottom. */

/* -fn option overrides fonts[0]; default X11 font or font set. */
static const char *fonts[] = {
    "monospace:size=10"
};

static const char *prompt = NULL; /* -p option; prompt to the left of input field. */

/* Color schemes. [Scheme] = { fg, bg }. */
static const char *colors[SchemeLast][2] = {
    [SchemeNorm] = { "#bbbbbb", "#000000" },
	[SchemeSel]  = { "#0f101a", "#f1ffff" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines. */
static unsigned int lines = 0;

/* -h option; minimum height of a menu line. */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/* Characters not considered part of a word while deleting words;
 * for example: " /?\"&[]" */
static const char worddelimiters[] = " ";
