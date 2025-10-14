#include <javax/swing/JInternalFrame$AccessibleJInternalFrame.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleValue.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef INTERNAL_FRAME
#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$FieldInfo _JInternalFrame$AccessibleJInternalFrame_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JInternalFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrame$AccessibleJInternalFrame, this$0)},
	{}
};

$MethodInfo _JInternalFrame$AccessibleJInternalFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED, $method(static_cast<void(JInternalFrame$AccessibleJInternalFrame::*)($JInternalFrame*)>(&JInternalFrame$AccessibleJInternalFrame::init$))},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JInternalFrame$AccessibleJInternalFrame_InnerClassesInfo_[] = {
	{"javax.swing.JInternalFrame$AccessibleJInternalFrame", "javax.swing.JInternalFrame", "AccessibleJInternalFrame", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JInternalFrame$AccessibleJInternalFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JInternalFrame$AccessibleJInternalFrame",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue",
	_JInternalFrame$AccessibleJInternalFrame_FieldInfo_,
	_JInternalFrame$AccessibleJInternalFrame_MethodInfo_,
	nullptr,
	nullptr,
	_JInternalFrame$AccessibleJInternalFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JInternalFrame"
};

$Object* allocate$JInternalFrame$AccessibleJInternalFrame($Class* clazz) {
	return $of($alloc(JInternalFrame$AccessibleJInternalFrame));
}

int32_t JInternalFrame$AccessibleJInternalFrame::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JInternalFrame$AccessibleJInternalFrame::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JInternalFrame$AccessibleJInternalFrame::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JInternalFrame$AccessibleJInternalFrame::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JInternalFrame$AccessibleJInternalFrame::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JInternalFrame$AccessibleJInternalFrame::init$($JInternalFrame* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$String* JInternalFrame$AccessibleJInternalFrame::getAccessibleName() {
	$var($String, name, this->accessibleName);
	if (name == nullptr) {
		$init($AccessibleContext);
		$assign(name, $cast($String, this->this$0->getClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY)));
	}
	if (name == nullptr) {
		$assign(name, this->this$0->getTitle());
	}
	return name;
}

$AccessibleRole* JInternalFrame$AccessibleJInternalFrame::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::INTERNAL_FRAME;
}

$AccessibleValue* JInternalFrame$AccessibleJInternalFrame::getAccessibleValue() {
	return this;
}

$Number* JInternalFrame$AccessibleJInternalFrame::getCurrentAccessibleValue() {
	return $Integer::valueOf(this->this$0->getLayer());
}

bool JInternalFrame$AccessibleJInternalFrame::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	this->this$0->setLayer($($Integer::valueOf($nc(n)->intValue())));
	return true;
}

$Number* JInternalFrame$AccessibleJInternalFrame::getMinimumAccessibleValue() {
	return $Integer::valueOf($Integer::MIN_VALUE);
}

$Number* JInternalFrame$AccessibleJInternalFrame::getMaximumAccessibleValue() {
	return $Integer::valueOf($Integer::MAX_VALUE);
}

JInternalFrame$AccessibleJInternalFrame::JInternalFrame$AccessibleJInternalFrame() {
}

$Class* JInternalFrame$AccessibleJInternalFrame::load$($String* name, bool initialize) {
	$loadClass(JInternalFrame$AccessibleJInternalFrame, name, initialize, &_JInternalFrame$AccessibleJInternalFrame_ClassInfo_, allocate$JInternalFrame$AccessibleJInternalFrame);
	return class$;
}

$Class* JInternalFrame$AccessibleJInternalFrame::class$ = nullptr;

	} // swing
} // javax