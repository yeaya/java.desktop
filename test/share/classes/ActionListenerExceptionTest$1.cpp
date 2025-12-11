#include <ActionListenerExceptionTest$1.h>

#include <ActionListenerExceptionTest$1$1.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ActionListenerExceptionTest$1$1 = ::ActionListenerExceptionTest$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _ActionListenerExceptionTest$1_FieldInfo_[] = {
	{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$1, this$0)},
	{}
};

$MethodInfo _ActionListenerExceptionTest$1_MethodInfo_[] = {
	{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(static_cast<void(ActionListenerExceptionTest$1::*)($ActionListenerExceptionTest*)>(&ActionListenerExceptionTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ActionListenerExceptionTest$1_EnclosingMethodInfo_ = {
	"ActionListenerExceptionTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _ActionListenerExceptionTest$1_InnerClassesInfo_[] = {
	{"ActionListenerExceptionTest$1", nullptr, nullptr, 0},
	{"ActionListenerExceptionTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ActionListenerExceptionTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ActionListenerExceptionTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ActionListenerExceptionTest$1_FieldInfo_,
	_ActionListenerExceptionTest$1_MethodInfo_,
	nullptr,
	&_ActionListenerExceptionTest$1_EnclosingMethodInfo_,
	_ActionListenerExceptionTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ActionListenerExceptionTest"
};

$Object* allocate$ActionListenerExceptionTest$1($Class* clazz) {
	return $of($alloc(ActionListenerExceptionTest$1));
}

void ActionListenerExceptionTest$1::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$set(this->this$0, frame, $new($JFrame));
	$nc(this->this$0->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$set(this->this$0, combo, $new($JComboBox, $$new($StringArray, {
		"One"_s,
		"Two"_s,
		"Three"_s
	})));
	$nc(this->this$0->combo)->addActionListener($$new($ActionListenerExceptionTest$1$1, this));
	$nc(this->this$0->combo)->setSize(200, 20);
	$nc(this->this$0->frame)->add(static_cast<$Component*>(this->this$0->combo));
	$nc(this->this$0->frame)->pack();
	$nc(this->this$0->frame)->setLocationRelativeTo(nullptr);
	$nc(this->this$0->frame)->setVisible(true);
}

ActionListenerExceptionTest$1::ActionListenerExceptionTest$1() {
}

$Class* ActionListenerExceptionTest$1::load$($String* name, bool initialize) {
	$loadClass(ActionListenerExceptionTest$1, name, initialize, &_ActionListenerExceptionTest$1_ClassInfo_, allocate$ActionListenerExceptionTest$1);
	return class$;
}

$Class* ActionListenerExceptionTest$1::class$ = nullptr;