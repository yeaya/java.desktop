#ifndef _javax_swing_UIDefaults$ActiveValue_h_
#define _javax_swing_UIDefaults$ActiveValue_h_
//$ interface javax.swing.UIDefaults$ActiveValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace javax {
	namespace swing {

class $export UIDefaults$ActiveValue : public ::java::lang::Object {
	$interface(UIDefaults$ActiveValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* createValue(::javax::swing::UIDefaults* table) {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_UIDefaults$ActiveValue_h_