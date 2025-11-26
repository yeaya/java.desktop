#ifndef _sun_font_CoreMetrics_h_
#define _sun_font_CoreMetrics_h_
//$ class sun.font.CoreMetrics
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace font {
			class LineMetrics;
		}
	}
}

namespace sun {
	namespace font {

class CoreMetrics : public ::java::lang::Object {
	$class(CoreMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CoreMetrics();
	void init$(float ascent, float descent, float leading, float height, int32_t baselineIndex, $floats* baselineOffsets, float strikethroughOffset, float strikethroughThickness, float underlineOffset, float underlineThickness, float ssOffset, float italicAngle);
	float effectiveBaselineOffset($floats* fullOffsets);
	virtual bool equals(Object$* rhs) override;
	bool equals(::sun::font::CoreMetrics* rhs);
	static ::sun::font::CoreMetrics* get(::java::awt::font::LineMetrics* lm);
	virtual int32_t hashCode() override;
	float ascent = 0.0;
	float descent = 0.0;
	float leading = 0.0;
	float height = 0.0;
	int32_t baselineIndex = 0;
	$floats* baselineOffsets = nullptr;
	float strikethroughOffset = 0.0;
	float strikethroughThickness = 0.0;
	float underlineOffset = 0.0;
	float underlineThickness = 0.0;
	float ssOffset = 0.0;
	float italicAngle = 0.0;
};

	} // font
} // sun

#endif // _sun_font_CoreMetrics_h_