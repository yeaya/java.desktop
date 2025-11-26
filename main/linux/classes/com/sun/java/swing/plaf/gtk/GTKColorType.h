#ifndef _com_sun_java_swing_plaf_gtk_GTKColorType_h_
#define _com_sun_java_swing_plaf_gtk_GTKColorType_h_
//$ class com.sun.java.swing.plaf.gtk.GTKColorType
//$ extends javax.swing.plaf.synth.ColorType

#include <java/lang/Array.h>
#include <javax/swing/plaf/synth/ColorType.h>

#pragma push_macro("BLACK")
#undef BLACK
#pragma push_macro("DARK")
#undef DARK
#pragma push_macro("HLS_COLORS")
#undef HLS_COLORS
#pragma push_macro("HLS_COLOR_LOCK")
#undef HLS_COLOR_LOCK
#pragma push_macro("LIGHT")
#undef LIGHT
#pragma push_macro("MAX_COUNT")
#undef MAX_COUNT
#pragma push_macro("MID")
#undef MID
#pragma push_macro("WHITE")
#undef WHITE

namespace java {
	namespace awt {
		class Color;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKColorType : public ::javax::swing::plaf::synth::ColorType {
	$class(GTKColorType, 0, ::javax::swing::plaf::synth::ColorType)
public:
	GTKColorType();
	void init$($String* name);
	static ::java::awt::Color* adjustColor(::java::awt::Color* color, float hFactor, float lFactor, float sFactor);
	static int32_t hlsToRGB(float h, float l, float s);
	static float hlsValue(float n1, float n2, float h);
	static $floats* rgbToHLS(int32_t rgb, $floats* hls);
	static ::javax::swing::plaf::synth::ColorType* LIGHT;
	static ::javax::swing::plaf::synth::ColorType* DARK;
	static ::javax::swing::plaf::synth::ColorType* MID;
	static ::javax::swing::plaf::synth::ColorType* BLACK;
	static ::javax::swing::plaf::synth::ColorType* WHITE;
	static int32_t MAX_COUNT;
	static $floats* HLS_COLORS;
	static $Object* HLS_COLOR_LOCK;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BLACK")
#pragma pop_macro("DARK")
#pragma pop_macro("HLS_COLORS")
#pragma pop_macro("HLS_COLOR_LOCK")
#pragma pop_macro("LIGHT")
#pragma pop_macro("MAX_COUNT")
#pragma pop_macro("MID")
#pragma pop_macro("WHITE")

#endif // _com_sun_java_swing_plaf_gtk_GTKColorType_h_