#ifndef _javax_swing_text_IconView_h_
#define _javax_swing_text_IconView_h_
//$ class javax.swing.text.IconView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export IconView : public ::javax::swing::text::View {
	$class(IconView, $NO_CLASS_INIT, ::javax::swing::text::View)
public:
	IconView();
	void init$(::javax::swing::text::Element* elem);
	virtual float getAlignment(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	::javax::swing::Icon* c = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_IconView_h_