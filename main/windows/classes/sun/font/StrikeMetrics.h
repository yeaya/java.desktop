#ifndef _sun_font_StrikeMetrics_h_
#define _sun_font_StrikeMetrics_h_
//$ class sun.font.StrikeMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}

namespace sun {
	namespace font {

class StrikeMetrics : public ::java::lang::Object {
	$class(StrikeMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StrikeMetrics();
	void init$();
	void init$(float ax, float ay, float dx, float dy, float bx, float by, float lx, float ly, float mx, float my);
	void convertToUserSpace(::java::awt::geom::AffineTransform* invTx);
	float getAscent();
	float getDescent();
	float getLeading();
	float getMaxAdvance();
	void merge(::sun::font::StrikeMetrics* other);
	virtual $String* toString() override;
	float ascentX = 0.0;
	float ascentY = 0.0;
	float descentX = 0.0;
	float descentY = 0.0;
	float baselineX = 0.0;
	float baselineY = 0.0;
	float leadingX = 0.0;
	float leadingY = 0.0;
	float maxAdvanceX = 0.0;
	float maxAdvanceY = 0.0;
};

	} // font
} // sun

#endif // _sun_font_StrikeMetrics_h_