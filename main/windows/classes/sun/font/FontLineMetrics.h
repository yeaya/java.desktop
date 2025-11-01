#ifndef _sun_font_FontLineMetrics_h_
#define _sun_font_FontLineMetrics_h_
//$ class sun.font.FontLineMetrics
//$ extends java.awt.font.LineMetrics
//$ implements java.lang.Cloneable

#include <java/awt/font/LineMetrics.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}
namespace sun {
	namespace font {
		class CoreMetrics;
	}
}

namespace sun {
	namespace font {

class FontLineMetrics : public ::java::awt::font::LineMetrics, public ::java::lang::Cloneable {
	$class(FontLineMetrics, $NO_CLASS_INIT, ::java::awt::font::LineMetrics, ::java::lang::Cloneable)
public:
	FontLineMetrics();
	virtual void finalize() override;
	void init$(int32_t numchars, ::sun::font::CoreMetrics* cm, ::java::awt::font::FontRenderContext* frc);
	virtual $Object* clone() override;
	virtual bool equals(Object$* rhs) override;
	virtual float getAscent() override;
	virtual int32_t getBaselineIndex() override;
	virtual $floats* getBaselineOffsets() override;
	virtual float getDescent() override;
	virtual float getHeight() override;
	virtual float getLeading() override;
	virtual int32_t getNumChars() override;
	virtual float getStrikethroughOffset() override;
	virtual float getStrikethroughThickness() override;
	virtual float getUnderlineOffset() override;
	virtual float getUnderlineThickness() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int32_t numchars = 0;
	::sun::font::CoreMetrics* cm = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
};

	} // font
} // sun

#endif // _sun_font_FontLineMetrics_h_