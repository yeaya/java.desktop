#ifndef _javax_swing_JComponent$KeyboardState_h_
#define _javax_swing_JComponent$KeyboardState_h_
//$ class javax.swing.JComponent$KeyboardState
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent$IntVector;
	}
}

namespace javax {
	namespace swing {

class $export JComponent$KeyboardState : public ::java::io::Serializable {
	$class(JComponent$KeyboardState, 0, ::java::io::Serializable)
public:
	JComponent$KeyboardState();
	void init$();
	static ::javax::swing::JComponent$IntVector* getKeyCodeArray();
	static bool keyIsPressed(int32_t keyCode);
	static void registerKeyPressed(int32_t keyCode);
	static void registerKeyReleased(int32_t keyCode);
	static bool shouldProcess(::java::awt::event::KeyEvent* e);
	static $Object* keyCodesKey;
};

	} // swing
} // javax

#endif // _javax_swing_JComponent$KeyboardState_h_