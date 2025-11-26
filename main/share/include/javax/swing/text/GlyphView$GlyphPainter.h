#ifndef _javax_swing_text_GlyphView$GlyphPainter_h_
#define _javax_swing_text_GlyphView$GlyphPainter_h_
//$ class javax.swing.text.GlyphView$GlyphPainter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
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

class $import GlyphView$GlyphPainter : public ::java::lang::Object {
	$class(GlyphView$GlyphPainter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlyphView$GlyphPainter();
	void init$();
	virtual float getAscent(::javax::swing::text::GlyphView* v) {return 0.0;}
	virtual int32_t getBoundedPosition(::javax::swing::text::GlyphView* v, int32_t p0, float x, float len) {return 0;}
	virtual float getDescent(::javax::swing::text::GlyphView* v) {return 0.0;}
	virtual float getHeight(::javax::swing::text::GlyphView* v) {return 0.0;}
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::GlyphView* v, int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	virtual ::javax::swing::text::GlyphView$GlyphPainter* getPainter(::javax::swing::text::GlyphView* v, int32_t p0, int32_t p1);
	virtual float getSpan(::javax::swing::text::GlyphView* v, int32_t p0, int32_t p1, ::javax::swing::text::TabExpander* e, float x) {return 0.0;}
	virtual ::java::awt::Shape* modelToView(::javax::swing::text::GlyphView* v, int32_t pos, ::javax::swing::text::Position$Bias* bias, ::java::awt::Shape* a) {return nullptr;}
	virtual void paint(::javax::swing::text::GlyphView* v, ::java::awt::Graphics* g, ::java::awt::Shape* a, int32_t p0, int32_t p1) {}
	virtual int32_t viewToModel(::javax::swing::text::GlyphView* v, float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* biasReturn) {return 0;}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GlyphView$GlyphPainter_h_