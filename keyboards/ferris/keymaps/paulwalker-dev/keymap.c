#include QMK_KEYBOARD_H

// Colemak DH Homerow mods
#define GUI_C_L LGUI_T(KC_A)
#define ALT_C_L LALT_T(KC_R)
#define CTL_C_L LCTL_T(KC_S)
#define SFT_C_L LSFT_T(KC_T)
#define SFT_C_R RSFT_T(KC_N)
#define CTL_C_R RCTL_T(KC_E)
#define ALT_C_R RALT_T(KC_I)
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
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, KC_RGHT, KC_LBRC, KC_RBRC, XXXXXXX,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   KC_LEFT, KC_LABK, KC_RABK, XXXXXXX,
		                           XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN
	),
	[3] = LAYOUT( // Symbols
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_AT,   KC_EXLM, KC_HASH, KC_PERC, KC_CIRC,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_EQL,  KC_PLUS, KC_MINS, KC_ASTR, KC_SLSH,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_AMPR, KC_QUES, KC_DQUO, KC_QUOT, KC_DLR,
		                           XXXXXXX, XXXXXXX, KC_UNDS, KC_SCLN
	),
	[4] = LAYOUT( // Numbers
		XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
		XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		                           KC_0,    KC_TAB,  XXXXXXX, XXXXXXX
	),
	[5] = LAYOUT( // System
		QK_BOOT, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		                           DF(6),   TG(1),   XXXXXXX, XXXXXXX
	),
	[6] = LAYOUT( // Stenography
		STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  STN_N6,  STN_N7,  STN_N8,  STN_N9,  DF(0),
		STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
		STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
		                           STN_A,   STN_O,   STN_E,   STN_U
	),
	[15] = LAYOUT( // Template
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		                           _______, _______, _______, _______
	),
};
