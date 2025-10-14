#include <javax/swing/JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef DESKTOP_ICON

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;

namespace javax {
	namespace swing {

$FieldInfo _JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, this$0)},
	{}
};

$MethodInfo _JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, $PROTECTED, $method(static_cast<void(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::*)($JInternalFrame$JDesktopIcon*)>(&JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_InnerClassesInfo_[] = {
	{"javax.swing.JInternalFrame$JDesktopIcon", "javax.swing.JInternalFrame", "JDesktopIcon", $PUBLIC | $STATIC},
	{"javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon", "javax.swing.JInternalFrame$JDesktopIcon", "AccessibleJDesktopIcon", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleValue",
	_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_FieldInfo_,
	_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_MethodInfo_,
	nullptr,
	nullptr,
	_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JInternalFrame"
};

$Object* allocate$JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon($Class* clazz) {
	return $of($alloc(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon));
}

int32_t JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::init$($JInternalFrame$JDesktopIcon* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::DESKTOP_ICON;
}

$AccessibleValue* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getAccessibleValue() {
	return this;
}

$Number* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getCurrentAccessibleValue() {
	$var($AccessibleContext, a, $nc($(this->this$0->getInternalFrame()))->getAccessibleContext());
	$var($AccessibleValue, v, $nc(a)->getAccessibleValue());
	if (v != nullptr) {
		return v->getCurrentAccessibleValue();
	} else {
		return nullptr;
	}
}

bool JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::setCurrentAccessibleValue($Number* n) {
	if (n == nullptr) {
		return false;
	}
	$var($AccessibleContext, a, $nc($(this->this$0->getInternalFrame()))->getAccessibleContext());
	$var($AccessibleValue, v, $nc(a)->getAccessibleValue());
	if (v != nullptr) {
		return v->setCurrentAccessibleValue(n);
	} else {
		return false;
	}
}

$Number* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getMinimumAccessibleValue() {
	$var($AccessibleContext, a, $nc($(this->this$0->getInternalFrame()))->getAccessibleContext());
	if ($instanceOf($AccessibleValue, a)) {
		return $nc(($cast($AccessibleValue, a)))->getMinimumAccessibleValue();
	} else {
		return nullptr;
	}
}

$Number* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::getMaximumAccessibleValue() {
	$var($AccessibleContext, a, $nc($(this->this$0->getInternalFrame()))->getAccessibleContext());
	if ($instanceOf($AccessibleValue, a)) {
		return $nc(($cast($AccessibleValue, a)))->getMaximumAccessibleValue();
	} else {
		return nullptr;
	}
}

JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon() {
}

$Class* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::load$($String* name, bool initialize) {
	$loadClass(JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon, name, initialize, &_JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon_ClassInfo_, allocate$JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon);
	return class$;
}

$Class* JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon::class$ = nullptr;

	} // swing
} // javax