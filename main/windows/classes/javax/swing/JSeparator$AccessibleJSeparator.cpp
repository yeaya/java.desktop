#include <javax/swing/JSeparator$AccessibleJSeparator.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <jcpp.h>

#undef SEPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JSeparator = ::javax::swing::JSeparator;

namespace javax {
	namespace swing {

$FieldInfo _JSeparator$AccessibleJSeparator_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JSeparator;", nullptr, $FINAL | $SYNTHETIC, $field(JSeparator$AccessibleJSeparator, this$0)},
	{}
};

$MethodInfo _JSeparator$AccessibleJSeparator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSeparator;)V", nullptr, $PROTECTED, $method(static_cast<void(JSeparator$AccessibleJSeparator::*)($JSeparator*)>(&JSeparator$AccessibleJSeparator::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSeparator$AccessibleJSeparator_InnerClassesInfo_[] = {
	{"javax.swing.JSeparator$AccessibleJSeparator", "javax.swing.JSeparator", "AccessibleJSeparator", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JSeparator$AccessibleJSeparator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSeparator$AccessibleJSeparator",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JSeparator$AccessibleJSeparator_FieldInfo_,
	_JSeparator$AccessibleJSeparator_MethodInfo_,
	nullptr,
	nullptr,
	_JSeparator$AccessibleJSeparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSeparator"
};

$Object* allocate$JSeparator$AccessibleJSeparator($Class* clazz) {
	return $of($alloc(JSeparator$AccessibleJSeparator));
}

void JSeparator$AccessibleJSeparator::init$($JSeparator* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JSeparator$AccessibleJSeparator::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SEPARATOR;
}

JSeparator$AccessibleJSeparator::JSeparator$AccessibleJSeparator() {
}

$Class* JSeparator$AccessibleJSeparator::load$($String* name, bool initialize) {
	$loadClass(JSeparator$AccessibleJSeparator, name, initialize, &_JSeparator$AccessibleJSeparator_ClassInfo_, allocate$JSeparator$AccessibleJSeparator);
	return class$;
}

$Class* JSeparator$AccessibleJSeparator::class$ = nullptr;

	} // swing
} // javax