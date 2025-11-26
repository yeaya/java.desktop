#ifndef _javax_swing_plaf_nimbus_ImageScalingHelper$PaintType_h_
#define _javax_swing_plaf_nimbus_ImageScalingHelper$PaintType_h_
//$ class javax.swing.plaf.nimbus.ImageScalingHelper$PaintType
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ImageScalingHelper$PaintType : public ::java::lang::Enum {
	$class(ImageScalingHelper$PaintType, 0, ::java::lang::Enum)
public:
	ImageScalingHelper$PaintType();
	static $Array<::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType* valueOf($String* name);
	static $Array<::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType>* values();
	static ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType* CENTER;
	static ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType* TILE;
	static ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType* PAINT9_STRETCH;
	static ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType* PAINT9_TILE;
	static $Array<::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType>* $VALUES;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CENTER")
#pragma pop_macro("PAINT9_STRETCH")
#pragma pop_macro("PAINT9_TILE")
#pragma pop_macro("TILE")

#endif // _javax_swing_plaf_nimbus_ImageScalingHelper$PaintType_h_