#ifndef _javax_swing_plaf_basic_BasicTextAreaUI$PlainParagraph$LogicalView_h_
#define _javax_swing_plaf_basic_BasicTextAreaUI$PlainParagraph$LogicalView_h_
//$ class javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph$LogicalView
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
			class Element;
			class View;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextAreaUI$PlainParagraph$LogicalView : public ::javax::swing::text::CompositeView {
	$class(BasicTextAreaUI$PlainParagraph$LogicalView, $NO_CLASS_INIT, ::javax::swing::text::CompositeView)
public:
	BasicTextAreaUI$PlainParagraph$LogicalView();
	using ::javax::swing::text::CompositeView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual void childAllocation(int32_t index, ::java::awt::Rectangle* a) override;
	virtual void forwardUpdateToView(::javax::swing::text::View* v, ::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual ::javax::swing::text::View* getViewAtPoint(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual int32_t getViewIndexAtPosition(int32_t pos) override;
	virtual bool isAfter(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual bool isBefore(int32_t x, int32_t y, ::java::awt::Rectangle* alloc) override;
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::CompositeView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual bool updateChildren(::javax::swing::event::DocumentEvent$ElementChange* ec, ::javax::swing::event::DocumentEvent* e, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::CompositeView::viewToModel;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextAreaUI$PlainParagraph$LogicalView_h_