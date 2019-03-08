#ifndef CONFIG_H_
#define CONFIG_H_
#include <stddef.h>

struct config {
	char *argz;
	size_t len;
	char *path;
};

int config_init(struct config *config, const char *path);
const char *config_get(const struct config *config, const char *key);
/* returns a value in [0, UINT8_MAX] on success, -errno on error */
int config_get_uint8_t(const struct config *config, const char *key);
void config_cleanup(struct config *config);

#endif /* CONFIG_H_ */