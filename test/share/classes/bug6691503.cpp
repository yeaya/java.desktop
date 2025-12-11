#include <bug6691503.h>

#include <bug6691503$1.h>
#include <bug6691503$2.h>
#include <bug6691503$3.h>
#include <bug6691503$4.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6691503$1 = ::bug6691503$1;
using $bug6691503$2 = ::bug6691503$2;
using $bug6691503$3 = ::bug6691503$3;
using $bug6691503$4 = ::bug6691503$4;
using $Robot = ::java::awt::Robot;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6691503_FieldInfo_[] = {
	{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(bug6691503, popupMenu)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6691503, frame)},
	{"isAlwaysOnTop1", "Z", nullptr, $PRIVATE, $field(bug6691503, isAlwaysOnTop1)},
	{"isAlwaysOnTop2", "Z", nullptr, $PRIVATE, $field(bug6691503, isAlwaysOnTop2)},
	{}
};

$MethodInfo _bug6691503_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6691503::*)()>(&bug6691503::init$))},
	{"checkResult", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6691503::*)()>(&bug6691503::checkResult))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6691503::main))},
	{"setupUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6691503::*)()>(&bug6691503::setupUI))},
	{"stopEDT", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6691503::*)()>(&bug6691503::stopEDT))},
	{"testApplet", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6691503::*)()>(&bug6691503::testApplet))},
	{"testApplication", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6691503::*)()>(&bug6691503::testApplication))},
	{}
};

$InnerClassInfo _bug6691503_InnerClassesInfo_[] = {
	{"bug6691503$4", nullptr, nullptr, 0},
	{"bug6691503$3", nullptr, nullptr, 0},
	{"bug6691503$2", nullptr, nullptr, 0},
	{"bug6691503$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6691503_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6691503",
	"java.lang.Object",
	nullptr,
	_bug6691503_FieldInfo_,
	_bug6691503_MethodInfo_,
	nullptr,
	nullptr,
	_bug6691503_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6691503$4,bug6691503$3,bug6691503$2,bug6691503$1"
};

$Object* allocate$bug6691503($Class* clazz) {
	return $of($alloc(bug6691503));
}

void bug6691503::init$() {
	this->isAlwaysOnTop1 = false;
	this->isAlwaysOnTop2 = true;
}

void bug6691503::main($StringArray* args) {
	$var(bug6691503, test, $new(bug6691503));
	test->setupUI();
	test->testApplication();
	test->testApplet();
	test->checkResult();
	test->stopEDT();
}

void bug6691503::setupUI() {
	$SwingUtilities::invokeLater($$new($bug6691503$1, this));
}

void bug6691503::testApplication() {
	$SwingUtilities::invokeLater($$new($bug6691503$2, this));
}

void bug6691503::testApplet() {
	$SwingUtilities::invokeLater($$new($bug6691503$3, this));
}

void bug6691503::checkResult() {
	try {
		$var($Robot, robot, $new($Robot));
		robot->waitForIdle();
	} catch ($Exception& ex) {
		ex->printStackTrace();
		$throwNew($RuntimeException, "Unexpected failure"_s);
	}
	if (!this->isAlwaysOnTop1 || this->isAlwaysOnTop2) {
		$throwNew($RuntimeException, "Malicious applet can show always-on-top popup menu which has whole screen size"_s);
	}
	$nc($System::out)->println("Test passed"_s);
}

void bug6691503::stopEDT() {
	$SwingUtilities::invokeLater($$new($bug6691503$4, this));
}

bug6691503::bug6691503() {
}

$Class* bug6691503::load$($String* name, bool initialize) {
	$loadClass(bug6691503, name, initialize, &_bug6691503_ClassInfo_, allocate$bug6691503);
	return class$;
}

$Class* bug6691503::class$ = nullptr;