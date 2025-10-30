#include <javax/swing/JFileChooser$AccessibleJFileChooser.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

#undef FILE_CHOOSER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace javax {
	namespace swing {

$FieldInfo _JFileChooser$AccessibleJFileChooser_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooser$AccessibleJFileChooser, this$0)},
	{}
};

$MethodInfo _JFileChooser$AccessibleJFileChooser_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED, $method(static_cast<void(JFileChooser$AccessibleJFileChooser::*)($JFileChooser*)>(&JFileChooser$AccessibleJFileChooser::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFileChooser$AccessibleJFileChooser_InnerClassesInfo_[] = {
	{"javax.swing.JFileChooser$AccessibleJFileChooser", "javax.swing.JFileChooser", "AccessibleJFileChooser", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JFileChooser$AccessibleJFileChooser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JFileChooser$AccessibleJFileChooser",
	"javax.swing.JComponent$AccessibleJComponent",
	nullptr,
	_JFileChooser$AccessibleJFileChooser_FieldInfo_,
	_JFileChooser$AccessibleJFileChooser_MethodInfo_,
	nullptr,
	nullptr,
	_JFileChooser$AccessibleJFileChooser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFileChooser"
};

$Object* allocate$JFileChooser$AccessibleJFileChooser($Class* clazz) {
	return $of($alloc(JFileChooser$AccessibleJFileChooser));
}

void JFileChooser$AccessibleJFileChooser::init$($JFileChooser* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JFileChooser$AccessibleJFileChooser::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FILE_CHOOSER;
}

JFileChooser$AccessibleJFileChooser::JFileChooser$AccessibleJFileChooser() {
}

$Class* JFileChooser$AccessibleJFileChooser::load$($String* name, bool initialize) {
	$loadClass(JFileChooser$AccessibleJFileChooser, name, initialize, &_JFileChooser$AccessibleJFileChooser_ClassInfo_, allocate$JFileChooser$AccessibleJFileChooser);
	return class$;
}

$Class* JFileChooser$AccessibleJFileChooser::class$ = nullptr;

	} // swing
} // javax