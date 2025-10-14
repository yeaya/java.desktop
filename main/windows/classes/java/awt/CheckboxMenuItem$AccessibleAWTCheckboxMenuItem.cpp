#include <java/awt/CheckboxMenuItem$AccessibleAWTCheckboxMenuItem.h>

#include <java/awt/CheckboxMenuItem.h>
#include <java/awt/MenuItem$AccessibleAWTMenuItem.h>
#include <java/awt/MenuItem.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleValue.h>
#include <jcpp.h>

#undef CHECK_BOX

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $MenuItem = ::java::awt::MenuItem;
using $MenuItem$AccessibleAWTMenuItem = ::java::awt::MenuItem$AccessibleAWTMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;

namespace java {
	namespace awt {

$FieldInfo _CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_FieldInfo_[] = {
	{"this$0", "Ljava/awt/CheckboxMenuItem;", nullptr, $FINAL | $SYNTHETIC, $field(CheckboxMenuItem$AccessibleAWTCheckboxMenuItem, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CheckboxMenuItem$AccessibleAWTCheckboxMenuItem, serialVersionUID)},
	{}
};

$MethodInfo _CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/CheckboxMenuItem;)V", nullptr, $PROTECTED, $method(static_cast<void(CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::*)($CheckboxMenuItem*)>(&CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::init$))},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getCurrentAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMaximumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"getMinimumAccessibleValue", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"setCurrentAccessibleValue", "(Ljava/lang/Number;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_InnerClassesInfo_[] = {
	{"java.awt.CheckboxMenuItem$AccessibleAWTCheckboxMenuItem", "java.awt.CheckboxMenuItem", "AccessibleAWTCheckboxMenuItem", $PROTECTED},
	{"java.awt.MenuItem$AccessibleAWTMenuItem", "java.awt.MenuItem", "AccessibleAWTMenuItem", $PROTECTED},
	{}
};

$ClassInfo _CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.CheckboxMenuItem$AccessibleAWTCheckboxMenuItem",
	"java.awt.MenuItem$AccessibleAWTMenuItem",
	nullptr,
	_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_FieldInfo_,
	_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.CheckboxMenuItem"
};

$Object* allocate$CheckboxMenuItem$AccessibleAWTCheckboxMenuItem($Class* clazz) {
	return $of($alloc(CheckboxMenuItem$AccessibleAWTCheckboxMenuItem));
}

void CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::init$($CheckboxMenuItem* this$0) {
	$set(this, this$0, this$0);
	$MenuItem$AccessibleAWTMenuItem::init$(this$0);
}

$AccessibleAction* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getAccessibleAction() {
	return this;
}

$AccessibleValue* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getAccessibleValue() {
	return this;
}

int32_t CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getAccessibleActionCount() {
	return 0;
}

$String* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getAccessibleActionDescription(int32_t i) {
	return nullptr;
}

bool CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::doAccessibleAction(int32_t i) {
	return false;
}

$Number* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getCurrentAccessibleValue() {
	return nullptr;
}

bool CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::setCurrentAccessibleValue($Number* n) {
	return false;
}

$Number* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getMinimumAccessibleValue() {
	return nullptr;
}

$Number* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getMaximumAccessibleValue() {
	return nullptr;
}

$AccessibleRole* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::CHECK_BOX;
}

CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::CheckboxMenuItem$AccessibleAWTCheckboxMenuItem() {
}

$Class* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::load$($String* name, bool initialize) {
	$loadClass(CheckboxMenuItem$AccessibleAWTCheckboxMenuItem, name, initialize, &_CheckboxMenuItem$AccessibleAWTCheckboxMenuItem_ClassInfo_, allocate$CheckboxMenuItem$AccessibleAWTCheckboxMenuItem);
	return class$;
}

$Class* CheckboxMenuItem$AccessibleAWTCheckboxMenuItem::class$ = nullptr;

	} // awt
} // java