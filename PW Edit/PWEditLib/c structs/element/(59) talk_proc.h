type = struct talk_proc {
    namechar text[64];
    unsigned int id_talk;
    int num_window;
    talk_proc::window *windows;
  public:
    talk_proc(void);
    ~talk_proc(int);
    int save(FILE *);
    int load(FILE *);
}
