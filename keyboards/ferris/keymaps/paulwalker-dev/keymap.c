#include QMK_KEYBOARD_H

// Colemak DH Homerow mods
#define GUI_C_L LGUI_T(KC_A)
#define ALT_C_L LALT_T(KC_R)
#define CTL_C_L LCTL_T(KC_S)
#define SFT_C_L LSFT_T(KC_T)
#define SFT_C_R RSFT_T(KC_S)
#define CTL_C_R RCTL_T(KC_C)
#define ALT_C_R RALT_T(KC_A)
#define GUI_C_R RGUI_T(KC_O)

// QWERTY Homerow mods
#define GUI_Q_L LGUI_T(KC_A)
#define ALT_Q_L LALT_T(KC_S)
#define CTL_Q_L LCTL_T(KC_D)
#define SFT_Q_L LSFT_T(KC_F)
#define SFT_Q_R RSFT_T(KC_J)
#define CTL_Q_R RCTL_T(KC_K)
#define ALT_Q_R RALT_T(KC_L)
#define GUI_Q_R RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( // Colemak
		KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
		GUI_C_L, ALT_C_L, CTL_C_L, SFT_C_L, KC_G,    KC_M,    SFT_C_R, CTL_C_R, ALT_C_R, GUI_C_R,
		KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,

		LT(2,KC_ESC),
		LT(3,KC_SPC),
		LT(4,KC_ENT),
		LT(5,KC_BSPC)
	),
	[1] = LAYOUT( // Qwerty
		KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
		GUI_Q_L, ALT_Q_L, CTL_Q_L, SFT_Q_L, KC_G,    KC_H,    SFT_Q_R, CTL_Q_R, ALT_Q_R, GUI_Q_R,
		KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
		                           _______, _______, _______, _______
	),
	[2] = LAYOUT( // Nav
		_______, _______, _______, _______, _______, KC_DOWN, KC_RGHT, KC_LBRC, KC_RBRC, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______,
		_______, _______, _______, _______, _______, KC_UP,   KC_LEFT, KC_LABK, KC_RABK, _______,
		                           _______, _______, KC_LPRN, KC_RPRN
	),
	[3] = LAYOUT( // Symbols
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, KC_SCLN, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		                           _______, _______, _______, _______
	),
	[4] = LAYOUT( // Numbers
		_______, KC_7,    KC_8,    KC_9,    _______, _______, _______, _______, _______, _______,
		_______, KC_4,    KC_5,    KC_6,    _______, _______, _______, _______, _______, _______,
		_______, KC_1,    KC_2,    KC_3,    _______, _______, _______, _______, _______, _______,
		                           _______, KC_0,    _______, _______
	),
	[5] = LAYOUT( // System
		QK_BOOT, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______,
		_______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, DF(7),   _______, _______, _______, _______, _______,
		                           DF(6),   TG(1),   _______, _______
	),
	[6] = LAYOUT( // Stenography
		DF(0),   STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM,
		STN_NUM, STN_TL,  STN_PL,  STN_HL,  STN_STR, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
		STN_SL,  STN_KL,  STN_WL,  STN_RL,  STN_STR, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
		                           STN_A,   STN_O,   STN_E,   STN_U
	),
	[7] = LAYOUT( // Gaming
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    _______, _______, _______, _______, _______,
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    _______, _______, _______, _______, _______,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    _______, _______, _______, _______, _______,
		                           KC_LCTL, KC_SPC,  DF(0),   _______
	),
	[15] = LAYOUT( // Template
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		                           _______, _______, _______, _______
	),
};
