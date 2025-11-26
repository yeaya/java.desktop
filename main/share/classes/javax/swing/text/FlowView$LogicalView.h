#ifndef _javax_swing_text_FlowView$LogicalView_h_
#define _javax_swing_text_FlowView$LogicalView_h_
//$ class javax.swing.text.FlowView$LogicalView
//$ extends javax.swing.text.CompositeView

#include <javax/swing/text/CompositeView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
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
			class Element;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export FlowView$LogicalView : public ::javax::swing::text::CompositeView {
	$class(FlowView$LogicalView, $NO_CLASS_INIT, ::javax::swing::text::CompositeView)
public:
	FlowView$LogicalView();
	using ::javax::swing::text::CompositeView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual void childAllocation(int32_t index, ::java::awt::Rectangle* a) override;
	virtual void forwardUpdate(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void forwardUpdateToView(::javax::swing::text::View* v, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual ::javax::swing::text::View* getViewAtPoint(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual int32_t getViewIndexAtPosition(int32_t pos) override;
	virtual bool isAfter(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual bool isBefore(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::CompositeView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	using ::javax::swing::text::CompositeView::viewToModel;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_FlowView$LogicalView_h_