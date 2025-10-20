#include <javax/swing/JSpinner$AccessibleJSpinner.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

#undef ACCESSIBLE_TEXT_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef DECREMENT
#undef INCREMENT
#undef SPIN_BOX

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {

$FieldInfo _JSpinner$AccessibleJSpinner_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JSpinner;", nullptr, $FINAL | $SYNTHETIC, $field(JSpinner$AccessibleJSpinner, this$0)},
	{"oldModelValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(JSpinner$AccessibleJSpinner, oldModelValue)},
	{}
};

$MethodInfo _JSpinner$AccessibleJSpinner_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PROTECTED, $method(static_cast<void(JSpinner$AccessibleJSpinner::*)($JSpinner*)>(&JSpinner$AccessibleJSpinner::init$))},
	{"cut", "(II)V", nullptr, $PUBLIC},
	{"delete", "(II)V", nullptr, $PUBLIC},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getCharCount", "()I", nullptr, $PUBLIC},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getEditorAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $method(static_cast<$AccessibleContext*(JSpinner$AccessibleJSpinner::*)()>(&JSpinner$AccessibleJSpinner::getEditorAccessibleContext))},
	{"getEditorAccessibleEditableText", "()Ljavax/accessibility/AccessibleEditableText;", nullptr, $PRIVATE, $method(static_cast<$AccessibleEditableText*(JSpinner$AccessibleJSpinner::*)()>(&JSpinner$AccessibleJSpinner::getEditorAccessibleEditableText))},
	{"getEditorAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PRIVATE, $method(static_cast<$AccessibleText*(JSpinner$AccessibleJSpinner::*)()>(&JSpinner$AccessibleJSpinner::getEditorAccessibleText))},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"getTextRange", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"insertTextAtIndex", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"paste", "(I)V", nullptr, $PUBLIC},
	{"replaceText", "(IILjava/lang/String;)V", nullptr, $PUBLIC},
	{"sameWindowAncestor", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JSpinner$AccessibleJSpinner::*)($Component*,$Component*)>(&JSpinner$AccessibleJSpinner::sameWindowAncestor))},
	{"selectText", "(II)V", nullptr, $PUBLIC},
	{"setAttributes", "(IILjavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"setTextContents", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSpinner$AccessibleJSpinner_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$AccessibleJSpinner", "javax.swing.JSpinner", "AccessibleJSpinner", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JSpinner$AccessibleJSpinner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSpinner$AccessibleJSpinner",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue,javax.accessibility.AccessibleAction,javax.accessibility.AccessibleEditableText,javax.swing.event.ChangeListener",
	_JSpinner$AccessibleJSpinner_FieldInfo_,
	_JSpinner$AccessibleJSpinner_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$AccessibleJSpinner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$AccessibleJSpinner($Class* clazz) {
	return $of($alloc(JSpinner$AccessibleJSpinner));
}

int32_t JSpinner$AccessibleJSpinner::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JSpinner$AccessibleJSpinner::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JSpinner$AccessibleJSpinner::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JSpinner$AccessibleJSpinner::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JSpinner$AccessibleJSpinner::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JSpinner$AccessibleJSpinner::init$($JSpinner* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$set(this, oldModelValue, nullptr);
	$set(this, oldModelValue, $nc(this$0->model)->getValue());
	this$0->addChangeListener(this);
}

void JSpinner$AccessibleJSpinner::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Object, newModelValue, $nc(this->this$0->model)->getValue());
	$init($AccessibleContext);
	firePropertyChange($AccessibleContext::ACCESSIBLE_VALUE_PROPERTY, this->oldModelValue, newModelValue);
	firePropertyChange($AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, nullptr, $($Integer::valueOf(0)));
	$set(this, oldModelValue, newModelValue);
}

$AccessibleRole* JSpinner$AccessibleJSpinner::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SPIN_BOX;
}

int32_t JSpinner$AccessibleJSpinner::getAccessibleChildrenCount() {
	if ($nc(this->this$0->editor)->getAccessibleContext() != nullptr) {
		return 1;
	}
	return 0;
}

