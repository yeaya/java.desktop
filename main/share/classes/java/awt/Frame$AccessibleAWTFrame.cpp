#include <java/awt/Frame$AccessibleAWTFrame.h>

#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef FRAME
#undef RESIZABLE

using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _Frame$AccessibleAWTFrame_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Frame;", nullptr, $FINAL | $SYNTHETIC, $field(Frame$AccessibleAWTFrame, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame$AccessibleAWTFrame, serialVersionUID)},
	{}
};

$MethodInfo _Frame$AccessibleAWTFrame_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, $PROTECTED, $method(static_cast<void(Frame$AccessibleAWTFrame::*)($Frame*)>(&Frame$AccessibleAWTFrame::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Frame$AccessibleAWTFrame_InnerClassesInfo_[] = {
	{"java.awt.Frame$AccessibleAWTFrame", "java.awt.Frame", "AccessibleAWTFrame", $PROTECTED},
	{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
	{}
};

$ClassInfo _Frame$AccessibleAWTFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Frame$AccessibleAWTFrame",
	"java.awt.Window$AccessibleAWTWindow",
	nullptr,
	_Frame$AccessibleAWTFrame_FieldInfo_,
	_Frame$AccessibleAWTFrame_MethodInfo_,
	nullptr,
	nullptr,
	_Frame$AccessibleAWTFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Frame"
};

$Object* allocate$Frame$AccessibleAWTFrame($Class* clazz) {
	return $of($alloc(Frame$AccessibleAWTFrame));
}

void Frame$AccessibleAWTFrame::init$($Frame* this$0) {
	$set(this, this$0, this$0);
	$Window$AccessibleAWTWindow::init$(this$0);
}

$AccessibleRole* Frame$AccessibleAWTFrame::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FRAME;
}

$AccessibleStateSet* Frame$AccessibleAWTFrame::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Window$AccessibleAWTWindow::getAccessibleStateSet());
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	return states;
}

Frame$AccessibleAWTFrame::Frame$AccessibleAWTFrame() {
}

$Class* Frame$AccessibleAWTFrame::load$($String* name, bool initialize) {
	$loadClass(Frame$AccessibleAWTFrame, name, initialize, &_Frame$AccessibleAWTFrame_ClassInfo_, allocate$Frame$AccessibleAWTFrame);
	return class$;
}

$Class* Frame$AccessibleAWTFrame::class$ = nullptr;

	} // awt
} // java