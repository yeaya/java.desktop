#ifndef _javax_swing_text_FieldView_h_
#define _javax_swing_text_FieldView_h_
//$ class javax.swing.text.FieldView
//$ extends javax.swing.text.PlainView

#include <java/lang/Array.h>
#include <javax/swing/text/PlainView.h>

namespace java {
	namespace awt {
		class FontMetrics;
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
		namespace text {

class $export FieldView : public ::javax::swing::text::PlainView {
	$class(FieldView, $NO_CLASS_INIT, ::javax::swing::text::PlainView)
public:
	FieldView();
	void init$(::javax::swing::text::Element* elem);
	virtual ::java::awt::Shape* adjustAllocation(::java::awt::Shape* a);
	virtual ::java::awt::Shape* adjustPaintRegion(::java::awt::Shape* a) override;
	virtual ::java::awt::FontMetrics* getFontMetrics();
	virtual float getPreferredSpan(int32_t axis) override;
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::PlainView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* changes, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void updateVisibilityModel();
	using ::javax::swing::text::PlainView::viewToModel;
	virtual int32_t viewToModel(float fx, float fy, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_FieldView_h_