type = struct FACEPILL_ESSENCE {
    unsigned int id;
    unsigned int id_major_type;
    unsigned int id_sub_type;
    namechar name[32];
    char file_matter[128];
    char file_icon[128];
    int duration;
    float camera_scale;
    unsigned int character_combo_id;
    struct {
        char file[128];
    } pllfiles[16];
    int price;
    int shop_price;
    int pile_num_max;
    unsigned int has_guid;
    unsigned int proc_type;
}
