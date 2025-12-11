#include <com/apple/laf/AquaComboBoxUI$AquaComboBoxEditor.h>

#include <com/apple/laf/AquaComboBoxUI$AquaCustomComboTextField.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$AquaCustomComboTextField = ::com::apple::laf::AquaComboBoxUI$AquaCustomComboTextField;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $JTextField = ::javax::swing::JTextField;
using $ListModel = ::javax::swing::ListModel;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $Document = ::javax::swing::text::Document;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$AquaComboBoxEditor_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$AquaComboBoxEditor, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$AquaComboBoxEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(static_cast<void(AquaComboBoxUI$AquaComboBoxEditor::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$AquaComboBoxEditor::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"editorTextChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaComboBoxUI$AquaComboBoxEditor::*)()>(&AquaComboBoxUI$AquaComboBoxEditor::editorTextChanged))},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaComboBoxUI$AquaComboBoxEditor_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$AquaComboBoxEditor", "com.apple.laf.AquaComboBoxUI", "AquaComboBoxEditor", $FINAL},
	{}
};

$ClassInfo _AquaComboBoxUI$AquaComboBoxEditor_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$AquaComboBoxEditor",
	"javax.swing.plaf.basic.BasicComboBoxEditor",
	"javax.swing.plaf.UIResource,javax.swing.event.DocumentListener",
	_AquaComboBoxUI$AquaComboBoxEditor_FieldInfo_,
	_AquaComboBoxUI$AquaComboBoxEditor_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxUI$AquaComboBoxEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$AquaComboBoxEditor($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$AquaComboBoxEditor));
}

int32_t AquaComboBoxUI$AquaComboBoxEditor::hashCode() {
	 return this->$BasicComboBoxEditor::hashCode();
}

bool AquaComboBoxUI$AquaComboBoxEditor::equals(Object$* arg0) {
	 return this->$BasicComboBoxEditor::equals(arg0);
}

$Object* AquaComboBoxUI$AquaComboBoxEditor::clone() {
	 return this->$BasicComboBoxEditor::clone();
}

$String* AquaComboBoxUI$AquaComboBoxEditor::toString() {
	 return this->$BasicComboBoxEditor::toString();
}

void AquaComboBoxUI$AquaComboBoxEditor::finalize() {
	this->$BasicComboBoxEditor::finalize();
}

void AquaComboBoxUI$AquaComboBoxEditor::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxEditor::init$();
	$set(this, editor, $new($AquaComboBoxUI$AquaCustomComboTextField, this$0));
	$nc(this->editor)->addFocusListener(this);
	$nc($($nc(this->editor)->getDocument()))->addDocumentListener(this);
}

void AquaComboBoxUI$AquaComboBoxEditor::changedUpdate($DocumentEvent* e) {
	editorTextChanged();
}

void AquaComboBoxUI$AquaComboBoxEditor::insertUpdate($DocumentEvent* e) {
	editorTextChanged();
}

void AquaComboBoxUI$AquaComboBoxEditor::removeUpdate($DocumentEvent* e) {
	editorTextChanged();
}

void AquaComboBoxUI$AquaComboBoxEditor::editorTextChanged() {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($AquaComboBoxUI::access$300(this->this$0)))->isVisible()) {
		return;
	}
	$var($Object, text, $nc(this->editor)->getText());
	$var($ListModel, model, $nc($($AquaComboBoxUI::access$400(this->this$0)))->getModel());
	int32_t items = $nc(model)->getSize();
	for (int32_t i = 0; i < items; ++i) {
		$var($Object, element, model->getElementAt(i));
		if (element == nullptr) {
			continue;
		}
		$var($String, asString, $nc($of(element))->toString());
		if (asString == nullptr || !$nc(asString)->equals(text)) {
			continue;
		}
		$nc($($nc($($AquaComboBoxUI::access$500(this->this$0)))->getList()))->setSelectedIndex(i);
		return;
	}
	$nc($($nc($($AquaComboBoxUI::access$600(this->this$0)))->getList()))->clearSelection();
}

AquaComboBoxUI$AquaComboBoxEditor::AquaComboBoxUI$AquaComboBoxEditor() {
}

$Class* AquaComboBoxUI$AquaComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$AquaComboBoxEditor, name, initialize, &_AquaComboBoxUI$AquaComboBoxEditor_ClassInfo_, allocate$AquaComboBoxUI$AquaComboBoxEditor);
	return class$;
}

$Class* AquaComboBoxUI$AquaComboBoxEditor::class$ = nullptr;

		} // laf
	} // apple
} // com