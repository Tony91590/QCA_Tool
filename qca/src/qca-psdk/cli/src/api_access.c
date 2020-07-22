/*
 * Copyright (c) 2014,2018, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#include "sw.h"
#include "fal.h"
#include "sw_api.h"
#include "api_desc.h"
#include "fal_api.h"
static sw_api_func_t sw_api_func[] = {
	SSDK_API };
static sw_api_param_t sw_api_param[] = {
	SSDK_PARAM };

sw_api_func_t *
sw_api_func_find(a_uint32_t api_id)
{
    a_uint32_t i = 0;
    static a_uint32_t save = 0;

    if(api_id == sw_api_func[save].api_id)
        return &sw_api_func[save];

    do
    {
        if (api_id == sw_api_func[i].api_id)
        {
            save = i;
            return &sw_api_func[i];
        }

    }
    while (++i < (sizeof(sw_api_func)/sizeof(sw_api_func[0])));

    return NULL;
}

sw_api_param_t *
sw_api_param_find(a_uint32_t api_id)
{
    a_uint32_t i = 0;
    static a_uint32_t save = 0;

    if(api_id == sw_api_param[save].api_id)
        return &sw_api_param[save];

    do
    {
        if (api_id == sw_api_param[i].api_id)
        {
            save = i;
            return &sw_api_param[i];
        }
    }
    while (++i < (sizeof(sw_api_param)/sizeof(sw_api_param[0])));

    return NULL;
}

a_uint32_t
sw_api_param_nums(a_uint32_t api_id)
{
    a_uint32_t i = 0;
    sw_api_param_t *p = NULL;
    static sw_api_param_t *savep = NULL;
    static a_uint32_t save = 0;

    p = sw_api_param_find(api_id);
    if (!p)
    {
        return 0;
    }

    if (p == savep)
    {
        return save;
    }

    savep = p;
    while (api_id == p->api_id)
    {
        p++;
        i++;
    }

    /*error*/
    if(i >= sizeof(sw_api_param)/sizeof(sw_api_param[0]))
    {
        savep = NULL;
        save = 0;
        return 0;
    }
    save = i;

    return i;
}

sw_error_t
sw_api_get(sw_api_t *sw_api)
{
    if(!sw_api)
        return SW_FAIL;

    if ((sw_api->api_fp = sw_api_func_find(sw_api->api_id)) == NULL)
        return SW_NOT_SUPPORTED;

    if ((sw_api->api_pp = sw_api_param_find(sw_api->api_id)) == NULL)
        return SW_NOT_SUPPORTED;

    if((sw_api->api_nr = sw_api_param_nums(sw_api->api_id)) == 0)
        return SW_NOT_SUPPORTED;

    return SW_OK;
}