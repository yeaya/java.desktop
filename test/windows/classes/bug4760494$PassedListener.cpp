#include <bug4760494$PassedListener.h>

#include <bug4760494.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug4760494 = ::bug4760494;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug4760494$PassedListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4760494$PassedListener::*)()>(&bug4760494$PassedListener::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4760494$PassedListener_InnerClassesInfo_[] = {
	{"bug4760494$PassedListener", "bug4760494", "PassedListener", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _bug4760494$PassedListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4760494$PassedListener",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_bug4760494$PassedListener_MethodInfo_,
	nullptr,
	nullptr,
	_bug4760494$PassedListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4760494"
};

$Object* allocate$bug4760494$PassedListener($Class* clazz) {
	return $of($alloc(bug4760494$PassedListener));
}

void bug4760494$PassedListener::init$() {
}

void bug4760494$PassedListener::actionPerformed($ActionEvent* ev) {
	$init($bug4760494);
	$bug4760494::passed = true;
	$init($System);
	$nc($System::out)->println("passed!"_s);
}

bug4760494$PassedListener::bug4760494$PassedListener() {
}

$Class* bug4760494$PassedListener::load$($String* name, bool initialize) {
	$loadClass(bug4760494$PassedListener, name, initialize, &_bug4760494$PassedListener_ClassInfo_, allocate$bug4760494$PassedListener);
	return class$;
}

$Class* bug4760494$PassedListener::class$ = nullptr;