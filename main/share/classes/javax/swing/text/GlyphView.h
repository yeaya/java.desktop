#ifndef _javax_swing_text_GlyphView_h_
#define _javax_swing_text_GlyphView_h_
//$ class javax.swing.text.GlyphView
//$ extends javax.swing.text.View
//$ implements javax.swing.text.TabableView,java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/text/TabableView.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
		class Graphics;
		class Shape;
	}
}
namespace java {
	namespace text {
		class BreakIterator;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class GlyphView$GlyphPainter;
			class GlyphView$JustificationInfo;
			class Position$Bias;
			class Segment;
			class TabExpander;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export GlyphView : public ::javax::swing::text::View, public ::javax::swing::text::TabableView, public ::java::lang::Cloneable {
	$class(GlyphView, $NO_CLASS_INIT, ::javax::swing::text::View, ::javax::swing::text::TabableView, ::java::lang::Cloneable)
public:
	GlyphView();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::View* breakView(int32_t axis, int32_t p0, float pos, float len) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void checkPainter();
	virtual $Object* clone() override;
	virtual ::javax::swing::text::View* createFragment(int32_t p0, int32_t p1) override;
	virtual float getAlignment(int32_t axis) override;
	virtual ::java::awt::Color* getBackground();
	int32_t getBreakSpot(int32_t p0, int32_t p1);
	virtual int32_t getBreakWeight(int32_t axis, float pos, float len) override;
	::java::text::BreakIterator* getBreaker();
	virtual int32_t getEndOffset() override;
	virtual ::java::awt::Font* getFont();
	virtual ::java::awt::Color* getForeground();
	virtual ::javax::swing::text::GlyphView$GlyphPainter* getGlyphPainter();
	virtual ::javax::swing::text::GlyphView$JustificationInfo* getJustificationInfo(int32_t rowStartOffset);
	virtual float getMinimumSpan(int32_t axis) override;
	virtual int32_t getNextVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual float getPartialSpan(int32_t p0, int32_t p1) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getStartOffset() override;
	virtual ::javax::swing::text::TabExpander* getTabExpander();
	virtual float getTabbedSpan(float x, ::javax::swing::text::TabExpander* e) override;
	virtual ::javax::swing::text::Segment* getText(int32_t p0, int32_t p1);
	void initSelections(int32_t p0, int32_t p1);
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual bool isStrikeThrough();
	virtual bool isSubscript();
	virtual bool isSuperscript();
	virtual bool isUnderline();
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	void paintTextUsingColor(::java::awt::Graphics* g, ::java::awt::Shape* a, ::java::awt::Color* c, int32_t p0, int32_t p1);
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setGlyphPainter(::javax::swing::text::GlyphView$GlyphPainter* p);
	void syncCR();
	virtual $String* toString() override;
	virtual void updateAfterChange() override;
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* biasReturn) override;
	$bytes* selections = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	bool impliedCR = false;
	bool skipWidth = false;
	::javax::swing::text::TabExpander* expander = nullptr;
	float minimumSpan = 0.0;
	$ints* breakSpots = nullptr;
	int32_t x = 0;
	::javax::swing::text::GlyphView$GlyphPainter* painter = nullptr;
	static ::javax::swing::text::GlyphView$GlyphPainter* defaultPainter;
	::javax::swing::text::GlyphView$JustificationInfo* justificationInfo = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_GlyphView_h_