#ifndef plugin_h_
#define plugin_h_

/* function implemented by plugin, called at initialization */
/* return: ==0 (FALSE) not ok, !=0 (TRUE) ok */
typedef int (* plugin_init) (void) ;

/* name of shared object file for a plugin */
#define PLUGIN_SO_FMT "vile-%s-plugin.so"
/* name of initialization function of a shared object plugin */
#define PLUGIN_INIT_NAME "%s_vile_plugin_init"

/* structure for plugin information */
typedef struct {
    char *name;
    char *description;
    int (*init)(void);
    int (*cleanup)(void);
} Plugin;

/* function to load a plugin */
int load_plugin(const char *name);

/* function to unload a plugin */
int unload_plugin(const char *name);

/* function to get a list of loaded plugins */
Plugin **get_loaded_plugins(int *count);

/* function to set the theme */
int set_theme(const char *theme_name);

/* function to get the current theme */
const char *get_current_theme(void);

/* function to get a list of available themes */
const char **get_available_themes(int *count);

#endif /* plugin_h_ */
