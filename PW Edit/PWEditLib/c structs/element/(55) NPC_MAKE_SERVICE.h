type = struct NPC_MAKE_SERVICE {
    unsigned int id;
    namechar name[32];
    unsigned int id_make_skill;
    struct {
        namechar page_title[8];
        unsigned int id_goods[32];
    } pages[8];
}
