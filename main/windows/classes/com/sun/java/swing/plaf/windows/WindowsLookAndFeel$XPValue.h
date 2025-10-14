#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPValue_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPValue_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

#pragma push_macro("NULL_VALUE")
#undef NULL_VALUE

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsLookAndFeel$XPValue : public ::javax::swing::UIDefaults$ActiveValue {
	$class(WindowsLookAndFeel$XPValue, 0, ::javax::swing::UIDefaults$ActiveValue)
public:
	WindowsLookAndFeel$XPValue();
	void init$(Object$* xpValue, Object$* classicValue);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	virtual $Object* getClassicValue(::javax::swing::UIDefaults* table);
	virtual $Object* getXPValue(::javax::swing::UIDefaults* table);
	$Object* recursiveCreateValue(Object$* value, ::javax::swing::UIDefaults* table);
	$Object* classicValue = nullptr;
	$Object* xpValue = nullptr;
	static $Object* NULL_VALUE;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("NULL_VALUE")

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$XPValue_h_