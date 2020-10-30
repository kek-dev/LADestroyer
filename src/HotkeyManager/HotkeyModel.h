#ifndef Destroyer_SRC_HOTKEYMANAGER_HOTKEYMODEL_H_
#define Destroyer_SRC_HOTKEYMANAGER_HOTKEYMODEL_H_

#include <functional>
#include <Windows.h>

namespace hotkey_model
{
	enum class Key : int
	{
		kMouse5 = VK_XBUTTON2,
		kMouse4 = VK_XBUTTON1,
		kEnd = VK_END,
		kNum9 = VK_NUMPAD9,
		kNum8 = VK_NUMPAD8,
        kNum7 = VK_NUMPAD7,
		kNumPlus = 0x6B,
		kNumMinus = 0x6D
	};

	enum class KeyState : int
	{
		kPressed,
		kReleased
	};

	enum class EventType : int
	{
		kTap,
		kHold
	};

	struct Hotkey
	{
		Key key;
		EventType event_type;
		std::function<void()> event_callback;
		std::function<void()> on_release;
		KeyState current_state = KeyState::kReleased;
	};

    enum class GameKey : std::uint16_t {
        k0 = 17071,
        k1 = 17072,
        k2 = 17073,
        k3 = 17074,
        k5 = 17075,
        k6 = 17076,
        k7 = 17077,
        k9 = 17078,
        A = 17079,
        B = 17080,
        C = 17081,
        D = 17082,
        E = 17083,
        F = 17084,
        G = 17085,
        H = 17086,
        I = 17087,
        J = 17088,
        K = 17089,
        L = 17090,
        M = 17091,
        N = 17092,
        O = 17093,
        P = 17094,
        Q = 17095,
        R = 17096,
        S = 17097,
        T = 17098,
        W = 17099,
        F1 = 17100,
        F2 = 17101,
        F3 = 17102,
        F4 = 17103,
        F5 = 17104,
        F6 = 17105,
        F7 = 17106,
        F8 = 17107,
        F9 = 17108,
        F10 = 17109,
        F11 = 17110,
        F12 = 17111,
        Zero = 17112,
        One = 17113,
        Two = 17114,
        Three = 17115,
        Four = 17116,
        Five = 17117,
        Six = 17118,
        Seven = 17119,
        Eight = 17120,
        Nine = 17121,
        NumPadZero = 17122,
        NumPadOne = 17123,
        NumPadTwo = 17124,
        NumPadThree = 17125,
        NumPadFour = 17126,
        NumPadFive = 17127,
        NumPadSix = 17128,
        NumPadSeven = 17129,
        NumPadEight = 17130,
        NumPadNine = 17131,
        Multiply = 17132,
        Decimal = 17133,
        Divide = 17134,
        Backspace = 17135,
        Tab = 17136,
        Clear = 17137,
        Enter = 17138,
        LeftShift = 17139,
        LeftControl = 17140,
        LeftAlt = 17141,
        RightShift = 17142,
        RightControl = 17143,
        RightAlt = 17144,
        CapsLock = 17145,
        Escape = 17146,
        SpaceBar = 17147,
        PageUp = 17148,
        PageDown = 17149,
        End = 17150,
        Home = 17151,
        Left = 17152,
        Up = 17153,
        Right = 17154,
        Down = 17155,
        NumLock = 17156,
        ScrollLock = 17157,
        Semicolon = 17158,
        Equal = 17159,
        Comma = 17160,
        Underscore = 17161,
        Period = 17162,
        Slash = 17163,
        Bar = 17164,
        LeftBracket = 17165,
        Backslash = 17166,
        RightBracket = 17167,
        Quote = 17168,
        LeftMouseButton = 17169,
        RightMouseButton = 17170,
        MiddleMouseButton = 17171,
        MouseScrollUp = 17172,
        MouseScrollDown = 17173,
        GAMEPAD_RS_Up = 17174,
        GAMEPAD_RS_Down = 17175,
        GAMEPAD_RS_Left = 17176,
        GAMEPAD_RS_Right = 17177,
        GAMEPAD_A = 17178,
        GAMEPAD_B = 17179,
        GAMEPAD_X = 17180,
        GAMEPAD_Y = 17181,
        GAMEPAD_L1 = 17182,
        GAMEPAD_L2 = 17183,
        GAMEPAD_L3 = 17184,
        GAMEPAD_R1 = 17185,
        GAMEPAD_R2 = 17186,
        GAMEPAD_R3 = 17187,
        BACK = 17188
    };
}

#endif  // Destroyer_SRC_HOTKEYMANAGER_HOTKEYMODEL_H_
