#ifndef __CONSTH__
#define __CONSTH__

#define PROTOCOL_VERSION 772

#define ERROR_MESSAGE "Tibia client has encountered a problem and needs to close.\r\n"
#define MESSAGE_TITLE "Tibia"
#define WINDOW_TITLE "Tibia Client"

#define UPDATER_URL "http://127.0.0.1/update/"
#define MAIN_LIBRARY "Tibia.dll"
#define MAIN_EXECUTABLE "Tibia.exe"
#define MAIN_ADVANCED_CONFIG "Tibia.ini"

#define CAM_EXTENSION "cam"

#define MAP_DIR "map"
#define CAM_DIR "cam"
#define GAME_DIR "game/"
#define OUTDATE_DIR "game/outdate"

#define PING_WAIT 2000

// Change these
#define GLOBAL_LOGIN1 "127.0.0.1" 
#define GLOBAL_LOGIN2 "127.0.0.1"
#define GLOBAL_LOGIN3 "127.0.0.1"
#define GLOBAL_LOGIN4 "127.0.0.1"
#define GLOBAL_HOST_PROXY "127.0.0.1"
#define GLOBAL_HOST "127.0.0.1"

#define GLOBAL_HOST_IP "127.0.0.1"
#define GLOBAL_PORT 7171

#define CAM_PLAYER_HOST "127.0.0.1"
#define CAM_PLAYER_PORT 7171

#define MINIMUM_ITEM_ID 100
#define MAXIMUM_ITEM_ID 4000

/* All classes */
class LIB;
class RSA;
class GUI;

/* It is important for the library to be created on DS segment */
extern LIB g_dll;

/* Global objects */
extern RSA* g_rsa;
extern GUI* g_gui;

// Input related variables
extern bool g_lastAlt;
extern bool g_lastControl;

enum Font_t {
	FONT_NORMAl_1 = 1,
	FONT_NORMAL_OUTLINED = 2,
	FONT_SMALL = 3,
	FONT_BIG = 4
};

enum keyboardstate_t {
	//KEYBOARD_STATE_KEYDOWN,
	//KEYBOARD_STATE_KEYUP,
	KEYBOARD_STATE_ASCII,
	KEYBOARD_STATE_PASTE,
	KEYBOARD_STATE_COPY,
	KEYBOARD_STATE_SELECTALL,
	KEYBOARD_STATE_CUT,
	KEYBOARD_STATE_BACK,
	KEYBOARD_STATE_ENTER,
	KEYBOARD_STATE_TAB,
	KEYBOARD_STATE_ESCAPE,
	KEYBOARD_STATE_DELETE,
	
	/* Arrows */
	KEYBOARD_STATE_LEFT,
	KEYBOARD_STATE_RIGHT,
	KEYBOARD_STATE_UP,
	KEYBOARD_STATE_DOWN,
};

enum keyboardinput_t {

};

enum keys_t {
	KEY_DOWN = 0x2000
};

enum letters_t {
	LETTER_A = 0x41,
	LETTER_W = 0x57,
	LETTER_S = 0x53,
	LETTER_D = 0x44,
	LETTER_Q = 0x51,
	LETTER_E = 0x45,
	LETTER_Z = 0x5A,
	LETTER_C = 0x43,
};

enum playerInfo_t {
	PLAYER_INFO_ID,
	PLAYER_INFO_HEALTH,
	PLAYER_INFO_MAX_HEALTH,
	PLAYER_INFO_MANA,
	PLAYER_INFO_MAX_MANA,
	PLAYER_INFO_TICKS,
	PLAYER_INFO_ICONS,
};

enum chunk_t {
	CHUNK_OFFSET_PLAYER_MANA = 0,
	CHUNK_OFFSET_PLAYER_HEALTH = 4,
	CHUNK_OFFSET_PLAYER_ID = 8,
	CHUNK_OFFSET_PLAYER_U = 12,
	CHUNK_OFFSET_PLAYER_Z = 16,
	CHUNK_OFFSET_PLAYER_Y = 20,
	CHUNK_OFFSET_PLAYER_X = 24,
};

