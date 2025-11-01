#ifndef _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport_h_
#define _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport_h_
//$ class javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport
//$ extends javax.swing.JEditorPane$AccessibleJEditorPane
//$ implements javax.accessibility.AccessibleHypertext

#include <javax/accessibility/AccessibleHypertext.h>
#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>

namespace javax {
	namespace accessibility {
		class AccessibleHyperlink;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
		class JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector;
	}
}

namespace javax {
	namespace swing {

class $import JEditorPane$JEditorPaneAccessibleHypertextSupport : public ::javax::swing::JEditorPane$AccessibleJEditorPane, public ::javax::accessibility::AccessibleHypertext {
	$class(JEditorPane$JEditorPaneAccessibleHypertextSupport, $NO_CLASS_INIT, ::javax::swing::JEditorPane$AccessibleJEditorPane, ::javax::accessibility::AccessibleHypertext)
public:
	JEditorPane$JEditorPaneAccessibleHypertextSupport();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getAfterIndex(int32_t part, int32_t index) override;
	virtual $String* getAtIndex(int32_t part, int32_t index) override;
	virtual $String* getBeforeIndex(int32_t part, int32_t index) override;
	virtual int32_t getCaretPosition() override;
	virtual int32_t getCharCount() override;
	virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) override;
	virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) override;
	virtual int32_t getIndexAtPoint(::java::awt::Point* p) override;
	virtual $String* getSelectedText() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JEditorPane* this$0);
	void buildLinkTable();
	virtual ::javax::accessibility::AccessibleHyperlink* getLink(int32_t linkIndex) override;
	virtual int32_t getLinkCount() override;
	virtual int32_t getLinkIndex(int32_t charIndex) override;
	virtual $String* getLinkText(int32_t linkIndex);
	virtual $String* toString() override;
	::javax::swing::JEditorPane* this$0 = nullptr;
	::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector* hyperlinks = nullptr;
	bool linksValid = false;
};

	} // swing
} // javax

#endif // _javax_swing_JEditorPane$JEditorPaneAccessibleHypertextSupport_h_