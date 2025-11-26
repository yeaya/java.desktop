#ifndef _java_awt_font_FontRenderContext_h_
#define _java_awt_font_FontRenderContext_h_
//$ class java.awt.font.FontRenderContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}

namespace java {
	namespace awt {
		namespace font {

class $export FontRenderContext : public ::java::lang::Object {
	$class(FontRenderContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FontRenderContext();
	void init$();
	void init$(::java::awt::geom::AffineTransform* tx, bool isAntiAliased, bool usesFractionalMetrics);
	void init$(::java::awt::geom::AffineTransform* tx, Object$* aaHint, Object$* fmHint);
	virtual bool equals(Object$* obj) override;
	virtual bool equals(::java::awt::font::FontRenderContext* rhs);
	virtual $Object* getAntiAliasingHint();
	virtual $Object* getFractionalMetricsHint();
	virtual ::java::awt::geom::AffineTransform* getTransform();
	virtual int32_t getTransformType();
	virtual int32_t hashCode() override;
	virtual bool isAntiAliased();
	virtual bool isTransformed();
	virtual bool usesFractionalMetrics();
	::java::awt::geom::AffineTransform* tx = nullptr;
	$Object* aaHintValue = nullptr;
	$Object* fmHintValue = nullptr;
	bool defaulting = false;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_FontRenderContext_h_