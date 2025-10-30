#include <javax/swing/JLayeredPane$AccessibleJLayeredPane.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef LAYERED_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JLayeredPane = ::javax::swing::JLayeredPane;

namespace javax {
	namespace swing {

$FieldInfo _JLayeredPane$AccessibleJLayeredPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JLayeredPane;", nullptr, $FINAL | $SYNTHETIC, $field(JLayeredPane$AccessibleJLayeredPane, this$0)},
	{}
};

$MethodInfo _JLayeredPane$AccessibleJLayeredPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JLayeredPane$AccessibleJLayeredPane::*)($JLayeredPane*)>(&JLayeredPane$AccessibleJLayeredPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JLayeredPane$AccessibleJLayeredPane_InnerClassesInfo_[] = {
	{"javax.swing.JLayeredPane$AccessibleJLayeredPane", "javax.swing.JLayeredPane", "AccessibleJLayeredPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JLayeredPane$AccessibleJLayeredPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JLayeredPane$AccessibleJLayeredPane",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JLayeredPane$AccessibleJLayeredPane_FieldInfo_,
	_JLayeredPane$AccessibleJLayeredPane_MethodInfo_,
	nullptr,
	nullptr,
	_JLayeredPane$AccessibleJLayeredPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLayeredPane"
};

$Object* allocate$JLayeredPane$AccessibleJLayeredPane($Class* clazz) {
	return $of($alloc(JLayeredPane$AccessibleJLayeredPane));
}

void JLayeredPane$AccessibleJLayeredPane::init$($JLayeredPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JLayeredPane$AccessibleJLayeredPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LAYERED_PANE;
}

JLayeredPane$AccessibleJLayeredPane::JLayeredPane$AccessibleJLayeredPane() {
}

$Class* JLayeredPane$AccessibleJLayeredPane::load$($String* name, bool initialize) {
	$loadClass(JLayeredPane$AccessibleJLayeredPane, name, initialize, &_JLayeredPane$AccessibleJLayeredPane_ClassInfo_, allocate$JLayeredPane$AccessibleJLayeredPane);
	return class$;
}

$Class* JLayeredPane$AccessibleJLayeredPane::class$ = nullptr;

	} // swing
} // javax