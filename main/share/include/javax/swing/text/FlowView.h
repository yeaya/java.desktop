#ifndef _javax_swing_text_FlowView_h_
#define _javax_swing_text_FlowView_h_
//$ class javax.swing.text.FlowView
//$ extends javax.swing.text.BoxView

#include <javax/swing/text/BoxView.h>

namespace java {
	namespace awt {
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
			class FlowView$FlowStrategy;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import FlowView : public ::javax::swing::text::BoxView {
	$class(FlowView, $NO_CLASS_INIT, ::javax::swing::text::BoxView)
public:
	FlowView();
	using ::javax::swing::text::BoxView::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::javax::swing::text::View* createRow() {return nullptr;}
	virtual int32_t getFlowAxis();
	virtual int32_t getFlowSpan(int32_t index);
	virtual int32_t getFlowStart(int32_t index);
	virtual int32_t getViewIndexAtPosition(int32_t pos) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void layout(int32_t width, int32_t height) override;
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::BoxView::modelToView;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	using ::javax::swing::text::BoxView::viewToModel;
	int32_t layoutSpan = 0;
	::javax::swing::text::View* layoutPool = nullptr;
	::javax::swing::text::FlowView$FlowStrategy* strategy = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_FlowView_h_