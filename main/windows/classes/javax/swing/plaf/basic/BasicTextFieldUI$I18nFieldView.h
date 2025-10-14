#ifndef _javax_swing_plaf_basic_BasicTextFieldUI$I18nFieldView_h_
#define _javax_swing_plaf_basic_BasicTextFieldUI$I18nFieldView_h_
//$ class javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView
//$ extends javax.swing.text.ParagraphView

#include <java/lang/Array.h>
#include <javax/swing/text/ParagraphView.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Shape;
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
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextFieldUI$I18nFieldView : public ::javax::swing::text::ParagraphView {
	$class(BasicTextFieldUI$I18nFieldView, $NO_CLASS_INIT, ::javax::swing::text::ParagraphView)
public:
	BasicTextFieldUI$I18nFieldView();
	using ::javax::swing::text::ParagraphView::breakView;
	using ::javax::swing::text::ParagraphView::getBreakWeight;
	using ::javax::swing::text::ParagraphView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual ::java::awt::Shape* adjustAllocation(::java::awt::Shape* a);
	virtual int32_t getFlowSpan(int32_t index) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	static bool isLeftToRight(::java::awt::Component* c);
	using ::javax::swing::text::ParagraphView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual ::java::awt::Shape* modelToView(int32_t p0, ::javax::swing::text::Position$Bias* b0, int32_t p1, ::javax::swing::text::Position$Bias* b1, ::java::awt::Shape* a) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setJustification(int32_t j) override;
	virtual void updateVisibilityModel();
	using ::javax::swing::text::ParagraphView::viewToModel;
	virtual int32_t viewToModel(float fx, float fy, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextFieldUI$I18nFieldView_h_