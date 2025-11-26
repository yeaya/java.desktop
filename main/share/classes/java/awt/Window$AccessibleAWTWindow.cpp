#include <java/awt/Window$AccessibleAWTWindow.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef WINDOW

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _Window$AccessibleAWTWindow_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(Window$AccessibleAWTWindow, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Window$AccessibleAWTWindow, serialVersionUID)},
	{}
};

$MethodInfo _Window$AccessibleAWTWindow_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PROTECTED, $method(static_cast<void(Window$AccessibleAWTWindow::*)($Window*)>(&Window$AccessibleAWTWindow::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Window$AccessibleAWTWindow_InnerClassesInfo_[] = {
	{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{}
};

$ClassInfo _Window$AccessibleAWTWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Window$AccessibleAWTWindow",
	"java.awt.Container$AccessibleAWTContainer",
	nullptr,
	_Window$AccessibleAWTWindow_FieldInfo_,
	_Window$AccessibleAWTWindow_MethodInfo_,
	nullptr,
	nullptr,
	_Window$AccessibleAWTWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Window"
};

$Object* allocate$Window$AccessibleAWTWindow($Class* clazz) {
	return $of($alloc(Window$AccessibleAWTWindow));
}

void Window$AccessibleAWTWindow::init$($Window* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* Window$AccessibleAWTWindow::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::WINDOW;
}

$AccessibleStateSet* Window$AccessibleAWTWindow::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Container$AccessibleAWTContainer::getAccessibleStateSet());
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	return states;
}

Window$AccessibleAWTWindow::Window$AccessibleAWTWindow() {
}

$Class* Window$AccessibleAWTWindow::load$($String* name, bool initialize) {
	$loadClass(Window$AccessibleAWTWindow, name, initialize, &_Window$AccessibleAWTWindow_ClassInfo_, allocate$Window$AccessibleAWTWindow);
	return class$;
}

$Class* Window$AccessibleAWTWindow::class$ = nullptr;

	} // awt
} // java