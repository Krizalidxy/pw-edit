type = struct NPC_TASK_MATTER_SERVICE {
    unsigned int id;
    namechar name[32];
    struct {
		unsigned int id_task;
		struct {
			unsigned int id_matter;
			int num_matter;
		} taks_matters[4];
    } tasks[16];
}