enum addresses_t {
	GET_NETWORK_MESSAGE_U8_ADDRESS = 0x004CC720,
	GET_NETWORK_MESSAGE_U16_ADDRESS = 0x004CC8B0,
	GET_NETWORK_MESSAGE_U32_ADDRESS = 0x004CCA40,
	GET_NETWORK_MESSAGE_STRING_ADDRESS = 0x004CCE50,
	GET_GUI_POINTER_ADDRESS = 0x5D16B0,
	GET_CREATURE_ENTRY_FUNCTION_ADDRESS = 0x0044C6E0,
	WARNING_DIALOG_FUNCTION_ADDRESS = 0x47F8A0,
	CHARACTERLIST_DIALOG_FUNCTION_ADDRESS = 0x481160,
	DRAW_ITEM_FUNCTION_ADDRESS = 0x00494CA0,
	DRAW_CREATURE_FUNCTION_ADDRESS = 0x00495080,
	GET_PARTY_INFO_FUNCTION_ADDRESS = 0x0044D6F0,
	GET_PAINTER_FUNCTION_ADDRESS = 0x004EAA90,
	GUI_CLICK_EVENT_CODECAVE_CALL_ADDRESS = 0x4A0F36,
	ADD_CONTEXT_MENU_EX_CALL_SET_OUTFIT_FUNCTION_ADDRESS = 0x443753,
	ADD_CONTEXT_MENU_EX_FUNCTION_ADDRESS = 0x442910,
	GET_METRIC_FUNCTION_ADDRESS = 0x491B80,
	PRINT_TEXT_FUNCTION_ADDRESS = 0x493AF0,
	PRINT_TEXT_EXT_FUNCTION_ADDRESS = 0x493F60,
	PRINT_FPS_FUNCTION_ADDRESS = 0x4494F4,
	PRINT_CAPACITY_FUNCTION_ADDRESS = 0x428F25,
	MINIMISE_INVENTORY_FUNCTION_ADDRESS = 0x42B4D0,
	MAXIMIZE_INVENTORY_FUNCTION_ADDRESS = 0x49BEE0,
	MINIMISE_INVENTORY_REPLACEMENT_ADDRESS = 0x436590,
	MAXIMIZE_INVENTORY_REPLACEMENT_ADDRESS = 0x42A79C,
	DRAW_SKIN_FUNCTION_ADDRESS = 0x497A00,
	DRAW_SKIN_MENU_GAME_FUNCTION_ADDRESS = 0x4A21A5,
	GET_ITEM_PROPERTY_FUNCTION_ADDRESS = 0x4D1C40,
	SET_EXPERIENCE_FUNCTION_ADDRESS = 0x44CC00,
	PUSH_LETTER_FUNCTION_ADDRESS = 0x447E60,
	
	ERROR_FUNCTION_ADDRESS = 0x4D7D80,
	
	SAY_FUNCTION_ADDRESS = 0x4067C0,
	
	DECODE_PACKET_IN_BUFFER_FUNCTION_ADDRESS_CALL = 0x4CC588,
	INCOMING_PACKET_BUFFER_ADDRESS = 0x715542,
	
	PING_CALL_ADDRESS = 0x40C6CB,
	SET_EXPERIENCE_CALL_ADDRESS = 0x4104E6,
	PUSH_LETTER_CALL_ADDRESS = 0x4AB834,
	
	XTEA_KEY_ADDRESS = 0x719D78,
	
	PRINT_FPS_JUMP_ADDRESS = 0x449458,
	
	IAT_CONNECT_FUNCTION_ADDRESS = 0x0055B5C0,
	IAT_SEND_FUNCTION_ADDRESS = 0x0055B60C,
	IAT_RECV_FUNCTION_ADDRESS = 0x0055B5E0,
	IAT_DISPATCHMESSAGE_FUNCTION_ADDRESS = 0x0055B398,
	IAT_CREATEWINDOWEX_FUNCTION_ADDRESS = 0x0055B580,
	
	MemLoginServer1 = 0x715368,
	MemLoginServer2 = 0x7153D8,
	MemLoginServer3 = 0x715448,
	MemLoginServer4 = 0x7154B8,
	MemTestLoginServer = 0x7152F8,
	MemPortLoginServer1 = 0x71535C,
	MemPortLoginServer2 = 0x7153CC,
	MemPortLoginServer3 = 0x71543C,
	MemPortLoginServer4 = 0x7154AC,
	MemPortLoginServer5 = 0x71551C,
	
	PLAYER_ACCOUNT_NUMBER = 0x71C580,
	
	PLAYER_TICKS = 0x71C5EC,
	
