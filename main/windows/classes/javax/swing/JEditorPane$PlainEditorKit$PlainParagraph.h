#ifndef _javax_swing_JEditorPane$PlainEditorKit$PlainParagraph_h_
#define _javax_swing_JEditorPane$PlainEditorKit$PlainParagraph_h_
//$ class javax.swing.JEditorPane$PlainEditorKit$PlainParagraph
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
		}
	}
}

namespace javax {
	namespace swing {

class $export JEditorPane$PlainEditorKit$PlainParagraph : public ::javax::swing::text::ParagraphView {
	$class(JEditorPane$PlainEditorKit$PlainParagraph, $NO_CLASS_INIT, ::javax::swing::text::ParagraphView)
public:
	JEditorPane$PlainEditorKit$PlainParagraph();
	using ::javax::swing::text::ParagraphView::breakView;
	using ::javax::swing::text::ParagraphView::getBreakWeight;
	using ::javax::swing::text::ParagraphView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual int32_t getFlowSpan(int32_t index) override;
	using ::javax::swing::text::ParagraphView::modelToView;
	virtual void setPropertiesFromAttributes() override;
	using ::javax::swing::text::ParagraphView::viewToModel;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$PlainEditorKit$PlainParagraph_h_