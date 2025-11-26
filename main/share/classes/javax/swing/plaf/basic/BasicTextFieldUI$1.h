#ifndef _javax_swing_plaf_basic_BasicTextFieldUI$1_h_
#define _javax_swing_plaf_basic_BasicTextFieldUI$1_h_
//$ class javax.swing.plaf.basic.BasicTextFieldUI$1
//$ extends javax.swing.text.GlyphView

#include <javax/swing/text/GlyphView.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTextFieldUI;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTextFieldUI$1 : public ::javax::swing::text::GlyphView {
	$class(BasicTextFieldUI$1, $NO_CLASS_INIT, ::javax::swing::text::GlyphView)
public:
	BasicTextFieldUI$1();
	void init$(::javax::swing::plaf::basic::BasicTextFieldUI* this$0, ::javax::swing::text::Element* elem);
	virtual float getMinimumSpan(int32_t axis) override;
	using ::javax::swing::text::GlyphView::modelToView;
	using ::javax::swing::text::GlyphView::viewToModel;
	::javax::swing::plaf::basic::BasicTextFieldUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextFieldUI$1_h_