#ifndef _javax_swing_plaf_nimbus_AbstractRegionPainter$PaintContext$CacheMode_h_
#define _javax_swing_plaf_nimbus_AbstractRegionPainter$PaintContext$CacheMode_h_
//$ class javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext$CacheMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FIXED_SIZES")
#undef FIXED_SIZES
#pragma push_macro("NINE_SQUARE_SCALE")
#undef NINE_SQUARE_SCALE
#pragma push_macro("NO_CACHING")
#undef NO_CACHING

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class $import AbstractRegionPainter$PaintContext$CacheMode : public ::java::lang::Enum {
	$class(AbstractRegionPainter$PaintContext$CacheMode, 0, ::java::lang::Enum)
public:
	AbstractRegionPainter$PaintContext$CacheMode();
	static $Array<::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* valueOf($String* name);
	static $Array<::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode>* values();
	static ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* NO_CACHING;
	static ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* FIXED_SIZES;
	static ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode* NINE_SQUARE_SCALE;
	static $Array<::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode>* $VALUES;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FIXED_SIZES")
#pragma pop_macro("NINE_SQUARE_SCALE")
#pragma pop_macro("NO_CACHING")

#endif // _javax_swing_plaf_nimbus_AbstractRegionPainter$PaintContext$CacheMode_h_