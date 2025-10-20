#include <bug7138665.h>

#include <bug7138665$1.h>
#include <java/awt/Robot.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef VK_ENTER

using $bug7138665$1 = ::bug7138665$1;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug7138665_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7138665::*)()>(&bug7138665::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7138665::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7138665_InnerClassesInfo_[] = {
	{"bug7138665$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7138665_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7138665",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug7138665_MethodInfo_,
	nullptr,
	nullptr,
	_bug7138665_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7138665$1"
};

$Object* allocate$bug7138665($Class* clazz) {
	return $of($alloc(bug7138665));
}

void bug7138665::init$() {
}

void bug7138665::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeLater($$new($bug7138665$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->setAutoDelay(100);
	robot->keyPress($KeyEvent::VK_ENTER);
	robot->keyRelease($KeyEvent::VK_ENTER);
	robot->waitForIdle();
}

bug7138665::bug7138665() {
}

$Class* bug7138665::load$($String* name, bool initialize) {
	$loadClass(bug7138665, name, initialize, &_bug7138665_ClassInfo_, allocate$bug7138665);
	return class$;
}

$Class* bug7138665::class$ = nullptr;