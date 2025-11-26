#ifndef _javax_swing_plaf_nimbus_NimbusDefaults$DerivedFont_h_
#define _javax_swing_plaf_nimbus_NimbusDefaults$DerivedFont_h_
//$ class javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusDefaults$DerivedFont : public ::javax::swing::UIDefaults$ActiveValue {
	$class(NimbusDefaults$DerivedFont, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	NimbusDefaults$DerivedFont();
	void init$($String* key, float sizeOffset, ::java::lang::Boolean* bold, ::java::lang::Boolean* italic);
	virtual $Object* createValue(::javax::swing::UIDefaults* defaults) override;
	float sizeOffset = 0.0;
	::java::lang::Boolean* bold = nullptr;
	::java::lang::Boolean* italic = nullptr;
	$String* parentKey = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusDefaults$DerivedFont_h_