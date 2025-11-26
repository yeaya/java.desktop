#ifndef _javax_swing_UIDefaults$LazyInputMap_h_
#define _javax_swing_UIDefaults$LazyInputMap_h_
//$ class javax.swing.UIDefaults$LazyInputMap
//$ extends javax.swing.UIDefaults$LazyValue

#include <java/lang/Array.h>
#include <javax/swing/UIDefaults$LazyValue.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace javax {
	namespace swing {

class $export UIDefaults$LazyInputMap : public ::javax::swing::UIDefaults$LazyValue {
	$class(UIDefaults$LazyInputMap, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	UIDefaults$LazyInputMap();
	void init$($ObjectArray* bindings);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	$ObjectArray* bindings = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIDefaults$LazyInputMap_h_