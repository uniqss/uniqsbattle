#include "stl.h"
#include "cfg_hero.h"

std::unordered_map<int, CfgHero> g_cfg_heros;

const CfgHero* cfg_find_hero(int id)
{
    auto it = g_cfg_heros.find(id);
    if (it != g_cfg_heros.end()) return &it->second;
    return nullptr;
}

int load_all_cfgs_hero()
{
    g_cfg_heros[101].id = 101;
    g_cfg_heros[101].name = "死亡骑士";
    g_cfg_heros[101].maxhp = 100;
    g_cfg_heros[101].maxmp = 100;
    return 0;
}
