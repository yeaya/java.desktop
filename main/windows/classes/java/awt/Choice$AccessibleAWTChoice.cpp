#include <java/awt/Choice$AccessibleAWTChoice.h>

#include <java/awt/Choice.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef COMBO_BOX

using $Choice = ::java::awt::Choice;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _Choice$AccessibleAWTChoice_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Choice;", nullptr, $FINAL | $SYNTHETIC, $field(Choice$AccessibleAWTChoice, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Choice$AccessibleAWTChoice, serialVersionUID)},
	{}
};

$MethodInfo _Choice$AccessibleAWTChoice_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Choice;)V", nullptr, $PUBLIC, $method(static_cast<void(Choice$AccessibleAWTChoice::*)($Choice*)>(&Choice$AccessibleAWTChoice::init$))},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Choice$AccessibleAWTChoice_InnerClassesInfo_[] = {
	{"java.awt.Choice$AccessibleAWTChoice", "java.awt.Choice", "AccessibleAWTChoice", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Choice$AccessibleAWTChoice_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Choice$AccessibleAWTChoice",
	"java.awt.Component$AccessibleAWTComponent",
	"javax.accessibility.AccessibleAction",
	_Choice$AccessibleAWTChoice_FieldInfo_,
	_Choice$AccessibleAWTChoice_MethodInfo_,
	nullptr,
	nullptr,
	_Choice$AccessibleAWTChoice_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Choice"
};

$Object* allocate$Choice$AccessibleAWTChoice($Class* clazz) {
	return $of($alloc(Choice$AccessibleAWTChoice));
}

int32_t Choice$AccessibleAWTChoice::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool Choice$AccessibleAWTChoice::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* Choice$AccessibleAWTChoice::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* Choice$AccessibleAWTChoice::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void Choice$AccessibleAWTChoice::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void Choice$AccessibleAWTChoice::init$($Choice* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleAction* Choice$AccessibleAWTChoice::getAccessibleAction() {
	return this;
}

$AccessibleRole* Choice$AccessibleAWTChoice::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::COMBO_BOX;
}

int32_t Choice$AccessibleAWTChoice::getAccessibleActionCount() {
	return 0;
}

$String* Choice$AccessibleAWTChoice::getAccessibleActionDescription(int32_t i) {
	return nullptr;
}

bool Choice$AccessibleAWTChoice::doAccessibleAction(int32_t i) {
	return false;
}

Choice$AccessibleAWTChoice::Choice$AccessibleAWTChoice() {
}

$Class* Choice$AccessibleAWTChoice::load$($String* name, bool initialize) {
	$loadClass(Choice$AccessibleAWTChoice, name, initialize, &_Choice$AccessibleAWTChoice_ClassInfo_, allocate$Choice$AccessibleAWTChoice);
	return class$;
}

$Class* Choice$AccessibleAWTChoice::class$ = nullptr;

	} // awt
} // java