#include <javax/swing/JComboBox$AccessibleJComboBox$EditorAccessibleContext.h>

#include <java/beans/PropertyChangeListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleRelationSet.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $AccessibleIconArray = $Array<::javax::accessibility::AccessibleIcon>;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleRelationSet = ::javax::accessibility::AccessibleRelationSet;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComboBox = ::javax::swing::JComboBox;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;

namespace javax {
	namespace swing {

$NamedAttribute JComboBox$AccessibleJComboBox$EditorAccessibleContext_Attribute_var$0[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the accessible description for the component."},
	{}
};

$CompoundAttribute _JComboBox$AccessibleJComboBox$EditorAccessibleContext_MethodAnnotations_setAccessibleDescription23[] = {
	{"Ljava/beans/BeanProperty;", JComboBox$AccessibleJComboBox$EditorAccessibleContext_Attribute_var$0},
	{}
};

$NamedAttribute JComboBox$AccessibleJComboBox$EditorAccessibleContext_Attribute_var$1[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the accessible name for the component."},
	{}
};

$CompoundAttribute _JComboBox$AccessibleJComboBox$EditorAccessibleContext_MethodAnnotations_setAccessibleName24[] = {
	{"Ljava/beans/BeanProperty;", JComboBox$AccessibleJComboBox$EditorAccessibleContext_Attribute_var$1},
	{}
};

$FieldInfo _JComboBox$AccessibleJComboBox$EditorAccessibleContext_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComboBox$AccessibleJComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox$EditorAccessibleContext, this$1)},
	{"ac", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(JComboBox$AccessibleJComboBox$EditorAccessibleContext, ac)},
	{}
};

$MethodInfo _JComboBox$AccessibleJComboBox$EditorAccessibleContext_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox$AccessibleJComboBox$EditorAccessibleContext::*)($JComboBox$AccessibleJComboBox*)>(&JComboBox$AccessibleJComboBox$EditorAccessibleContext::init$))},
	{"<init>", "(Ljavax/swing/JComboBox$AccessibleJComboBox;Ljavax/accessibility/Accessible;)V", nullptr, 0, $method(static_cast<void(JComboBox$AccessibleJComboBox$EditorAccessibleContext::*)($JComboBox$AccessibleJComboBox*,$Accessible*)>(&JComboBox$AccessibleJComboBox$EditorAccessibleContext::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleEditableText", "()Ljavax/accessibility/AccessibleEditableText;", nullptr, $PUBLIC},
	{"getAccessibleIcon", "()[Ljavax/accessibility/AccessibleIcon;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRelationSet", "()Ljavax/accessibility/AccessibleRelationSet;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{"getAccessibleTable", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, nullptr, "java.awt.IllegalComponentStateException"},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setAccessibleDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox$AccessibleJComboBox$EditorAccessibleContext_MethodAnnotations_setAccessibleDescription23},
	{"setAccessibleName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox$AccessibleJComboBox$EditorAccessibleContext_MethodAnnotations_setAccessibleName24},
	{"setAccessibleParent", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$AccessibleJComboBox$EditorAccessibleContext_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComboBox$AccessibleJComboBox$EditorAccessibleContext", "javax.swing.JComboBox$AccessibleJComboBox", "EditorAccessibleContext", $PRIVATE},
	{}
};

$ClassInfo _JComboBox$AccessibleJComboBox$EditorAccessibleContext_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$AccessibleJComboBox$EditorAccessibleContext",
	"javax.accessibility.AccessibleContext",
	nullptr,
	_JComboBox$AccessibleJComboBox$EditorAccessibleContext_FieldInfo_,
	_JComboBox$AccessibleJComboBox$EditorAccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$AccessibleJComboBox$EditorAccessibleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$AccessibleJComboBox$EditorAccessibleContext($Class* clazz) {
	return $of($alloc(JComboBox$AccessibleJComboBox$EditorAccessibleContext));
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::init$($JComboBox$AccessibleJComboBox* this$1) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::init$($JComboBox$AccessibleJComboBox* this$1, $Accessible* a) {
	$set(this, this$1, this$1);
	$AccessibleContext::init$();
	$set(this, ac, $nc(a)->getAccessibleContext());
}

$String* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleName() {
	return $nc(this->ac)->getAccessibleName();
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::setAccessibleName($String* s) {
	$nc(this->ac)->setAccessibleName(s);
}

$String* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleDescription() {
	return $nc(this->ac)->getAccessibleDescription();
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::setAccessibleDescription($String* s) {
	$nc(this->ac)->setAccessibleDescription(s);
}

$AccessibleRole* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleRole() {
	return $nc(this->ac)->getAccessibleRole();
}

$AccessibleStateSet* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleStateSet() {
	return $nc(this->ac)->getAccessibleStateSet();
}

$Accessible* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleParent() {
	return $nc(this->ac)->getAccessibleParent();
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::setAccessibleParent($Accessible* a) {
	$nc(this->ac)->setAccessibleParent(a);
}

int32_t JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleIndexInParent() {
	return $nc(this->this$1->this$0)->getSelectedIndex();
}

int32_t JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleChildrenCount() {
	return $nc(this->ac)->getAccessibleChildrenCount();
}

$Accessible* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleChild(int32_t i) {
	return $nc(this->ac)->getAccessibleChild(i);
}

$Locale* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getLocale() {
	return $nc(this->ac)->getLocale();
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::addPropertyChangeListener($PropertyChangeListener* listener) {
	$nc(this->ac)->addPropertyChangeListener(listener);
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::removePropertyChangeListener($PropertyChangeListener* listener) {
	$nc(this->ac)->removePropertyChangeListener(listener);
}

$AccessibleAction* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleAction() {
	return $nc(this->ac)->getAccessibleAction();
}

$AccessibleComponent* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleComponent() {
	return $nc(this->ac)->getAccessibleComponent();
}

$AccessibleSelection* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleSelection() {
	return $nc(this->ac)->getAccessibleSelection();
}

$AccessibleText* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleText() {
	return $nc(this->ac)->getAccessibleText();
}

$AccessibleEditableText* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleEditableText() {
	return $nc(this->ac)->getAccessibleEditableText();
}

$AccessibleValue* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleValue() {
	return $nc(this->ac)->getAccessibleValue();
}

$AccessibleIconArray* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleIcon() {
	return $nc(this->ac)->getAccessibleIcon();
}

$AccessibleRelationSet* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleRelationSet() {
	return $nc(this->ac)->getAccessibleRelationSet();
}

$AccessibleTable* JComboBox$AccessibleJComboBox$EditorAccessibleContext::getAccessibleTable() {
	return $nc(this->ac)->getAccessibleTable();
}

void JComboBox$AccessibleJComboBox$EditorAccessibleContext::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	$nc(this->ac)->firePropertyChange(propertyName, oldValue, newValue);
}

JComboBox$AccessibleJComboBox$EditorAccessibleContext::JComboBox$AccessibleJComboBox$EditorAccessibleContext() {
}

$Class* JComboBox$AccessibleJComboBox$EditorAccessibleContext::load$($String* name, bool initialize) {
	$loadClass(JComboBox$AccessibleJComboBox$EditorAccessibleContext, name, initialize, &_JComboBox$AccessibleJComboBox$EditorAccessibleContext_ClassInfo_, allocate$JComboBox$AccessibleJComboBox$EditorAccessibleContext);
	return class$;
}

$Class* JComboBox$AccessibleJComboBox$EditorAccessibleContext::class$ = nullptr;

	} // swing
} // javax