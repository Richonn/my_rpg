/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-myrpg-clovis.billot
** File description:
** rpg
*/

#ifndef RPG_H_
    #define RPG_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

typedef struct start {
    int start_game;
    sfVector2f v_start_button;
    sfVector2f v_q_button;
    sfVector2f v_setting;
    sfSprite *start_button_spr;
    sfSprite *sprite_menu;
    sfSprite *q_button_spr;
    sfSprite *setting_spr;
    sfSprite *cross_spr;
} start_t;

typedef struct htp {
    int how_to_play;
    sfVector2f v_htp_button;
    sfSprite *htp_menu_spr;
    sfSprite *htp_button_spr;
} htp_t;

typedef struct pnj {
    sfSprite *wizard_spr;
    sfTexture *wizard_txt;
    sfIntRect wizard_rect;
    sfVector2f wizard_v;
    sfSprite *axe_spr;
    sfTexture *axe_txt;
    sfIntRect axe_rect;
    sfVector2f axe_v;
    sfSprite *bucheron_spr;
    sfTexture *bucheron_txt;
    sfIntRect bucheron_rect;
    sfVector2f bucheron_v;
} pnj_t;

typedef struct main_game {
    int stage_main_game;
    int moving;
    int letter_stage;
    int map;
    sfSprite *mini_map;
    sfSprite *player;
    sfVector2f v_player;
    sfSprite *letter_spr;
    sfIntRect rect;
    sfSprite *wizard_spr;
    sfTexture *wizard_txt;
    sfIntRect wizard_rect;
    sfVector2f wizard_v;
    sfSprite *map_spr;
    sfVector2f v_map;
    sfSprite *cloud_spr;
    sfTexture *cloud_txt;
    sfIntRect cloud_rect;
    sfVector2f v_letter;
    sfClock *clock;
    sfClock *clock_wizard;
    sfClock *clock_bucheron;
    sfText *press_text;
    sfVector2f v_text;
} main_game_t;

typedef struct pause {
    int pause_stage;
    sfSprite *pause_menu_spr;
    sfSprite *setting_spr;
    sfSprite *resume_button_spr;
    sfSprite *quit_btn_spr;
    sfSprite *main_menu_spr;
    sfVector2f v_setting_btn;
    sfVector2f v_resume_btn;
    sfVector2f v_main_menu;
    sfVector2f v_quit_btn;
} pause_t;

typedef struct setting {
    int setting;
    sfSprite *setting_spr;
    sfSprite *quit_button;
    sfVector2f v_cross_but;
} setting_t;

typedef struct inventory {
    int inventory_stage;
    int gold;
    int stat_btn;
    sfSprite *stat_btn_spr;
    sfSprite *inventory_spr;
    sfVector2f v_stat_btn;
} inventory_t;

typedef struct stat {
    int stat;
    int player_level;
    char *level_p;
    sfText *level_text;
    sfSprite *stat_menu_spr;
    sfSprite *up_btn_spr;
    sfSprite *quit_spr;
    sfVector2f v_quit_btn;
    sfVector2f v_up_btn;
    sfVector2f v_level;
} stat_t;

typedef struct music {
    int stage_music;
    sfMusic *game_music;
    sfMusic *menu_music;
} music_t;

typedef struct sound {
    sfSound *clic_button;
    sfSoundBuffer *button_buf_clic;
    sfSound *gold_button;
    sfSoundBuffer *gold_buf_but;
    sfSound *map_sound;
    sfSoundBuffer *map_buffer;
    sfSound *map_close;
    sfSoundBuffer *map_close_buf;
} sound_t;

typedef struct quest {
    int quest;
    int axe;
    sfVector2f v_box;
    sfSprite *box_spr;
    sfVector2f v_name;
    sfVector2f v_dialogue;
    sfText *name;
    sfText *dialogue;
} quest_t;

