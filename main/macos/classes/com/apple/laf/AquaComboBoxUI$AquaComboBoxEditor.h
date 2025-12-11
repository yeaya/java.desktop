#ifndef _com_apple_laf_AquaComboBoxUI$AquaComboBoxEditor_h_
#define _com_apple_laf_AquaComboBoxUI$AquaComboBoxEditor_h_
//$ class com.apple.laf.AquaComboBoxUI$AquaComboBoxEditor
//$ extends javax.swing.plaf.basic.BasicComboBoxEditor
//$ implements javax.swing.plaf.UIResource,javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$AquaComboBoxEditor : public ::javax::swing::plaf::basic::BasicComboBoxEditor, public ::javax::swing::plaf::UIResource, public ::javax::swing::event::DocumentListener {
	$class(AquaComboBoxUI$AquaComboBoxEditor, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboBoxEditor, ::javax::swing::plaf::UIResource, ::javax::swing::event::DocumentListener)
public:
	AquaComboBoxUI$AquaComboBoxEditor();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	void editorTextChanged();
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual $String* toString() override;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$AquaComboBoxEditor_h_