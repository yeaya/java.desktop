#include <bug4242228.h>

#include <bug4242228$1.h>
#include <bug4242228$2.h>
#include <java/awt/Robot.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug4242228$1 = ::bug4242228$1;
using $bug4242228$2 = ::bug4242228$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug4242228_FieldInfo_[] = {
	{"tabPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4242228, tabPane)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4242228, frame)},
	{}
};

$MethodInfo _bug4242228_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4242228::*)()>(&bug4242228::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4242228::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4242228_InnerClassesInfo_[] = {
	{"bug4242228$2", nullptr, nullptr, 0},
	{"bug4242228$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4242228_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4242228",
	"java.lang.Object",
	nullptr,
	_bug4242228_FieldInfo_,
	_bug4242228_MethodInfo_,
	nullptr,
	nullptr,
	_bug4242228_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4242228$2,bug4242228$1,bug4242228$1$1"
};

$Object* allocate$bug4242228($Class* clazz) {
	return $of($alloc(bug4242228));
}

$JTabbedPane* bug4242228::tabPane = nullptr;
$JFrame* bug4242228::frame = nullptr;

void bug4242228::init$() {
}

void bug4242228::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($bug4242228$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4242228$2));
}

bug4242228::bug4242228() {
}

$Class* bug4242228::load$($String* name, bool initialize) {
	$loadClass(bug4242228, name, initialize, &_bug4242228_ClassInfo_, allocate$bug4242228);
	return class$;
}

$Class* bug4242228::class$ = nullptr;