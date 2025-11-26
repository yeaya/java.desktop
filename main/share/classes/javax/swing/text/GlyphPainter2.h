#ifndef _javax_swing_text_GlyphPainter2_h_
#define _javax_swing_text_GlyphPainter2_h_
//$ class javax.swing.text.GlyphPainter2
//$ extends javax.swing.text.GlyphView$GlyphPainter

#include <java/lang/Array.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class TextLayout;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class GlyphView;
			class Position$Bias;
			class TabExpander;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class GlyphPainter2 : public ::javax::swing::text::GlyphView$GlyphPainter {
	$class(GlyphPainter2, $NO_CLASS_INIT, ::javax::swing::text::GlyphView$GlyphPainter)
public:
	GlyphPainter2();
	void init$(::java::awt::font::TextLayout* layout);
	virtual float getAscent(::javax::swing::text::GlyphView* v) override;
	virtual int32_t getBoundedPosition(::javax::swing::text::GlyphView* v, int32_t p0, float x, float len) override;
	virtual float getDescent(::javax::swing::text::GlyphView* v) override;
	virtual float getHeight(::javax::swing::text::GlyphView* v) override;
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::GlyphView* v, int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual ::javax::swing::text::GlyphView$GlyphPainter* getPainter(::javax::swing::text::GlyphView* v, int32_t p0, int32_t p1) override;
	virtual float getSpan(::javax::swing::text::GlyphView* v, int32_t p0, int32_t p1, ::javax::swing::text::TabExpander* e, float x) override;
	virtual ::java::awt::Shape* modelToView(::javax::swing::text::GlyphView* v, int32_t pos, ::javax::swing::text::Position$Bias* bias, ::java::awt::Shape* a) override;
	virtual void paint(::javax::swing::text::GlyphView* v, ::java::awt::Graphics* g, ::java::awt::Shape* a, int32_t p0, int32_t p1) override;
	virtual int32_t viewToModel(::javax::swing::text::GlyphView* v, float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* biasReturn) override;
	::java::awt::font::TextLayout* layout = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GlyphPainter2_h_