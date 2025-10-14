#ifndef _Test8051548_h_
#define _Test8051548_h_
//$ class Test8051548
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TABS")
#undef TABS

namespace java {
	namespace awt {
		class Color;
		class Component;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace javax {
	namespace swing {
		class JColorChooser;
		class JFrame;
	}
}

class $export Test8051548 : public ::java::lang::Object {
	$class(Test8051548, 0, ::java::lang::Object)
public:
	Test8051548();
	void init$();
	static bool colorHasAlpha();
	static void createAndShowGUI();
	static ::java::awt::Component* findComponent(::java::awt::Component* component, $String* name);
	static ::java::awt::Component* findComponent(::java::awt::Component* component, ::java::util::function::Predicate* predicate);
	static ::java::awt::Component* findTextField(::java::awt::Component* component, $String* value);
	static bool lambda$findComponent$6($String* name, ::java::awt::Component* comp);
	static bool lambda$findTextField$7($String* value, ::java::awt::Component* comp);
	static void lambda$main$0();
	static void lambda$testColorPanels$1();
	static void lambda$testColorPanels$2(::java::beans::PropertyChangeEvent* e);
	static void lambda$testColorPanels$3($String* tab, $String* initialValue);
	static void lambda$testShowDialog$4(int32_t alphaValue, bool colorTransparencySelectionEnabled);
	static void lambda$testShowDialog$5();
	static void main($StringArray* args);
	static void testColorPanels();
	static void testShowDialog(bool colorTransparencySelectionEnabled);
	static $Array<::java::lang::String, 2>* TABS;
	static ::javax::swing::JColorChooser* colorChooser;
	static bool propertyChangeListenerInvoked;
	static $volatile(::java::awt::Color*) color;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("TABS")

#endif // _Test8051548_h_