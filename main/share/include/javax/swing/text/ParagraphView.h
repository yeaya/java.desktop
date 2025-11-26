#ifndef _javax_swing_text_ParagraphView_h_
#define _javax_swing_text_ParagraphView_h_
//$ class javax.swing.text.ParagraphView
//$ extends javax.swing.text.FlowView
//$ implements javax.swing.text.TabExpander

#include <java/lang/Array.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/TabExpander.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
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
			class Position$Bias;
			class TabSet;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import ParagraphView : public ::javax::swing::text::FlowView, public ::javax::swing::text::TabExpander {
	$class(ParagraphView, 0, ::javax::swing::text::FlowView, ::javax::swing::text::TabExpander)
public:
	ParagraphView();
	using ::javax::swing::text::FlowView::getViewIndex;
	using ::javax::swing::text::FlowView::breakView;
	using ::javax::swing::text::FlowView::getBreakWeight;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::View* breakView(int32_t axis, float len, ::java::awt::Shape* a);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::javax::swing::text::View* createRow() override;
	float findEdgeSpan(::javax::swing::text::View* v, int32_t axis, int32_t fp, int32_t p0, int32_t p1);
	virtual int32_t findOffsetToCharactersInString($chars* string, int32_t start);
	virtual bool flipEastAndWestAtEnds(int32_t position, ::javax::swing::text::Position$Bias* bias) override;
	virtual float getAlignment(int32_t axis) override;
	virtual int32_t getBreakWeight(int32_t axis, float len);
	virtual int32_t getClosestPositionTo(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet, int32_t rowIndex, int32_t x);
	virtual int32_t getFlowSpan(int32_t index) override;
	virtual int32_t getFlowStart(int32_t index) override;
	virtual ::javax::swing::text::View* getLayoutView(int32_t index);
	virtual int32_t getLayoutViewCount();
	virtual int32_t getNextNorthSouthVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual float getPartialSize(int32_t startOffset, int32_t endOffset);
	virtual float getTabBase();
	virtual ::javax::swing::text::TabSet* getTabSet();
	using ::javax::swing::text::FlowView::modelToView;
	virtual float nextTabStop(float x, int32_t tabOffset) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void setFirstLineIndent(float fi);
	virtual void setJustification(int32_t j);
	virtual void setLineSpacing(float ls);
	virtual void setPropertiesFromAttributes();
	using ::javax::swing::text::FlowView::viewToModel;
	virtual $String* toString() override;
	int32_t justification = 0;
	float lineSpacing = 0.0;
	int32_t firstLineIndent = 0;
	int32_t tabBase = 0;
	static $Class* i18nStrategy;
	static $chars* tabChars;
	static $chars* tabDecimalChars;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ParagraphView_h_