#ifndef _javax_swing_text_ComponentView_h_
#define _javax_swing_text_ComponentView_h_
//$ class javax.swing.text.ComponentView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class ComponentView$Invalidator;
			class Element;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import ComponentView : public ::javax::swing::text::View {
	$class(ComponentView, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	ComponentView();
	void init$(::javax::swing::text::Element* elem);
	virtual ::java::awt::Component* createComponent();
	virtual float getAlignment(int32_t axis) override;
	::java::awt::Component* getComponent();
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void setComponentParent();
	virtual void setParent(::javax::swing::text::View* p) override;
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	::java::awt::Component* createdC = nullptr;
	::javax::swing::text::ComponentView$Invalidator* c = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ComponentView_h_