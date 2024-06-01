#include QMK_KEYBOARD_H

#define GUI_T_A GUI_T(KC_A)
#define ALT_T_R ALT_T(KC_R)
#define CTL_T_S CTL_T(KC_S)
#define SFT_T_T SFT_T(KC_T)
#define SFT_T_S SFT_T(KC_S)
#define CTL_T_C CTL_T(KC_C)
#define ALT_T_A CTL_T(KC_A)
#define GUI_T_O CTL_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
		GUI_T_A, ALT_T_R, CTL_T_S, SFT_T_T, KC_G,    KC_M,    SFT_T_S, CTL_T_C, ALT_T_A, GUI_T_O,
		KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,

		KC_ESC,
		KC_SPC,
		LT(1, KC_ENT),
		LT(2, KC_BSPC)
	),
	[1] = LAYOUT(
		KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,

		_______,
		_______,
		_______,
		_______
	),
	[2] = LAYOUT(
		DF(8),   _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		                           _______, _______, _______, _______
	),
	[3] = LAYOUT(
		DF(0),   STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM, STN_NUM,
		STN_NUM, STN_TL,  STN_PL,  STN_HL,  STN_STR, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
		STN_SL,  STN_KL,  STN_WL,  STN_RL,  STN_STR, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
		                           STN_A,   STN_O,   STN_E,   STN_U
	),
};
