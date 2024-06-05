//----- Layers -----
#define _DHM 0
#define _FN  1
#define _NUM 2
#define _SYM 3
#define _NAV 4
#define _SWAY1 5
#define _SWAY2 6
#define _SWAY3 7

//----- Home Row Mods -----
#define SHFT_T LSFT_T(KC_T)
#define CTL_S LCTL_T(KC_S)
#define ALT_R LALT_T(KC_R)
#define GUI_A LGUI_T(KC_A)

#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I RALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)

//----- Layer bindings -----
#define LTNAV LT(_NAV, KC_SPC)
#define LTFN LT(_FN, KC_DEL)
#define LTNUM LT(_NUM, KC_BSPC)
#define LTSYM LT(_SYM, KC_ENT)

//----- Sway binds -----
//Laptop Monitor
#define M0W0 LGUI(KC_0)
#define M0W1 LGUI(KC_1)
#define M0W2 LGUI(KC_2)
#define M0W3 LGUI(KC_3)
#define M0W4 LGUI(KC_4)
#define M0W5 LGUI(KC_5)
#define M0W6 LGUI(KC_6)
#define M0W7 LGUI(KC_7)
#define M0W8 LGUI(KC_8)
#define M0W9 LGUI(KC_9)

//Main Monitor
#define M1W0 LGUI(LCTL(KC_0))
#define M1W1 LGUI(LCTL(KC_1))
#define M1W2 LGUI(LCTL(KC_2))
#define M1W3 LGUI(LCTL(KC_3))
#define M1W4 LGUI(LCTL(KC_4))
#define M1W5 LGUI(LCTL(KC_5))
#define M1W6 LGUI(LCTL(KC_6))
#define M1W7 LGUI(LCTL(KC_7))
#define M1W8 LGUI(LCTL(KC_8))
#define M1W9 LGUI(LCTL(KC_9))

#define M2W0 LGUI(LALT(KC_0))
#define M2W1 LGUI(LALT(KC_1))
#define M2W2 LGUI(LALT(KC_2))
#define M2W3 LGUI(LALT(KC_3))
#define M2W4 LGUI(LALT(KC_4))
#define M2W5 LGUI(LALT(KC_5))
#define M2W6 LGUI(LALT(KC_6))
#define M2W7 LGUI(LALT(KC_7))
#define M2W8 LGUI(LALT(KC_8))
#define M2W9 LGUI(LALT(KC_9))

// Sway Layer bindings
#define WM_U LT(_SWAY1,KC_U)
#define WM_Y LT(_SWAY2,KC_Y)
#define WM_QT LT(_SWAY2,KC_QUOT)
