type = struct PLAYER_ACTION_INFO_CONFIG {
    unsigned int id;
    namechar name[32];
    char action_name[32];
    char action_prefix[32];
    struct {
        char suffix[32];
    } action_weapon_suffix[11];
    unsigned int hide_weapon;
}
