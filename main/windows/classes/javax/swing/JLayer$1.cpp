#include <javax/swing/JLayer$1.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <jcpp.h>

#undef PANEL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayer = ::javax::swing::JLayer;

namespace javax {
	namespace swing {

$FieldInfo _JLayer$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JLayer;", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$1, this$0)},
	{}
};

$MethodInfo _JLayer$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLayer;)V", nullptr, 0, $method(static_cast<void(JLayer$1::*)($JLayer*)>(&JLayer$1::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLayer$1_EnclosingMethodInfo_ = {
	"javax.swing.JLayer",
	"getAccessibleContext",
	"()Ljavax/accessibility/AccessibleContext;"
};

$InnerClassInfo _JLayer$1_InnerClassesInfo_[] = {
	{"javax.swing.JLayer$1", nullptr, nullptr, 0},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JLayer$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JLayer$1",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JLayer$1_FieldInfo_,
	_JLayer$1_MethodInfo_,
	nullptr,
	&_JLayer$1_EnclosingMethodInfo_,
	_JLayer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLayer"
};

$Object* allocate$JLayer$1($Class* clazz) {
	return $of($alloc(JLayer$1));
}

void JLayer$1::init$($JLayer* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JLayer$1::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

JLayer$1::JLayer$1() {
}

$Class* JLayer$1::load$($String* name, bool initialize) {
	$loadClass(JLayer$1, name, initialize, &_JLayer$1_ClassInfo_, allocate$JLayer$1);
	return class$;
}

$Class* JLayer$1::class$ = nullptr;

	} // swing
} // javax