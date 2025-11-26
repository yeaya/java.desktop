#ifndef _javax_swing_plaf_basic_BasicTextAreaUI$PlainParagraph_h_
#define _javax_swing_plaf_basic_BasicTextAreaUI$PlainParagraph_h_
//$ class javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph
//$ extends javax.swing.text.ParagraphView

#include <javax/swing/text/ParagraphView.h>

namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTextAreaUI$PlainParagraph : public ::javax::swing::text::ParagraphView {
	$class(BasicTextAreaUI$PlainParagraph, $NO_CLASS_INIT, ::javax::swing::text::ParagraphView)
public:
	BasicTextAreaUI$PlainParagraph();
	using ::javax::swing::text::ParagraphView::breakView;
	using ::javax::swing::text::ParagraphView::getBreakWeight;
	using ::javax::swing::text::ParagraphView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual int32_t getFlowSpan(int32_t index) override;
	using ::javax::swing::text::ParagraphView::modelToView;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setPropertiesFromAttributes() override;
	virtual void setSize(float width, float height) override;
	using ::javax::swing::text::ParagraphView::viewToModel;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextAreaUI$PlainParagraph_h_