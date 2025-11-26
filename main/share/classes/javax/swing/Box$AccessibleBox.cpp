#include <javax/swing/Box$AccessibleBox.h>

#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/Box.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef FILLER

using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $Box = ::javax::swing::Box;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$FieldInfo _Box$AccessibleBox_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/Box;", nullptr, $FINAL | $SYNTHETIC, $field(Box$AccessibleBox, this$0)},
	{}
};

$MethodInfo _Box$AccessibleBox_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Box;)V", nullptr, $PROTECTED, $method(static_cast<void(Box$AccessibleBox::*)($Box*)>(&Box$AccessibleBox::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Box$AccessibleBox_InnerClassesInfo_[] = {
	{"javax.swing.Box$AccessibleBox", "javax.swing.Box", "AccessibleBox", $PROTECTED},
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{}
};

$ClassInfo _Box$AccessibleBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.Box$AccessibleBox",
	"java.awt.Container$AccessibleAWTContainer",
	nullptr,
	_Box$AccessibleBox_FieldInfo_,
	_Box$AccessibleBox_MethodInfo_,
	nullptr,
	nullptr,
	_Box$AccessibleBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.Box"
};

$Object* allocate$Box$AccessibleBox($Class* clazz) {
	return $of($alloc(Box$AccessibleBox));
}

void Box$AccessibleBox::init$($Box* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* Box$AccessibleBox::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FILLER;
}

Box$AccessibleBox::Box$AccessibleBox() {
}

$Class* Box$AccessibleBox::load$($String* name, bool initialize) {
	$loadClass(Box$AccessibleBox, name, initialize, &_Box$AccessibleBox_ClassInfo_, allocate$Box$AccessibleBox);
	return class$;
}

$Class* Box$AccessibleBox::class$ = nullptr;

	} // swing
} // javax