$Accessible* JSpinner$AccessibleJSpinner::getAccessibleChild(int32_t i) {
	if (i != 0) {
		return nullptr;
	}
	if ($nc(this->this$0->editor)->getAccessibleContext() != nullptr) {
		return $cast($Accessible, this->this$0->editor);
	}
	return nullptr;
}

$AccessibleAction* JSpinner$AccessibleJSpinner::getAccessibleAction() {
	return this;
}

$AccessibleText* JSpinner$AccessibleJSpinner::getAccessibleText() {
	return this;
}

$AccessibleContext* JSpinner$AccessibleJSpinner::getEditorAccessibleContext() {
	if ($instanceOf($JSpinner$DefaultEditor, this->this$0->editor)) {
		$var($JTextField, textField, $nc(($cast($JSpinner$DefaultEditor, this->this$0->editor)))->getTextField());
		if (textField != nullptr) {
			return textField->getAccessibleContext();
		}
	} else if ($instanceOf($Accessible, this->this$0->editor)) {
		return $nc(this->this$0->editor)->getAccessibleContext();
	}
	return nullptr;
}

$AccessibleText* JSpinner$AccessibleJSpinner::getEditorAccessibleText() {
	$var($AccessibleContext, ac, getEditorAccessibleContext());
	if (ac != nullptr) {
		return ac->getAccessibleText();
	}
	return nullptr;
}

$AccessibleEditableText* JSpinner$AccessibleJSpinner::getEditorAccessibleEditableText() {
	$var($AccessibleText, at, getEditorAccessibleText());
	if ($instanceOf($AccessibleEditableText, at)) {
		return $cast($AccessibleEditableText, at);
	}
	return nullptr;
}

$AccessibleValue* JSpinner$AccessibleJSpinner::getAccessibleValue() {
	return this;
}

$Number* JSpinner$AccessibleJSpinner::getCurrentAccessibleValue() {
	$var($Object, o, $nc(this->this$0->model)->getValue());
	if ($instanceOf($Number, o)) {
		return $cast($Number, o);
	}
	return nullptr;
}

bool JSpinner$AccessibleJSpinner::setCurrentAccessibleValue($Number* n) {
	try {
		$nc(this->this$0->model)->setValue(n);
		return true;
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	return false;
}

$Number* JSpinner$AccessibleJSpinner::getMinimumAccessibleValue() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SpinnerNumberModel, this->this$0->model)) {
		$var($SpinnerNumberModel, numberModel, $cast($SpinnerNumberModel, this->this$0->model));
		$var($Object, o, $nc(numberModel)->getMinimum());
		if ($instanceOf($Number, o)) {
			return $cast($Number, o);
		}
	}
	return nullptr;
}

$Number* JSpinner$AccessibleJSpinner::getMaximumAccessibleValue() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SpinnerNumberModel, this->this$0->model)) {
		$var($SpinnerNumberModel, numberModel, $cast($SpinnerNumberModel, this->this$0->model));
		$var($Object, o, $nc(numberModel)->getMaximum());
		if ($instanceOf($Number, o)) {
			return $cast($Number, o);
		}
	}
	return nullptr;
}

int32_t JSpinner$AccessibleJSpinner::getAccessibleActionCount() {
	return 2;
}

$String* JSpinner$AccessibleJSpinner::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		$init($AccessibleAction);
		return $AccessibleAction::INCREMENT;
	} else if (i == 1) {
		$init($AccessibleAction);
		return $AccessibleAction::DECREMENT;
	}
	return nullptr;
}

bool JSpinner$AccessibleJSpinner::doAccessibleAction(int32_t i) {
	if (i < 0 || i > 1) {
		return false;
	}
	$var($Object, o, nullptr);
	if (i == 0) {
		$assign(o, this->this$0->getNextValue());
	} else {
		$assign(o, this->this$0->getPreviousValue());
	}
	try {
		$nc(this->this$0->model)->setValue(o);
		return true;
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	return false;
}

bool JSpinner$AccessibleJSpinner::sameWindowAncestor($Component* src, $Component* dest) {
	if (src == nullptr || dest == nullptr) {
		return false;
	}
	return $SwingUtilities::getWindowAncestor(src) == $SwingUtilities::getWindowAncestor(dest);
}

int32_t JSpinner$AccessibleJSpinner::getIndexAtPoint($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr && sameWindowAncestor(this->this$0, this->this$0->editor)) {
		$var($Point, editorPoint, $SwingUtilities::convertPoint(this->this$0, p, this->this$0->editor));
		if (editorPoint != nullptr) {
			return at->getIndexAtPoint(editorPoint);
		}
	}
	return -1;
}

