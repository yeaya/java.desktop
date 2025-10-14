#ifndef _com_sun_java_swing_plaf_windows_WindowsIconFactory$VistaMenuItemCheckIconFactory_h_
#define _com_sun_java_swing_plaf_windows_WindowsIconFactory$VistaMenuItemCheckIconFactory_h_
//$ class com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory
//$ extends sun.swing.MenuItemCheckIconFactory

#include <sun/swing/MenuItemCheckIconFactory.h>

#pragma push_macro("OFFSET")
#undef OFFSET

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JMenuItem;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsIconFactory$VistaMenuItemCheckIconFactory : public ::sun::swing::MenuItemCheckIconFactory {
	$class(WindowsIconFactory$VistaMenuItemCheckIconFactory, $NO_CLASS_INIT, ::sun::swing::MenuItemCheckIconFactory)
public:
	WindowsIconFactory$VistaMenuItemCheckIconFactory();
	void init$();
	virtual ::javax::swing::Icon* getIcon(::javax::swing::JMenuItem* component) override;
	virtual ::javax::swing::Icon* getIcon($String* type);
	static int32_t getIconWidth();
	static $Class* getType(::java::awt::Component* c);
	static $Class* getType($String* type);
	virtual bool isCompatible(Object$* icon, $String* prefix) override;
	static const int32_t OFFSET = 3;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("OFFSET")

#endif // _com_sun_java_swing_plaf_windows_WindowsIconFactory$VistaMenuItemCheckIconFactory_h_