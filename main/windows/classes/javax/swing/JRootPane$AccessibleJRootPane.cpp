#include <javax/swing/JRootPane$AccessibleJRootPane.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

#undef ROOT_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

$FieldInfo _JRootPane$AccessibleJRootPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(JRootPane$AccessibleJRootPane, this$0)},
	{}
};

$MethodInfo _JRootPane$AccessibleJRootPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JRootPane$AccessibleJRootPane::*)($JRootPane*)>(&JRootPane$AccessibleJRootPane::init$))},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JRootPane$AccessibleJRootPane_InnerClassesInfo_[] = {
	{"javax.swing.JRootPane$AccessibleJRootPane", "javax.swing.JRootPane", "AccessibleJRootPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JRootPane$AccessibleJRootPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRootPane$AccessibleJRootPane",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JRootPane$AccessibleJRootPane_FieldInfo_,
	_JRootPane$AccessibleJRootPane_MethodInfo_,
	nullptr,
	nullptr,
	_JRootPane$AccessibleJRootPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JRootPane"
};

$Object* allocate$JRootPane$AccessibleJRootPane($Class* clazz) {
	return $of($alloc(JRootPane$AccessibleJRootPane));
}

void JRootPane$AccessibleJRootPane::init$($JRootPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JRootPane$AccessibleJRootPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::ROOT_PANE;
}

int32_t JRootPane$AccessibleJRootPane::getAccessibleChildrenCount() {
	return $JComponent$AccessibleJComponent::getAccessibleChildrenCount();
}

$Accessible* JRootPane$AccessibleJRootPane::getAccessibleChild(int32_t i) {
	return $JComponent$AccessibleJComponent::getAccessibleChild(i);
}

JRootPane$AccessibleJRootPane::JRootPane$AccessibleJRootPane() {
}

$Class* JRootPane$AccessibleJRootPane::load$($String* name, bool initialize) {
	$loadClass(JRootPane$AccessibleJRootPane, name, initialize, &_JRootPane$AccessibleJRootPane_ClassInfo_, allocate$JRootPane$AccessibleJRootPane);
	return class$;
}

$Class* JRootPane$AccessibleJRootPane::class$ = nullptr;

	} // swing
} // javax