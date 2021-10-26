#pragma once

class CfgSkill
{
public:
    int id;
    int hp;
    int mp;
};

const CfgSkill* cfg_find_skill(int id);

int load_all_cfgs_skill();
