#ifndef _java_awt_RenderingHints_h_
#define _java_awt_RenderingHints_h_
//$ class java.awt.RenderingHints
//$ extends java.util.Map
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <java/util/Map.h>

#pragma push_macro("KEY_ALPHA_INTERPOLATION")
#undef KEY_ALPHA_INTERPOLATION
#pragma push_macro("KEY_ANTIALIASING")
#undef KEY_ANTIALIASING
#pragma push_macro("KEY_COLOR_RENDERING")
#undef KEY_COLOR_RENDERING
#pragma push_macro("KEY_DITHERING")
#undef KEY_DITHERING
#pragma push_macro("KEY_FRACTIONALMETRICS")
#undef KEY_FRACTIONALMETRICS
#pragma push_macro("KEY_INTERPOLATION")
#undef KEY_INTERPOLATION
#pragma push_macro("KEY_RENDERING")
#undef KEY_RENDERING
#pragma push_macro("KEY_RESOLUTION_VARIANT")
#undef KEY_RESOLUTION_VARIANT
#pragma push_macro("KEY_STROKE_CONTROL")
#undef KEY_STROKE_CONTROL
#pragma push_macro("KEY_TEXT_ANTIALIASING")
#undef KEY_TEXT_ANTIALIASING
#pragma push_macro("KEY_TEXT_LCD_CONTRAST")
#undef KEY_TEXT_LCD_CONTRAST
#pragma push_macro("VALUE_ALPHA_INTERPOLATION_DEFAULT")
#undef VALUE_ALPHA_INTERPOLATION_DEFAULT
#pragma push_macro("VALUE_ALPHA_INTERPOLATION_QUALITY")
#undef VALUE_ALPHA_INTERPOLATION_QUALITY
#pragma push_macro("VALUE_ALPHA_INTERPOLATION_SPEED")
#undef VALUE_ALPHA_INTERPOLATION_SPEED
#pragma push_macro("VALUE_ANTIALIAS_DEFAULT")
#undef VALUE_ANTIALIAS_DEFAULT
#pragma push_macro("VALUE_ANTIALIAS_OFF")
#undef VALUE_ANTIALIAS_OFF
#pragma push_macro("VALUE_ANTIALIAS_ON")
#undef VALUE_ANTIALIAS_ON
#pragma push_macro("VALUE_COLOR_RENDER_DEFAULT")
#undef VALUE_COLOR_RENDER_DEFAULT
#pragma push_macro("VALUE_COLOR_RENDER_QUALITY")
#undef VALUE_COLOR_RENDER_QUALITY
#pragma push_macro("VALUE_COLOR_RENDER_SPEED")
#undef VALUE_COLOR_RENDER_SPEED
#pragma push_macro("VALUE_DITHER_DEFAULT")
#undef VALUE_DITHER_DEFAULT
#pragma push_macro("VALUE_DITHER_DISABLE")
#undef VALUE_DITHER_DISABLE
#pragma push_macro("VALUE_DITHER_ENABLE")
#undef VALUE_DITHER_ENABLE
#pragma push_macro("VALUE_FRACTIONALMETRICS_DEFAULT")
#undef VALUE_FRACTIONALMETRICS_DEFAULT
#pragma push_macro("VALUE_FRACTIONALMETRICS_OFF")
#undef VALUE_FRACTIONALMETRICS_OFF
#pragma push_macro("VALUE_FRACTIONALMETRICS_ON")
#undef VALUE_FRACTIONALMETRICS_ON
#pragma push_macro("VALUE_INTERPOLATION_BICUBIC")
#undef VALUE_INTERPOLATION_BICUBIC
#pragma push_macro("VALUE_INTERPOLATION_BILINEAR")
#undef VALUE_INTERPOLATION_BILINEAR
#pragma push_macro("VALUE_INTERPOLATION_NEAREST_NEIGHBOR")
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR
#pragma push_macro("VALUE_RENDER_DEFAULT")
#undef VALUE_RENDER_DEFAULT
#pragma push_macro("VALUE_RENDER_QUALITY")
#undef VALUE_RENDER_QUALITY
#pragma push_macro("VALUE_RENDER_SPEED")
#undef VALUE_RENDER_SPEED
#pragma push_macro("VALUE_RESOLUTION_VARIANT_BASE")
#undef VALUE_RESOLUTION_VARIANT_BASE
#pragma push_macro("VALUE_RESOLUTION_VARIANT_DEFAULT")
#undef VALUE_RESOLUTION_VARIANT_DEFAULT
#pragma push_macro("VALUE_RESOLUTION_VARIANT_DPI_FIT")
#undef VALUE_RESOLUTION_VARIANT_DPI_FIT
#pragma push_macro("VALUE_RESOLUTION_VARIANT_SIZE_FIT")
#undef VALUE_RESOLUTION_VARIANT_SIZE_FIT
#pragma push_macro("VALUE_STROKE_DEFAULT")
#undef VALUE_STROKE_DEFAULT
#pragma push_macro("VALUE_STROKE_NORMALIZE")
#undef VALUE_STROKE_NORMALIZE
#pragma push_macro("VALUE_STROKE_PURE")
#undef VALUE_STROKE_PURE
#pragma push_macro("VALUE_TEXT_ANTIALIAS_DEFAULT")
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#pragma push_macro("VALUE_TEXT_ANTIALIAS_GASP")
#undef VALUE_TEXT_ANTIALIAS_GASP
#pragma push_macro("VALUE_TEXT_ANTIALIAS_LCD_HBGR")
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#pragma push_macro("VALUE_TEXT_ANTIALIAS_LCD_HRGB")
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#pragma push_macro("VALUE_TEXT_ANTIALIAS_LCD_VBGR")
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#pragma push_macro("VALUE_TEXT_ANTIALIAS_LCD_VRGB")
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#pragma push_macro("VALUE_TEXT_ANTIALIAS_OFF")
#undef VALUE_TEXT_ANTIALIAS_OFF
#pragma push_macro("VALUE_TEXT_ANTIALIAS_ON")
#undef VALUE_TEXT_ANTIALIAS_ON

