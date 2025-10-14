#ifndef _javax_swing_plaf_nimbus_Effect$EffectType_h_
#define _javax_swing_plaf_nimbus_Effect$EffectType_h_
//$ class javax.swing.plaf.nimbus.Effect$EffectType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLENDED")
#undef BLENDED
#pragma push_macro("OVER")
#undef OVER
#pragma push_macro("UNDER")
#undef UNDER

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class Effect$EffectType : public ::java::lang::Enum {
	$class(Effect$EffectType, 0, ::java::lang::Enum)
public:
	Effect$EffectType();
	static $Array<::javax::swing::plaf::nimbus::Effect$EffectType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::plaf::nimbus::Effect$EffectType* valueOf($String* name);
	static $Array<::javax::swing::plaf::nimbus::Effect$EffectType>* values();
	static ::javax::swing::plaf::nimbus::Effect$EffectType* UNDER;
	static ::javax::swing::plaf::nimbus::Effect$EffectType* BLENDED;
	static ::javax::swing::plaf::nimbus::Effect$EffectType* OVER;
	static $Array<::javax::swing::plaf::nimbus::Effect$EffectType>* $VALUES;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BLENDED")
#pragma pop_macro("OVER")
#pragma pop_macro("UNDER")

#endif // _javax_swing_plaf_nimbus_Effect$EffectType_h_