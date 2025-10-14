#ifndef _javax_swing_UIDefaults$LazyValue_h_
#define _javax_swing_UIDefaults$LazyValue_h_
//$ interface javax.swing.UIDefaults$LazyValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace javax {
	namespace swing {

class $export UIDefaults$LazyValue : public ::java::lang::Object {
	$interface(UIDefaults$LazyValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* createValue(::javax::swing::UIDefaults* table) {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_UIDefaults$LazyValue_h_