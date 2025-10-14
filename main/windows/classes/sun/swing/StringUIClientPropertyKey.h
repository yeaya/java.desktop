#ifndef _sun_swing_StringUIClientPropertyKey_h_
#define _sun_swing_StringUIClientPropertyKey_h_
//$ class sun.swing.StringUIClientPropertyKey
//$ extends javax.swing.UIClientPropertyKey

#include <javax/swing/UIClientPropertyKey.h>

namespace sun {
	namespace swing {

class $export StringUIClientPropertyKey : public ::javax::swing::UIClientPropertyKey {
	$class(StringUIClientPropertyKey, $NO_CLASS_INIT, ::javax::swing::UIClientPropertyKey)
public:
	StringUIClientPropertyKey();
	void init$($String* key);
	virtual $String* toString() override;
	$String* key = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_StringUIClientPropertyKey_h_