$Rectangle* JSpinner$AccessibleJSpinner::getCharacterBounds(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		$var($Rectangle, editorRect, at->getCharacterBounds(i));
		if (editorRect != nullptr && sameWindowAncestor(this->this$0, this->this$0->editor)) {
			return $SwingUtilities::convertRectangle(this->this$0->editor, editorRect, this->this$0);
		}
	}
	return nullptr;
}

int32_t JSpinner$AccessibleJSpinner::getCharCount() {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getCharCount();
	}
	return -1;
}

int32_t JSpinner$AccessibleJSpinner::getCaretPosition() {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getCaretPosition();
	}
	return -1;
}

$String* JSpinner$AccessibleJSpinner::getAtIndex(int32_t part, int32_t index) {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getAtIndex(part, index);
	}
	return nullptr;
}

$String* JSpinner$AccessibleJSpinner::getAfterIndex(int32_t part, int32_t index) {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getAfterIndex(part, index);
	}
	return nullptr;
}

$String* JSpinner$AccessibleJSpinner::getBeforeIndex(int32_t part, int32_t index) {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getBeforeIndex(part, index);
	}
	return nullptr;
}

$AttributeSet* JSpinner$AccessibleJSpinner::getCharacterAttribute(int32_t i) {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getCharacterAttribute(i);
	}
	return nullptr;
}

int32_t JSpinner$AccessibleJSpinner::getSelectionStart() {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getSelectionStart();
	}
	return -1;
}

int32_t JSpinner$AccessibleJSpinner::getSelectionEnd() {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getSelectionEnd();
	}
	return -1;
}

$String* JSpinner$AccessibleJSpinner::getSelectedText() {
	$var($AccessibleText, at, getEditorAccessibleText());
	if (at != nullptr) {
		return at->getSelectedText();
	}
	return nullptr;
}

void JSpinner$AccessibleJSpinner::setTextContents($String* s) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->setTextContents(s);
	}
}

void JSpinner$AccessibleJSpinner::insertTextAtIndex(int32_t index, $String* s) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->insertTextAtIndex(index, s);
	}
}

$String* JSpinner$AccessibleJSpinner::getTextRange(int32_t startIndex, int32_t endIndex) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		return at->getTextRange(startIndex, endIndex);
	}
	return nullptr;
}

void JSpinner$AccessibleJSpinner::delete$(int32_t startIndex, int32_t endIndex) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->delete$(startIndex, endIndex);
	}
}

void JSpinner$AccessibleJSpinner::cut(int32_t startIndex, int32_t endIndex) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->cut(startIndex, endIndex);
	}
}

void JSpinner$AccessibleJSpinner::paste(int32_t startIndex) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->paste(startIndex);
	}
}

void JSpinner$AccessibleJSpinner::replaceText(int32_t startIndex, int32_t endIndex, $String* s) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->replaceText(startIndex, endIndex, s);
	}
}

void JSpinner$AccessibleJSpinner::selectText(int32_t startIndex, int32_t endIndex) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->selectText(startIndex, endIndex);
	}
}

void JSpinner$AccessibleJSpinner::setAttributes(int32_t startIndex, int32_t endIndex, $AttributeSet* as) {
	$var($AccessibleEditableText, at, getEditorAccessibleEditableText());
	if (at != nullptr) {
		at->setAttributes(startIndex, endIndex, as);
	}
}

JSpinner$AccessibleJSpinner::JSpinner$AccessibleJSpinner() {
}

$Class* JSpinner$AccessibleJSpinner::load$($String* name, bool initialize) {
	$loadClass(JSpinner$AccessibleJSpinner, name, initialize, &_JSpinner$AccessibleJSpinner_ClassInfo_, allocate$JSpinner$AccessibleJSpinner);
	return class$;
}

$Class* JSpinner$AccessibleJSpinner::class$ = nullptr;

	} // swing
} // javax