namespace java {
	namespace awt {
		class RenderingHints$Key;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class Set;
	}
}

namespace java {
	namespace awt {

class $export RenderingHints : public ::java::util::Map, public ::java::lang::Cloneable {
	$class(RenderingHints, 0, ::java::util::Map, ::java::lang::Cloneable)
public:
	RenderingHints();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$(::java::util::Map* init);
	void init$(::java::awt::RenderingHints$Key* key, Object$* value);
	virtual void add(::java::awt::RenderingHints* hints);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(Object$* key) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	::java::util::HashMap* hintmap = nullptr;
	static ::java::awt::RenderingHints$Key* KEY_ANTIALIASING;
	static $Object* VALUE_ANTIALIAS_ON;
	static $Object* VALUE_ANTIALIAS_OFF;
	static $Object* VALUE_ANTIALIAS_DEFAULT;
	static ::java::awt::RenderingHints$Key* KEY_RENDERING;
	static $Object* VALUE_RENDER_SPEED;
	static $Object* VALUE_RENDER_QUALITY;
	static $Object* VALUE_RENDER_DEFAULT;
	static ::java::awt::RenderingHints$Key* KEY_DITHERING;
	static $Object* VALUE_DITHER_DISABLE;
	static $Object* VALUE_DITHER_ENABLE;
	static $Object* VALUE_DITHER_DEFAULT;
	static ::java::awt::RenderingHints$Key* KEY_TEXT_ANTIALIASING;
	static $Object* VALUE_TEXT_ANTIALIAS_ON;
	static $Object* VALUE_TEXT_ANTIALIAS_OFF;
	static $Object* VALUE_TEXT_ANTIALIAS_DEFAULT;
	static $Object* VALUE_TEXT_ANTIALIAS_GASP;
	static $Object* VALUE_TEXT_ANTIALIAS_LCD_HRGB;
	static $Object* VALUE_TEXT_ANTIALIAS_LCD_HBGR;
	static $Object* VALUE_TEXT_ANTIALIAS_LCD_VRGB;
	static $Object* VALUE_TEXT_ANTIALIAS_LCD_VBGR;
	static ::java::awt::RenderingHints$Key* KEY_TEXT_LCD_CONTRAST;
	static ::java::awt::RenderingHints$Key* KEY_FRACTIONALMETRICS;
	static $Object* VALUE_FRACTIONALMETRICS_OFF;
	static $Object* VALUE_FRACTIONALMETRICS_ON;
	static $Object* VALUE_FRACTIONALMETRICS_DEFAULT;
	static ::java::awt::RenderingHints$Key* KEY_INTERPOLATION;
	static $Object* VALUE_INTERPOLATION_NEAREST_NEIGHBOR;
	static $Object* VALUE_INTERPOLATION_BILINEAR;
	static $Object* VALUE_INTERPOLATION_BICUBIC;
	static ::java::awt::RenderingHints$Key* KEY_ALPHA_INTERPOLATION;
	static $Object* VALUE_ALPHA_INTERPOLATION_SPEED;
	static $Object* VALUE_ALPHA_INTERPOLATION_QUALITY;
	static $Object* VALUE_ALPHA_INTERPOLATION_DEFAULT;
	static ::java::awt::RenderingHints$Key* KEY_COLOR_RENDERING;
	static $Object* VALUE_COLOR_RENDER_SPEED;
	static $Object* VALUE_COLOR_RENDER_QUALITY;
	static $Object* VALUE_COLOR_RENDER_DEFAULT;
	static ::java::awt::RenderingHints$Key* KEY_STROKE_CONTROL;
	static $Object* VALUE_STROKE_DEFAULT;
	static $Object* VALUE_STROKE_NORMALIZE;
	static $Object* VALUE_STROKE_PURE;
	static ::java::awt::RenderingHints$Key* KEY_RESOLUTION_VARIANT;
	static $Object* VALUE_RESOLUTION_VARIANT_DEFAULT;
	static $Object* VALUE_RESOLUTION_VARIANT_BASE;
	static $Object* VALUE_RESOLUTION_VARIANT_SIZE_FIT;
	static $Object* VALUE_RESOLUTION_VARIANT_DPI_FIT;
};

	} // awt
} // java

