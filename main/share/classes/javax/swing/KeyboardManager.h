#ifndef _javax_swing_KeyboardManager_h_
#define _javax_swing_KeyboardManager_h_
//$ class javax.swing.KeyboardManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JMenuBar;
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {

class KeyboardManager : public ::java::lang::Object {
	$class(KeyboardManager, 0, ::java::lang::Object)
public:
	KeyboardManager();
	void init$();
	virtual void fireBinding(::javax::swing::JComponent* c, ::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, bool pressed);
	virtual bool fireKeyboardAction(::java::awt::event::KeyEvent* e, bool pressed, ::java::awt::Container* topAncestor);
	static ::javax::swing::KeyboardManager* getCurrentManager();
	static ::java::awt::Container* getTopAncestor(::javax::swing::JComponent* c);
	virtual void registerKeyStroke(::javax::swing::KeyStroke* k, ::javax::swing::JComponent* c);
	virtual void registerMenuBar(::javax::swing::JMenuBar* mb);
	virtual ::java::util::Hashtable* registerNewTopContainer(::java::awt::Container* topContainer);
	static void setCurrentManager(::javax::swing::KeyboardManager* km);
	virtual void unregisterKeyStroke(::javax::swing::KeyStroke* ks, ::javax::swing::JComponent* c);
	virtual void unregisterMenuBar(::javax::swing::JMenuBar* mb);
	static ::javax::swing::KeyboardManager* currentManager;
	::java::util::Hashtable* containerMap = nullptr;
	::java::util::Hashtable* componentKeyStrokeMap = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_KeyboardManager_h_