#include "stl.h"
#include "cfg_skill.h"

std::unordered_map<int, CfgSkill> g_cfg_skills;

const CfgSkill* cfg_find_skill(int id)
{
    auto it = g_cfg_skills.find(id);
    if (it != g_cfg_skills.end()) return &it->second;
    return nullptr;
}

int load_all_cfgs_hero()
{
    return 0;
}