#pragma pop_macro("KEY_ALPHA_INTERPOLATION")
#pragma pop_macro("KEY_ANTIALIASING")
#pragma pop_macro("KEY_COLOR_RENDERING")
#pragma pop_macro("KEY_DITHERING")
#pragma pop_macro("KEY_FRACTIONALMETRICS")
#pragma pop_macro("KEY_INTERPOLATION")
#pragma pop_macro("KEY_RENDERING")
#pragma pop_macro("KEY_RESOLUTION_VARIANT")
#pragma pop_macro("KEY_STROKE_CONTROL")
#pragma pop_macro("KEY_TEXT_ANTIALIASING")
#pragma pop_macro("KEY_TEXT_LCD_CONTRAST")
#pragma pop_macro("VALUE_ALPHA_INTERPOLATION_DEFAULT")
#pragma pop_macro("VALUE_ALPHA_INTERPOLATION_QUALITY")
#pragma pop_macro("VALUE_ALPHA_INTERPOLATION_SPEED")
#pragma pop_macro("VALUE_ANTIALIAS_DEFAULT")
#pragma pop_macro("VALUE_ANTIALIAS_OFF")
#pragma pop_macro("VALUE_ANTIALIAS_ON")
#pragma pop_macro("VALUE_COLOR_RENDER_DEFAULT")
#pragma pop_macro("VALUE_COLOR_RENDER_QUALITY")
#pragma pop_macro("VALUE_COLOR_RENDER_SPEED")
#pragma pop_macro("VALUE_DITHER_DEFAULT")
#pragma pop_macro("VALUE_DITHER_DISABLE")
#pragma pop_macro("VALUE_DITHER_ENABLE")
#pragma pop_macro("VALUE_FRACTIONALMETRICS_DEFAULT")
#pragma pop_macro("VALUE_FRACTIONALMETRICS_OFF")
#pragma pop_macro("VALUE_FRACTIONALMETRICS_ON")
#pragma pop_macro("VALUE_INTERPOLATION_BICUBIC")
#pragma pop_macro("VALUE_INTERPOLATION_BILINEAR")
#pragma pop_macro("VALUE_INTERPOLATION_NEAREST_NEIGHBOR")
#pragma pop_macro("VALUE_RENDER_DEFAULT")
#pragma pop_macro("VALUE_RENDER_QUALITY")
#pragma pop_macro("VALUE_RENDER_SPEED")
#pragma pop_macro("VALUE_RESOLUTION_VARIANT_BASE")
#pragma pop_macro("VALUE_RESOLUTION_VARIANT_DEFAULT")
#pragma pop_macro("VALUE_RESOLUTION_VARIANT_DPI_FIT")
#pragma pop_macro("VALUE_RESOLUTION_VARIANT_SIZE_FIT")
#pragma pop_macro("VALUE_STROKE_DEFAULT")
#pragma pop_macro("VALUE_STROKE_NORMALIZE")
#pragma pop_macro("VALUE_STROKE_PURE")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_DEFAULT")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_GASP")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_LCD_HBGR")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_LCD_HRGB")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_LCD_VBGR")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_LCD_VRGB")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_OFF")
#pragma pop_macro("VALUE_TEXT_ANTIALIAS_ON")

#endif // _java_awt_RenderingHints_h_