#ifndef _javax_swing_MenuSelectionManager_h_
#define _javax_swing_MenuSelectionManager_h_
//$ class javax.swing.MenuSelectionManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("MENU_SELECTION_MANAGER_KEY")
#undef MENU_SELECTION_MANAGER_KEY
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("VERBOSE")
#undef VERBOSE

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class MenuElement;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $import MenuSelectionManager : public ::java::lang::Object {
	$class(MenuSelectionManager, 0, ::java::lang::Object)
public:
	MenuSelectionManager();
	void init$();
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void clearSelectedPath();
	virtual ::java::awt::Component* componentForPoint(::java::awt::Component* source, ::java::awt::Point* sourcePoint);
	static ::javax::swing::MenuSelectionManager* defaultManager();
	virtual void fireStateChanged();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual $Array<::javax::swing::MenuElement>* getSelectedPath();
	virtual bool isComponentPartOfCurrentMenu(::java::awt::Component* c);
	bool isComponentPartOfCurrentMenu(::javax::swing::MenuElement* root, ::java::awt::Component* c);
	void printMenuElementArray($Array<::javax::swing::MenuElement>* path);
	void printMenuElementArray($Array<::javax::swing::MenuElement>* path, bool dumpStack);
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e);
	virtual void processMouseEvent(::java::awt::event::MouseEvent* event);
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void setSelectedPath($Array<::javax::swing::MenuElement>* path);
	::java::util::Vector* selection = nullptr;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
	static ::java::lang::StringBuilder* MENU_SELECTION_MANAGER_KEY;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("MENU_SELECTION_MANAGER_KEY")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_MenuSelectionManager_h_