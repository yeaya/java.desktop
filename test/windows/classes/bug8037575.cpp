#include <bug8037575.h>

#include <Sysout.h>
#include <bug8037575$1.h>
#include <bug8037575$2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef SEVERE

using $Sysout = ::Sysout;
using $bug8037575$1 = ::bug8037575$1;
using $bug8037575$2 = ::bug8037575$2;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

$FieldInfo _bug8037575_FieldInfo_[] = {
	{"theTestPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, theTestPassed)},
	{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, testGeneratedInterrupt)},
	{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, mainThread)},
	{"sleepTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, sleepTime)},
	{"waitTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, waitTime)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8037575, frame)},
	{}
};

$MethodInfo _bug8037575_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8037575::*)()>(&bug8037575::init$))},
	{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&bug8037575::fail))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8037575::init)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8037575::main)), "java.lang.InterruptedException"},
	{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&bug8037575::pass))},
	{"runTest", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&bug8037575::runTest))},
	{}
};

$InnerClassInfo _bug8037575_InnerClassesInfo_[] = {
	{"bug8037575$2", nullptr, nullptr, 0},
	{"bug8037575$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8037575_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8037575",
	"java.lang.Object",
	nullptr,
	_bug8037575_FieldInfo_,
	_bug8037575_MethodInfo_,
	nullptr,
	nullptr,
	_bug8037575_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8037575$2,bug8037575$1"
};

$Object* allocate$bug8037575($Class* clazz) {
	return $of($alloc(bug8037575));
}

bool bug8037575::theTestPassed = false;
bool bug8037575::testGeneratedInterrupt = false;
$Thread* bug8037575::mainThread = nullptr;
int32_t bug8037575::sleepTime = 0;
int32_t bug8037575::waitTime = 0;
$JFrame* bug8037575::frame = nullptr;

void bug8037575::init$() {
}

void bug8037575::init() {
	$init(bug8037575);
	$SwingUtilities::invokeAndWait($$new($bug8037575$1));
}

void bug8037575::main($StringArray* args) {
	$init(bug8037575);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(bug8037575::mainThread, $Thread::currentThread());
	try {
		init();
	} catch ($Exception& ex) {
		$init($Level);
		$nc($($Logger::getLogger($(bug8037575::class$->getName()))))->log($Level::SEVERE, ($String*)nullptr, static_cast<$Throwable*>(ex));
	}
	try {
		$nc(bug8037575::mainThread)->sleep(bug8037575::sleepTime);
	} catch ($InterruptedException& ex) {
		$Sysout::dispose();
		if (!bug8037575::theTestPassed && bug8037575::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	}
	if (!bug8037575::testGeneratedInterrupt) {
		$Sysout::dispose();
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void bug8037575::pass() {
	$load(bug8037575);
	$synchronized(class$) {
		$init(bug8037575);
		bug8037575::theTestPassed = true;
		bug8037575::testGeneratedInterrupt = true;
		$nc(bug8037575::mainThread)->interrupt();
	}
}

void bug8037575::runTest() {
	$load(bug8037575);
	$synchronized(class$) {
		$init(bug8037575);
		$useLocalCurrentObjectStackCache();
		$nc(bug8037575::frame)->setSize(800, 600);
		$nc(bug8037575::frame)->setVisible(true);
		$nc(bug8037575::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
		$var($Timer, timer, $new($Timer, bug8037575::waitTime, $$new($bug8037575$2)));
		timer->setRepeats(false);
		timer->start();
	}
}

void bug8037575::fail() {
	$load(bug8037575);
	$synchronized(class$) {
		$init(bug8037575);
		bug8037575::theTestPassed = false;
		bug8037575::testGeneratedInterrupt = true;
		$nc(bug8037575::mainThread)->interrupt();
	}
}

void clinit$bug8037575($Class* class$) {
	bug8037575::sleepTime = 30000;
	bug8037575::waitTime = 2000;
	$assignStatic(bug8037575::frame, $new($JFrame, "bug8037575"_s));
}

bug8037575::bug8037575() {
}

$Class* bug8037575::load$($String* name, bool initialize) {
	$loadClass(bug8037575, name, initialize, &_bug8037575_ClassInfo_, clinit$bug8037575, allocate$bug8037575);
	return class$;
}

$Class* bug8037575::class$ = nullptr;