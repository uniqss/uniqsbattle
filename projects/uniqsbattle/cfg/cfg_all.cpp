#include "cfg_all.h"

#include "stl.h"
#include "cfg_hero.h"

int load_all_cfgs()
{
    int ret = 0;
    
    ret = load_all_cfgs_hero();
    if (ret != 0) return ret;

    return 0;
}
