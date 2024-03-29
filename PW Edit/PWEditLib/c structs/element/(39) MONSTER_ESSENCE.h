type = struct MONSTER_ESSENCE {
    unsigned int id;
    unsigned int id_type;
    namechar name[32];
    namechar prop[16];
    namechar desc[16];
    unsigned int faction;
    unsigned int monster_faction;
    char file_model[128];
    char file_gfx_short[128];
    char file_gfx_short_hit[128];
    float size;
    float damage_delay;
    unsigned int id_strategy;
    unsigned int role_in_war;
    int level;
    int show_level;
    unsigned int id_pet_egg_captured;
    int life;
    int defence;
    int magic_defences[5];
    unsigned int immune_type;
    int exp;
    int skillpoint;
    int money_average;
    int money_var;
    unsigned int short_range_mode;
    int sight_range;
    int attack;
    int armor;
    int damage_min;
    int damage_max;
    struct {
        int damage_min;
        int damage_max;
    } magic_damages_ext[5];
    float attack_range;
    float attack_speed;
    int magic_damage_min;
    int magic_damage_max;
    unsigned int id_skill;
    int skill_level;
    int hp_regenerate;
    unsigned int aggressive_mode;
    unsigned int monster_faction_ask_help;
    unsigned int monster_faction_can_help;
    float aggro_range;
    float aggro_time;
    unsigned int inhabit_type;
    unsigned int patroll_mode;
    unsigned int stand_mode;
    float walk_speed;
    float run_speed;
    float fly_speed;
    float swim_speed;
    unsigned int common_strategy;
    struct {
        unsigned int id;
        float probability;
    } aggro_strategy[4];
    struct {
        unsigned int id_skill;
        int level;
        float probability;
    } skill_hp75[5];
    struct {
        unsigned int id_skill;
        int level;
        float probability;
    } skill_hp50[5];
    struct {
        unsigned int id_skill;
        int level;
        float probability;
    } skill_hp25[5];
    unsigned int after_death;
    struct {
        unsigned int id_skill;
        int level;
    } skills[32];
    float probability_drop_num0;
    float probability_drop_num1;
    float probability_drop_num2;
    float probability_drop_num3;
    int drop_times;
    int drop_protected;
    struct {
        unsigned int id;
        float probability;
    } drop_matters[32];
}
