#ifndef _sun_swing_plaf_synth_Paint9Painter$PaintType_h_
#define _sun_swing_plaf_synth_Paint9Painter$PaintType_h_
//$ class sun.swing.plaf.synth.Paint9Painter$PaintType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("PAINT9_STRETCH")
#undef PAINT9_STRETCH
#pragma push_macro("PAINT9_TILE")
#undef PAINT9_TILE
#pragma push_macro("TILE")
#undef TILE

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import Paint9Painter$PaintType : public ::java::lang::Enum {
	$class(Paint9Painter$PaintType, 0, ::java::lang::Enum)
public:
	Paint9Painter$PaintType();
	static $Array<::sun::swing::plaf::synth::Paint9Painter$PaintType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::swing::plaf::synth::Paint9Painter$PaintType* valueOf($String* name);
	static $Array<::sun::swing::plaf::synth::Paint9Painter$PaintType>* values();
	static ::sun::swing::plaf::synth::Paint9Painter$PaintType* CENTER;
	static ::sun::swing::plaf::synth::Paint9Painter$PaintType* TILE;
	static ::sun::swing::plaf::synth::Paint9Painter$PaintType* PAINT9_STRETCH;
	static ::sun::swing::plaf::synth::Paint9Painter$PaintType* PAINT9_TILE;
	static $Array<::sun::swing::plaf::synth::Paint9Painter$PaintType>* $VALUES;
};

			} // synth
		} // plaf
	} // swing
} // sun

#pragma pop_macro("CENTER")
#pragma pop_macro("PAINT9_STRETCH")
#pragma pop_macro("PAINT9_TILE")
#pragma pop_macro("TILE")

#endif // _sun_swing_plaf_synth_Paint9Painter$PaintType_h_