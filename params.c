#include "main.h"

/**
 * init_params - clear struct fileds and reset buf
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: void
*/

void init_params(params_t *params, va_list ap)
{
	params->with = 0;

	params->l_modifier = 0;
	params->h_modifier = 0;

	(void)ap;
}
