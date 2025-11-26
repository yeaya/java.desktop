#ifndef _javax_swing_plaf_synth_ColorType_h_
#define _javax_swing_plaf_synth_ColorType_h_
//$ class javax.swing.plaf.synth.ColorType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BACKGROUND")
#undef BACKGROUND
#pragma push_macro("FOCUS")
#undef FOCUS
#pragma push_macro("FOREGROUND")
#undef FOREGROUND
#pragma push_macro("MAX_COUNT")
#undef MAX_COUNT
#pragma push_macro("TEXT_BACKGROUND")
#undef TEXT_BACKGROUND
#pragma push_macro("TEXT_FOREGROUND")
#undef TEXT_FOREGROUND

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export ColorType : public ::java::lang::Object {
	$class(ColorType, 0, ::java::lang::Object)
public:
	ColorType();
	void init$($String* description);
	int32_t getID();
	virtual $String* toString() override;
	static ::javax::swing::plaf::synth::ColorType* FOREGROUND;
	static ::javax::swing::plaf::synth::ColorType* BACKGROUND;
	static ::javax::swing::plaf::synth::ColorType* TEXT_FOREGROUND;
	static ::javax::swing::plaf::synth::ColorType* TEXT_BACKGROUND;
	static ::javax::swing::plaf::synth::ColorType* FOCUS;
	static int32_t MAX_COUNT;
	static int32_t nextID;
	$String* description = nullptr;
	int32_t index = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BACKGROUND")
#pragma pop_macro("FOCUS")
#pragma pop_macro("FOREGROUND")
#pragma pop_macro("MAX_COUNT")
#pragma pop_macro("TEXT_BACKGROUND")
#pragma pop_macro("TEXT_FOREGROUND")

#endif // _javax_swing_plaf_synth_ColorType_h_