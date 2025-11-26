#ifndef _javax_swing_text_View_h_
#define _javax_swing_text_View_h_
//$ class javax.swing.text.View
//$ extends javax.swing.SwingConstants

#include <java/lang/Array.h>
#include <javax/swing/SwingConstants.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("VERTICAL")
#undef VERTICAL
#pragma push_macro("X_AXIS")
#undef X_AXIS
#pragma push_macro("Y_AXIS")
#undef Y_AXIS

namespace java {
	namespace awt {
		class Container;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
			class DocumentEvent$ElementChange;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class Position$Bias;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import View : public ::javax::swing::SwingConstants {
	$class(View, 0, ::javax::swing::SwingConstants)
public:
	View();
	void init$(::javax::swing::text::Element* elem);
	virtual void append(::javax::swing::text::View* v);
	virtual ::javax::swing::text::View* breakView(int32_t axis, int32_t offset, float pos, float len);
	virtual void calculateUpdateIndexes(::javax::swing::event::DocumentEvent* e);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f);
	virtual ::javax::swing::text::View* createFragment(int32_t p0, int32_t p1);
	virtual void forwardUpdate(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f);
	virtual void forwardUpdateToView(::javax::swing::text::View* v, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f);
	virtual float getAlignment(int32_t axis);
	virtual ::javax::swing::text::AttributeSet* getAttributes();
	virtual int32_t getBreakWeight(int32_t axis, float pos, float len);
	virtual ::java::awt::Shape* getChildAllocation(int32_t index, ::java::awt::Shape* a);
	virtual ::java::awt::Container* getContainer();
	virtual ::javax::swing::text::Document* getDocument();
	virtual ::javax::swing::text::Element* getElement();
	virtual int32_t getEndOffset();
	virtual ::java::awt::Graphics* getGraphics();
	virtual float getMaximumSpan(int32_t axis);
	virtual float getMinimumSpan(int32_t axis);
	virtual int32_t getNextVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet);
	virtual ::javax::swing::text::View* getParent();
	virtual float getPreferredSpan(int32_t axis) {return 0.0;}
	virtual int32_t getResizeWeight(int32_t axis);
	virtual int32_t getStartOffset();
	virtual $String* getToolTipText(float x, float y, ::java::awt::Shape* allocation);
	virtual ::javax::swing::text::View* getView(int32_t n);
	virtual int32_t getViewCount();
	virtual ::javax::swing::text::ViewFactory* getViewFactory();
	virtual int32_t getViewIndex(int32_t pos, ::javax::swing::text::Position$Bias* b);
	virtual int32_t getViewIndex(float x, float y, ::java::awt::Shape* allocation);
	virtual void insert(int32_t offs, ::javax::swing::text::View* v);
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f);
	virtual bool isVisible();
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) {return nullptr;}
	virtual ::java::awt::Shape* modelToView(int32_t p0, ::javax::swing::text::Position$Bias* b0, int32_t p1, ::javax::swing::text::Position$Bias* b1, ::java::awt::Shape* a);
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a);
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) {}
	virtual void preferenceChanged(::javax::swing::text::View* child, bool width, bool height);
	virtual void remove(int32_t i);
	virtual void removeAll();
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f);
	virtual void replace(int32_t offset, int32_t length, $Array<::javax::swing::text::View>* views);
	virtual void setParent(::javax::swing::text::View* parent);
	virtual void setSize(float width, float height);
	virtual void updateAfterChange();
	virtual bool updateChildren(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::javax::swing::text::ViewFactory* f);
	virtual void updateLayout(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a);
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* biasReturn) {return 0;}
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a);
	static const int32_t BadBreakWeight = 0;
	static const int32_t GoodBreakWeight = 1000;
	static const int32_t ExcellentBreakWeight = 2000;
	static const int32_t ForcedBreakWeight = 3000;
	static const int32_t X_AXIS = HORIZONTAL;
	static const int32_t Y_AXIS = VERTICAL;
	static $Array<::javax::swing::text::Position$Bias>* sharedBiasReturn;
	::javax::swing::text::View* parent = nullptr;
	::javax::swing::text::Element* elem = nullptr;
	int32_t firstUpdateIndex = 0;
	int32_t lastUpdateIndex = 0;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("VERTICAL")
#pragma pop_macro("X_AXIS")
#pragma pop_macro("Y_AXIS")

#endif // _javax_swing_text_View_h_