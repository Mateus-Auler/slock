/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#222222",   /* after initialization */
	[INPUT] =  "#141A58",   /* during input */
	[FAILED] = "#773333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char * message = "I'm locked!";

/* text color */
static const char * text_color = "#AAAAAA";

/* text size (must be a valid size) */
static const char * font_name = "-adobe-helvetica-medium-r-normal--34-240-100-100-p-176-iso10646-1";
