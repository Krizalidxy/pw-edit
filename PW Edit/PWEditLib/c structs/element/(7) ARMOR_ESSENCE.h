type = struct ARMOR_ESSENCE {
    unsigned int id;
    unsigned int id_major_type;
    unsigned int id_sub_type;
    namechar name[32];
    char realname[32];
    char file_matter[128];
    char file_icon[128];
    unsigned int equip_location;
    int level;
    int require_strength;
    int require_agility;
    int require_energy;
    int require_tili;
    unsigned int character_combo_id;
    int require_level;
    int fixed_props;
    int defence_low;
    int defence_high;
    struct {
        int low;
        int high;
    } magic_defences[5];
    int mp_enhance_low;
    int mp_enhance_high;
    int hp_enhance_low;
    int hp_enhance_high;
    int armor_enhance_low;
    int armor_enhance_high;
    int durability_min;
    int durability_max;
    int levelup_addon;
    int material_need;
    int price;
    int shop_price;
    int repairfee;
    float drop_probability_socket0;
    float drop_probability_socket1;
    float drop_probability_socket2;
    float drop_probability_socket3;
    float drop_probability_socket4;
    float make_probability_socket0;
    float make_probability_socket1;
    float make_probability_socket2;
    float make_probability_socket3;
    float make_probability_socket4;
    float probability_addon_num0;
    float probability_addon_num1;
    float probability_addon_num2;
    float probability_addon_num3;
    struct {
        unsigned int id_addon;
        float probability_addon;
    } addons[32];
    struct {
        unsigned int id_rand;
        float probability_rand;
    } rands[32];
    int durability_drop_min;
    int durability_drop_max;
    int decompose_price;
    int decompose_time;
    unsigned int element_id;
    int element_num;
    int pile_num_max;
    unsigned int has_guid;
    unsigned int proc_type;
}
