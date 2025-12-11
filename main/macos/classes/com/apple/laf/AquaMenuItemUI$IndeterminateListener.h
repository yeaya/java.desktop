#ifndef _com_apple_laf_AquaMenuItemUI$IndeterminateListener_h_
#define _com_apple_laf_AquaMenuItemUI$IndeterminateListener_h_
//$ class com.apple.laf.AquaMenuItemUI$IndeterminateListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

#pragma push_macro("CLIENT_PROPERTY_KEY")
#undef CLIENT_PROPERTY_KEY

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JMenuItem;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaMenuItemUI$IndeterminateListener : public ::java::beans::PropertyChangeListener {
	$class(AquaMenuItemUI$IndeterminateListener, 0, ::java::beans::PropertyChangeListener)
public:
	AquaMenuItemUI$IndeterminateListener();
	void init$();
	static void apply(::javax::swing::JMenuItem* menuItem, Object$* value);
	static void install(::javax::swing::JMenuItem* menuItem);
	static bool isIndeterminate(::javax::swing::JMenuItem* menuItem);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	static void uninstall(::javax::swing::JMenuItem* menuItem);
	static $String* CLIENT_PROPERTY_KEY;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("CLIENT_PROPERTY_KEY")

#endif // _com_apple_laf_AquaMenuItemUI$IndeterminateListener_h_