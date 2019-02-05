// DO NOT EDIT THIS FILE.  IT IS AUTOMATICALLY GENERATED.
// generate-about 1.0.20170206.46e2c73a 2017-02-06T08:50:09Z

#ifndef libparc_About_h
#define libparc_About_h
/**
 * Embedded string containing information for the what(1) command.
 *
 */
extern const char *libparc_What;

/**
 * Return the name as a C string.
 *
 * @return The name as a C string.
 */
const char *libparcAbout_Name(void);

/**
 * Return the version as a C string.
 *
 * @return The version as a C string.
 */
const char *libparcAbout_Version(void);

/**
 * Return the About text as a C string.
 *
 * @return The About text as a C string.
 */
const char *libparcAbout_About(void);

/**
 * Return the minimum copyright notice as a C string.
 *
 * @return The minimum copyright notice as a C string.
 */
const char *libparcAbout_MiniNotice(void);

/**
 * Return the short copyright notice as a C string.
 *
 * @return The short copyright notice as a C string.
 */
const char *libparcAbout_ShortNotice(void);

/**
 * Return the long copyright notice as a C string.
 *
 * @return The long copyright notice as a C string.
 */
const char *libparcAbout_LongNotice(void);

#endif // libparc_About_h
