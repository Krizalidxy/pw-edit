type = struct REFINE_TICKET_ESSENCE {
    unsigned int id;
    namechar name[32];
    char file_matter[128];
    char file_icon[128];
    namechar desc[16];
    float ext_reserved_prob;
    float ext_succeed_prob;
    unsigned int fail_reserve_level;
    float fail_ext_succeed_prob[12];
    int price;
    int shop_price;
    int pile_num_max;
    unsigned int has_guid;
    unsigned int proc_type;
}
