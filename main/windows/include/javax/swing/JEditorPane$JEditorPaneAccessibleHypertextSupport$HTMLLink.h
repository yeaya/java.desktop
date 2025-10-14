#ifndef _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_h_
#define _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_h_
//$ class javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink
//$ extends javax.accessibility.AccessibleHyperlink

#include <javax/accessibility/AccessibleHyperlink.h>

namespace javax {
	namespace swing {
		class JEditorPane$JEditorPaneAccessibleHypertextSupport;
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

class $import JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink : public ::javax::accessibility::AccessibleHyperlink {
	$class(JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, $NO_CLASS_INIT, ::javax::accessibility::AccessibleHyperlink)
public:
	JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink();
	void init$(::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1, ::javax::swing::text::Element* e);
	virtual bool doAccessibleAction(int32_t i) override;
	virtual $Object* getAccessibleActionAnchor(int32_t i) override;
	virtual int32_t getAccessibleActionCount() override;
	virtual $String* getAccessibleActionDescription(int32_t i) override;
	virtual $Object* getAccessibleActionObject(int32_t i) override;
	virtual int32_t getEndIndex() override;
	virtual int32_t getStartIndex() override;
	virtual bool isValid() override;
	::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1 = nullptr;
	::javax::swing::text::Element* element = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_h_