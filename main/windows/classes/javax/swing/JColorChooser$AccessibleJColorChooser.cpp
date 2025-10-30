#include <javax/swing/JColorChooser$AccessibleJColorChooser.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef COLOR_CHOOSER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;

namespace javax {
	namespace swing {

$FieldInfo _JColorChooser$AccessibleJColorChooser_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JColorChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JColorChooser$AccessibleJColorChooser, this$0)},
	{}
};

$MethodInfo _JColorChooser$AccessibleJColorChooser_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JColorChooser;)V", nullptr, $PROTECTED, $method(static_cast<void(JColorChooser$AccessibleJColorChooser::*)($JColorChooser*)>(&JColorChooser$AccessibleJColorChooser::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JColorChooser$AccessibleJColorChooser_InnerClassesInfo_[] = {
	{"javax.swing.JColorChooser$AccessibleJColorChooser", "javax.swing.JColorChooser", "AccessibleJColorChooser", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JColorChooser$AccessibleJColorChooser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JColorChooser$AccessibleJColorChooser",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JColorChooser$AccessibleJColorChooser_FieldInfo_,
	_JColorChooser$AccessibleJColorChooser_MethodInfo_,
	nullptr,
	nullptr,
	_JColorChooser$AccessibleJColorChooser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JColorChooser"
};

$Object* allocate$JColorChooser$AccessibleJColorChooser($Class* clazz) {
	return $of($alloc(JColorChooser$AccessibleJColorChooser));
}

void JColorChooser$AccessibleJColorChooser::init$($JColorChooser* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JColorChooser$AccessibleJColorChooser::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::COLOR_CHOOSER;
}

JColorChooser$AccessibleJColorChooser::JColorChooser$AccessibleJColorChooser() {
}

$Class* JColorChooser$AccessibleJColorChooser::load$($String* name, bool initialize) {
	$loadClass(JColorChooser$AccessibleJColorChooser, name, initialize, &_JColorChooser$AccessibleJColorChooser_ClassInfo_, allocate$JColorChooser$AccessibleJColorChooser);
	return class$;
}

$Class* JColorChooser$AccessibleJColorChooser::class$ = nullptr;

	} // swing
} // javax