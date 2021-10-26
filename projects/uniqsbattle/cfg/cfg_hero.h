#pragma once

class CfgHero
{
public:
    int id;
    string name;
    int maxhp;
    int maxmp;
    vector<int> skillIds;
};

const CfgHero* cfg_find_hero(int id);

int load_all_cfgs_hero();
