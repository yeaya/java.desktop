#include <javax/swing/JOptionPane$AccessibleJOptionPane.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef ALERT
#undef OPTION_PANE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JOptionPane = ::javax::swing::JOptionPane;

namespace javax {
	namespace swing {

$FieldInfo _JOptionPane$AccessibleJOptionPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JOptionPane;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPane$AccessibleJOptionPane, this$0)},
	{}
};

$MethodInfo _JOptionPane$AccessibleJOptionPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JOptionPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JOptionPane$AccessibleJOptionPane::*)($JOptionPane*)>(&JOptionPane$AccessibleJOptionPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JOptionPane$AccessibleJOptionPane_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$AccessibleJOptionPane", "javax.swing.JOptionPane", "AccessibleJOptionPane", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JOptionPane$AccessibleJOptionPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JOptionPane$AccessibleJOptionPane",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JOptionPane$AccessibleJOptionPane_FieldInfo_,
	_JOptionPane$AccessibleJOptionPane_MethodInfo_,
	nullptr,
	nullptr,
	_JOptionPane$AccessibleJOptionPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JOptionPane"
};

$Object* allocate$JOptionPane$AccessibleJOptionPane($Class* clazz) {
	return $of($alloc(JOptionPane$AccessibleJOptionPane));
}

void JOptionPane$AccessibleJOptionPane::init$($JOptionPane* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JOptionPane$AccessibleJOptionPane::getAccessibleRole() {
	switch (this->this$0->messageType) {
	case 0:
		{}
	case 1:
		{}
	case 2:
		{
			$init($AccessibleRole);
			return $AccessibleRole::ALERT;
		}
	default:
		{
			$init($AccessibleRole);
			return $AccessibleRole::OPTION_PANE;
		}
	}
}

JOptionPane$AccessibleJOptionPane::JOptionPane$AccessibleJOptionPane() {
}

$Class* JOptionPane$AccessibleJOptionPane::load$($String* name, bool initialize) {
	$loadClass(JOptionPane$AccessibleJOptionPane, name, initialize, &_JOptionPane$AccessibleJOptionPane_ClassInfo_, allocate$JOptionPane$AccessibleJOptionPane);
	return class$;
}

$Class* JOptionPane$AccessibleJOptionPane::class$ = nullptr;

	} // swing
} // javax