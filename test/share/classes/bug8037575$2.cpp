#include <bug8037575$2.h>

#include <Sysout.h>
#include <bug8037575.h>
#include <java/awt/Frame.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $Sysout = ::Sysout;
using $bug8037575 = ::bug8037575;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8037575$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8037575$2::*)()>(&bug8037575$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8037575$2_EnclosingMethodInfo_ = {
	"bug8037575",
	"runTest",
	"()V"
};

$InnerClassInfo _bug8037575$2_InnerClassesInfo_[] = {
	{"bug8037575$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8037575$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8037575$2",
	"javax.swing.AbstractAction",
	nullptr,
	nullptr,
	_bug8037575$2_MethodInfo_,
	nullptr,
	&_bug8037575$2_EnclosingMethodInfo_,
	_bug8037575$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8037575"
};

$Object* allocate$bug8037575$2($Class* clazz) {
	return $of($alloc(bug8037575$2));
}

void bug8037575$2::init$() {
	$AbstractAction::init$();
}

void bug8037575$2::actionPerformed($ActionEvent* ae) {
	$init($bug8037575);
	$nc($bug8037575::frame)->setExtendedState($Frame::ICONIFIED);
	$nc($bug8037575::frame)->dispose();
	$Sysout::println("Test completed please press/fail button"_s);
}

bug8037575$2::bug8037575$2() {
}

$Class* bug8037575$2::load$($String* name, bool initialize) {
	$loadClass(bug8037575$2, name, initialize, &_bug8037575$2_ClassInfo_, allocate$bug8037575$2);
	return class$;
}

$Class* bug8037575$2::class$ = nullptr;