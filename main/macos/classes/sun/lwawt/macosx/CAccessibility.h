#ifndef _sun_lwawt_macosx_CAccessibility_h_
#define _sun_lwawt_macosx_CAccessibility_h_
//$ class sun.lwawt.macosx.CAccessibility
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>

#pragma push_macro("JAVA_AX_ALL_CHILDREN")
#undef JAVA_AX_ALL_CHILDREN
#pragma push_macro("JAVA_AX_COLS")
#undef JAVA_AX_COLS
#pragma push_macro("JAVA_AX_ROWS")
#undef JAVA_AX_ROWS
#pragma push_macro("JAVA_AX_SELECTED_CHILDREN")
#undef JAVA_AX_SELECTED_CHILDREN
#pragma push_macro("JAVA_AX_VISIBLE_CHILDREN")
#undef JAVA_AX_VISIBLE_CHILDREN

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class Point;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace lang {
		class Integer;
		class Number;
		class Runnable;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleAction;
		class AccessibleComponent;
		class AccessibleContext;
		class AccessibleRole;
		class AccessibleSelection;
		class AccessibleState;
		class AccessibleStateSet;
		class AccessibleText;
		class AccessibleValue;
	}
}
namespace javax {
	namespace swing {
		class JLabel;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibility : public ::java::beans::PropertyChangeListener {
	$class(CAccessibility, 0, ::java::beans::PropertyChangeListener)
public:
	CAccessibility();
	void init$();
	static void _addChildren(::javax::accessibility::Accessible* a, int32_t whichChildren, bool allowIgnored, ::java::util::ArrayList* childrenAndRoles);
	static ::javax::accessibility::Accessible* accessibilityHitTest(::java::awt::Container* parent, float hitPointX, float hitPointY);
	static void addAccessibleSelection(::javax::accessibility::AccessibleContext* ac, int32_t index, ::java::awt::Component* c);
	static ::javax::accessibility::Accessible* ax_getAccessibleSelection(::javax::accessibility::AccessibleContext* ac, int32_t index, ::java::awt::Component* c);
	static bool contains(::javax::accessibility::AccessibleContext* ac, ::javax::accessibility::AccessibleState* as, ::java::awt::Component* c);
	static void doAccessibleAction(::javax::accessibility::AccessibleAction* aa, int32_t index, ::java::awt::Component* c);
	void focusChanged();
	static int64_t getAWTView(::javax::accessibility::Accessible* a);
	static $String* getAcceleratorText(::javax::accessibility::AccessibleContext* ac);
	static ::sun::lwawt::macosx::CAccessibility* getAccessibility($StringArray* roles);
	static ::javax::accessibility::AccessibleAction* getAccessibleAction(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* getAccessibleActionDescription(::javax::accessibility::AccessibleAction* aa, int32_t index, ::java::awt::Component* c);
	static ::javax::accessibility::AccessibleComponent* getAccessibleComponent(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::javax::accessibility::AccessibleContext* getAccessibleContext(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* getAccessibleDescription(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static int32_t getAccessibleIndexInParent(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* getAccessibleName(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::javax::accessibility::Accessible* getAccessibleParent(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* getAccessibleRole(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::javax::accessibility::AccessibleRole* getAccessibleRole(::javax::accessibility::Accessible* a);
	static $String* getAccessibleRoleDisplayString(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* getAccessibleRoleFor(::javax::accessibility::Accessible* a);
	static ::javax::accessibility::AccessibleRole* getAccessibleRoleForLabel(::javax::swing::JLabel* l, ::javax::accessibility::AccessibleRole* fallback);
	static ::javax::accessibility::AccessibleSelection* getAccessibleSelection(::javax::accessibility::AccessibleContext* ac, ::java::awt::Component* c);
	static ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet(::javax::accessibility::AccessibleContext* ac, ::java::awt::Component* c);
	static ::javax::accessibility::AccessibleText* getAccessibleText(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::javax::accessibility::AccessibleValue* getAccessibleValue(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static int32_t getCharCount(::javax::accessibility::AccessibleText* at, ::java::awt::Component* c);
	static $ObjectArray* getChildren(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $ObjectArray* getChildrenAndRoles(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t whichChildren, bool allowIgnored);
	static ::java::lang::Number* getCurrentAccessibleValue(::javax::accessibility::AccessibleValue* av, ::java::awt::Component* c);
	static ::javax::accessibility::Accessible* getFocusOwner(::java::awt::Component* c);
	static $booleans* getInitialAttributeStates(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::java::awt::Point* getLocationOnScreen(::javax::accessibility::AccessibleComponent* ac, ::java::awt::Component* c);
	static ::java::lang::Number* getMaximumAccessibleValue(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::java::lang::Number* getMinimumAccessibleValue(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::java::awt::Dimension* getSize(::javax::accessibility::AccessibleComponent* ac, ::java::awt::Component* c);
	static int32_t getTableInfo(::javax::accessibility::Accessible* a, ::java::awt::Component* c, int32_t info);
	static $Object* invokeAndWait(::java::util::concurrent::Callable* callable, ::java::awt::Component* c);
	static $Object* invokeAndWait(::java::util::concurrent::Callable* callable, ::java::awt::Component* c, Object$* defValue);
	static void invokeLater(::java::lang::Runnable* runnable, ::java::awt::Component* c);
	static bool isAccessibleChildSelected(::javax::accessibility::Accessible* a, int32_t index, ::java::awt::Component* c);
	static bool isEnabled(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static bool isFocusTraversable(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static ::java::lang::Integer* lambda$getTableInfo$0(::javax::accessibility::Accessible* a, int32_t info);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	static void requestFocus(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static void requestSelection(::javax::accessibility::Accessible* a, ::java::awt::Component* c);
	static $String* roleKey(::javax::accessibility::AccessibleRole* aRole);
	static ::java::util::Set* ignoredRoles;
	static ::sun::lwawt::macosx::CAccessibility* sAccessibility;
	static const int32_t JAVA_AX_ALL_CHILDREN = (-1);
	static const int32_t JAVA_AX_SELECTED_CHILDREN = (-2);
	static const int32_t JAVA_AX_VISIBLE_CHILDREN = (-3);
	static const int32_t JAVA_AX_ROWS = 1;
	static const int32_t JAVA_AX_COLS = 2;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("JAVA_AX_ALL_CHILDREN")
#pragma pop_macro("JAVA_AX_COLS")
#pragma pop_macro("JAVA_AX_ROWS")
#pragma pop_macro("JAVA_AX_SELECTED_CHILDREN")
#pragma pop_macro("JAVA_AX_VISIBLE_CHILDREN")

#endif // _sun_lwawt_macosx_CAccessibility_h_