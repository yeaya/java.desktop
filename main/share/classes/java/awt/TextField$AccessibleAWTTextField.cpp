#include <java/awt/TextField$AccessibleAWTTextField.h>

#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef SINGLE_LINE

using $TextComponent = ::java::awt::TextComponent;
using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $TextField = ::java::awt::TextField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _TextField$AccessibleAWTTextField_FieldInfo_[] = {
	{"this$0", "Ljava/awt/TextField;", nullptr, $FINAL | $SYNTHETIC, $field(TextField$AccessibleAWTTextField, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextField$AccessibleAWTTextField, serialVersionUID)},
	{}
};

$MethodInfo _TextField$AccessibleAWTTextField_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/TextField;)V", nullptr, $PROTECTED, $method(static_cast<void(TextField$AccessibleAWTTextField::*)($TextField*)>(&TextField$AccessibleAWTTextField::init$))},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextField$AccessibleAWTTextField_InnerClassesInfo_[] = {
	{"java.awt.TextField$AccessibleAWTTextField", "java.awt.TextField", "AccessibleAWTTextField", $PROTECTED},
	{"java.awt.TextComponent$AccessibleAWTTextComponent", "java.awt.TextComponent", "AccessibleAWTTextComponent", $PROTECTED},
	{}
};

$ClassInfo _TextField$AccessibleAWTTextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TextField$AccessibleAWTTextField",
	"java.awt.TextComponent$AccessibleAWTTextComponent",
	nullptr,
	_TextField$AccessibleAWTTextField_FieldInfo_,
	_TextField$AccessibleAWTTextField_MethodInfo_,
	nullptr,
	nullptr,
	_TextField$AccessibleAWTTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TextField"
};

$Object* allocate$TextField$AccessibleAWTTextField($Class* clazz) {
	return $of($alloc(TextField$AccessibleAWTTextField));
}

void TextField$AccessibleAWTTextField::init$($TextField* this$0) {
	$set(this, this$0, this$0);
	$TextComponent$AccessibleAWTTextComponent::init$(this$0);
}

$AccessibleStateSet* TextField$AccessibleAWTTextField::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $TextComponent$AccessibleAWTTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::SINGLE_LINE);
	return states;
}

TextField$AccessibleAWTTextField::TextField$AccessibleAWTTextField() {
}

$Class* TextField$AccessibleAWTTextField::load$($String* name, bool initialize) {
	$loadClass(TextField$AccessibleAWTTextField, name, initialize, &_TextField$AccessibleAWTTextField_ClassInfo_, allocate$TextField$AccessibleAWTTextField);
	return class$;
}

$Class* TextField$AccessibleAWTTextField::class$ = nullptr;

	} // awt
} // java