	PLAYER_ID_ADDRESS	= 0x005C684C,
	MAP_POINTER_ADDRESS = 0x005D4C20,
	PLAYER_X_ADDRESS = 0x005D16F0,
	PLAYER_Y_ADDRESS = 0x005D16EC,
	PLAYER_Z_ADDRESS = 0x005D16E8,
	PLAYER_SLOT_HEAD_ADDRESS = 0x005CED60,
	PLAYER_SLOT_NECKLACE_ADDRESS = 0x005CED6C,
	PLAYER_SLOT_BACKPACK_ADDRESS = 0x005CED78,
	PLAYER_SLOT_ARMOR_ADDRESS = 0x005CED84,
	PLAYER_SLOT_RIGHT_ADDRESS = 0x005CED90,
	PLAYER_SLOT_LEFT_ADDRESS = 0x005CED9C,
	PLAYER_SLOT_LEGS_ADDRESS = 0x005CEDA8,
	PLAYER_SLOT_FEET_ADDRESS = 0x005CEDB4,
	PLAYER_SLOT_RING_ADDRESS = 0x005CEDC0,
	PLAYER_SLOT_AMMO_ADDRESS = 0x005CEDCC,
	PLAYER_SLOT_RIGHT_COUNT_ADDRESS = 0x005CED94,
	PLAYER_SLOT_LEFT_COUNT_ADDRESS = 0x005CEDA0,
	PLAYER_SLOT_AMMO_COUNT_ADDRESS = 0x005CEDD0, 
	PLAYER_HP_ADDRESS = 0x005C6848,
	PLAYER_HP_MAX_ADDRESS = 0x005C6844,
	PLAYER_EXP_ADDRESS = 0x005C6840,
	PLAYER_LEVEL_ADDRESS = 0x005C683C,
	PLAYER_MAGIC_LEVEL_ADDRESS = 0x005C6838,
	PLAYER_LEVEL_PERCENT_ADDRESS = 0x005C6834,
	PLAYER_MAGIC_LEVEL_PERCENT_ADDRESS = 0x005C6830,
	PLAYER_MP_ADDRESS = 0x005C682C,
	PLAYER_MP_MAX_ADDRESS = 0x005C6828,
	PLAYER_SOUL_ADDRESS = 0x005C6824,
	PLAYER_CAP_ADDRESS = 0x005C6820,
	CONTAINER_BEGIN_ADDRESS = 0x005CEDD8,
	PLAYER_SKILLS_BEGIN_ADDRESS = 0x005C67F8,
	PLAYER_SKILLS_PERCENT_BEGIN_ADDRESS = 0x005C67DC,
	PLAYER_VIP_BEGIN_ADDRESS = 0x005C4570,
	BATTLELIST_BEGIN_ADDRESS = 0x5C68B0,
	
	ICONS_ADDRESS = 0x005C67D8,
	CONNECTION_STATUS_ADDRESS = 0x0071C588,
	
	FORCE_DWORD_LAST_ADDRESS = 0x7fffffff
};


enum SpeakClasses {
	SPEAK_SAY				= 0x01,	//normal talk
	SPEAK_WHISPER			= 0x02,	//whispering - #w text
	SPEAK_YELL				= 0x03,	//yelling - #y text
/*!*/	SPEAK_PRIVATE_PN		= 0x99, //Player-to-NPC speaking(NPCs channel)
/*!*/	SPEAK_PRIVATE_NP		= 0x98, //NPC-to-Player speaking
	SPEAK_PRIVATE			= 0x04, //Players speaking privately to players
	SPEAK_CHANNEL_Y     	= 0x05,	//Yellow message in chat
/*!*/	SPEAK_CHANNEL_W         = 0x97, //White message in chat
	SPEAK_RVR_CHANNEL		= 0x06, //Reporting rule violation - Ctrl+R
	SPEAK_RVR_ANSWER		= 0x07, //Answering report
	SPEAK_RVR_CONTINUE		= 0x08, //Answering the answer of the report
	SPEAK_BROADCAST     	= 0x09,	//Broadcast a message - #b
	SPEAK_CHANNEL_R1    	= 0x0A,	//Talk red on chat - #c
	SPEAK_PRIVATE_RED   	= 0x0B,	//Red private - @name@ text
	SPEAK_CHANNEL_O     	= 0x0C,	//Talk orange on text
	//SPEAK_                = 0x10, //?
	SPEAK_CHANNEL_R2    	= 0x0E,	//Talk red anonymously on chat - #d
	//SPEAK_                = 0x12, //?
	SPEAK_MONSTER_SAY   	= 0x10,	//Talk orange
	SPEAK_MONSTER_YELL  	= 0x11,	//Yell orange

};

enum flags_t {
	FLAG_POISON	= 1,
	FLAG_FIRE = 2, 
	FLAG_ENERGY	= 4, 
	FLAG_DRUNK = 8, 
	FLAG_MANA_SHIELD = 16, 
	FLAG_PARALYZE = 32, 
	FLAG_HASTE = 64, 
	FLAG_SWORDS	= 128,
};

enum skull_t {
	SKULL_NONE		= 0,
	SKULL_YELLOW	= 1,
	SKULL_GREEN		= 2,
	SKULL_WHITE		= 3,
	SKULL_RED		= 4,
};

enum Party_t {
	PARTY_NONE		= 0,
	PARTY_INVITER	= 1,
	PARTY_INVITEE	= 2,
	PARTY_MEMBER	= 3,
	PARTY_LEADER	= 4,
};

enum MouseEvent_t {
	EVENT_BUTTON,
	EVENT_DOUBLE_CLICK,
	EVENT_MOVEMENT,
	EVENT_SCROLL_DOWN,
	EVENT_SCROLL_UP,
};

enum KeyboardEvent_t {
	EVENT_KEY_DOWN,
	EVENT_KEY_UP,
};

enum ReturnValue_t {
	RETURN_SOMETHING,
	RETURN_NOTHING,
	RETURN_DRAG
};

enum Use_t {
	USE_NONE	= 0,
	USE_LEFT	= 1,	// walk, etc
	USE_RIGHT	= 2,	// use
	USE_INSPECT	= 3,
	USE_DRAG	= 6,
	USE_USING	= 7,
};

enum Scroll_t {
	SCROLL_VERTICAL,
	SCROLL_HORIZONTAL
};

#endif
