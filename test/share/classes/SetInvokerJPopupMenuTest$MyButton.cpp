#include <SetInvokerJPopupMenuTest$MyButton.h>

#include <SetInvokerJPopupMenuTest.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $SetInvokerJPopupMenuTest = ::SetInvokerJPopupMenuTest;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _SetInvokerJPopupMenuTest$MyButton_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SetInvokerJPopupMenuTest$MyButton::*)($String*)>(&SetInvokerJPopupMenuTest$MyButton::init$))},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SetInvokerJPopupMenuTest$MyButton_InnerClassesInfo_[] = {
	{"SetInvokerJPopupMenuTest$MyButton", "SetInvokerJPopupMenuTest", "MyButton", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SetInvokerJPopupMenuTest$MyButton_ClassInfo_ = {
	$ACC_SUPER,
	"SetInvokerJPopupMenuTest$MyButton",
	"javax.swing.JButton",
	nullptr,
	nullptr,
	_SetInvokerJPopupMenuTest$MyButton_MethodInfo_,
	nullptr,
	nullptr,
	_SetInvokerJPopupMenuTest$MyButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SetInvokerJPopupMenuTest"
};

$Object* allocate$SetInvokerJPopupMenuTest$MyButton($Class* clazz) {
	return $of($alloc(SetInvokerJPopupMenuTest$MyButton));
}

void SetInvokerJPopupMenuTest$MyButton::init$($String* string) {
	$JButton::init$(string);
}

void SetInvokerJPopupMenuTest$MyButton::processMouseEvent($MouseEvent* e) {
	$JButton::processMouseEvent(e);
}

SetInvokerJPopupMenuTest$MyButton::SetInvokerJPopupMenuTest$MyButton() {
}

$Class* SetInvokerJPopupMenuTest$MyButton::load$($String* name, bool initialize) {
	$loadClass(SetInvokerJPopupMenuTest$MyButton, name, initialize, &_SetInvokerJPopupMenuTest$MyButton_ClassInfo_, allocate$SetInvokerJPopupMenuTest$MyButton);
	return class$;
}

$Class* SetInvokerJPopupMenuTest$MyButton::class$ = nullptr;