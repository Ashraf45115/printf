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
	params->unsign = 0;

	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->with = 0;
	params->precision = UINT_MAX;

	params->l_modifier = 0;
	params->h_modifier = 0;

	(void)ap;
}
