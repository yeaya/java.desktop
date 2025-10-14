#ifndef _sun_swing_SwingAccessor$UIDefaultsAccessor_h_
#define _sun_swing_SwingAccessor$UIDefaultsAccessor_h_
//$ interface sun.swing.SwingAccessor$UIDefaultsAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace sun {
	namespace swing {

class $import SwingAccessor$UIDefaultsAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$UIDefaultsAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addInternalBundle(::javax::swing::UIDefaults* uiDefaults, $String* bundleName) {}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$UIDefaultsAccessor_h_