typedef struct game {
    start_t *start;
    main_game_t *main_game;
    htp_t *htp;
    pause_t *pause;
    setting_t *setting;
    inventory_t *inventory;
    sound_t *sound;
    music_t *music;
    sfRenderWindow *window;
    quest_t *quest;
    pnj_t *pnj;
    stat_t *stat;
} game_t;

// load assets
void load_all_asset(game_t *game);
void load_game_asset(game_t *game);
void load_pause_asset(game_t *game);
void load_sound_button(game_t *game);
void load_start_asset(game_t *game);
void load_inventory_asset(game_t *game);
void load_setting_asset(game_t *game);
void load_music(game_t *game);
void load_player_asset(game_t *game);
void load_letter_asset(game_t *game);
void load_mini_map(game_t *game);
void load_stat_asset(game_t *game);
// initialise the game
void initialisation(game_t *game);
void malloc_all(game_t *game);
void initialise_all(game_t *game);
// display start
void menu_start(game_t *game);
// display pause
void pause_menu(game_t *game);
// display settings
void setting_menu(game_t *game);
// display inventory
void inventory_menu(game_t *game);
// display stat
void stat_menu(game_t *game);
void button_stat(game_t *game, sfEvent event);
// how to play
void htp_menu(game_t *game);
// basics window sound and stuff
int type_event(sfRenderWindow *window, game_t *game);
void create_window(game_t *game, int width, int height);
sfSprite *create_spr(char *filename);
sfVector2f create_vec(float x, float y);
sfText *create_text(game_t *game, char *txt, int size);
// music
void play_game_music(game_t *game);
void play_menu_music(game_t *game);
// sound
void clic_sound(game_t *game);
void gold_sound(game_t *game);
void map_sound(game_t *game);
void close_map_sound(game_t *game);
// button start menu
void button_start(game_t *game, sfEvent event);
void quit_button_start(game_t *game, sfVector2i mouse);
void play_button_start(game_t *game, sfVector2i mouse);
void htp_button_start(game_t *game, sfVector2i mouse);
// button pause menu
void button_pause(game_t *game, sfEvent event);
void resume_button_pause(game_t *game, sfVector2i mouse);
void main_menu_pause(game_t *game, sfVector2i mouse);
void settings_pause(game_t *game, sfVector2i mouse);
void quit_pause_button(game_t *game, sfVector2i mouse);
// button settings
void button_setting(game_t *game, sfEvent event);
void quit_but_setting(game_t *game, sfVector2i mouse);
// button inventory
void button_ivt(game_t *game, sfEvent event);
// game
void stage(game_t *game, sfEvent event);
void ig_stage(game_t *game, sfEvent event);
void ig_key(game_t *game, sfEvent event);
void display_map(game_t *game);
void mini_map(game_t *game);
void display_player(game_t *game);
void create_wizard(game_t *game);
void anime_wizard(game_t *game);
void anime_bucheron(game_t *game);
void create_bucheron(game_t *game);
void create_axe(game_t *game);
void anime_axe(game_t *game);
int check_hitbox(game_t *game);
void event_move(game_t *game, sfEvent event);
void move_all_up(game_t *game, sfEvent event);
void move_all_down(game_t *game, sfEvent event);
void move_all_left(game_t *game, sfEvent event);
void move_all_right(game_t *game, sfEvent event);
// time
int get_time(game_t *game);
int get_time_wizard(game_t *game);
int get_time_bucheron(game_t *game);
// lib
void my_putchar(char c);
void my_putstr(char *str);
// letter
void display_letter(game_t *game);
void skip_letter(game_t *game, sfEvent event);
// usage
void help(void);
// hitbox
int check_hitbox(game_t *game);
// quest/dialogue
void display_dialogue_box(game_t *game);
void skip_dialogue(game_t *game, sfEvent event);
void load_dialogue_asset(game_t *game);
void load_text(game_t *game);
void display_dialogue(game_t *game, char *str1, char *str2);

#endif /* !RPG_H_ */
