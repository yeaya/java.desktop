#include <bug6520101.h>

#include <bug6520101$1.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef ALWAYS_NEW_INSTANCE
#undef ATTEMPTS
#undef AUTO_CLOSE_DIALOG
#undef CHOOSER
#undef DO_GC_EACH_INTERVAL
#undef INTERVAL
#undef UPDATE_UI_EACH_INTERVAL

using $bug6520101$1 = ::bug6520101$1;
using $Component = ::java::awt::Component;
using $ActionListener = ::java::awt::event::ActionListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFileChooser = ::javax::swing::JFileChooser;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug6520101_FieldInfo_[] = {
	{"ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, ATTEMPTS)},
	{"INTERVAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, INTERVAL)},
	{"ALWAYS_NEW_INSTANCE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, ALWAYS_NEW_INSTANCE)},
	{"DO_GC_EACH_INTERVAL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, DO_GC_EACH_INTERVAL)},
	{"UPDATE_UI_EACH_INTERVAL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, UPDATE_UI_EACH_INTERVAL)},
	{"AUTO_CLOSE_DIALOG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, AUTO_CLOSE_DIALOG)},
	{"CHOOSER", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC, $staticField(bug6520101, CHOOSER)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $FINAL, $field(bug6520101, chooser)},
	{}
};

$MethodInfo _bug6520101_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(static_cast<void(bug6520101::*)($JFileChooser*)>(&bug6520101::init$))},
	{"doAttempt", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6520101::doAttempt)), "java.lang.InterruptedException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6520101::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6520101_InnerClassesInfo_[] = {
	{"bug6520101$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6520101_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6520101",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6520101_FieldInfo_,
	_bug6520101_MethodInfo_,
	nullptr,
	nullptr,
	_bug6520101_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6520101$1"
};

$Object* allocate$bug6520101($Class* clazz) {
	return $of($alloc(bug6520101));
}

$JFileChooser* bug6520101::CHOOSER = nullptr;

void bug6520101::main($StringArray* args) {
	$init(bug6520101);
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s);
	for (int32_t i = 0; i < bug6520101::ATTEMPTS; ++i) {
		doAttempt();
	}
	$init($System);
	$nc($System::out)->println("Test passed successfully"_s);
}

void bug6520101::doAttempt() {
	$init(bug6520101);
	$useLocalCurrentObjectStackCache();
	if (bug6520101::CHOOSER == nullptr) {
		$assignStatic(bug6520101::CHOOSER, $new($JFileChooser, "."_s));
	}
	{
		$nc(bug6520101::CHOOSER)->updateUI();
	}
	{
		$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(bug6520101, bug6520101::CHOOSER))));
		t->start();
		$nc(bug6520101::CHOOSER)->showOpenDialog(nullptr);
		t->join();
	}
}

void bug6520101::init$($JFileChooser* chooser) {
	$set(this, chooser, chooser);
}

void bug6520101::run() {
	$useLocalCurrentObjectStackCache();
	while (!$nc(this->chooser)->isShowing()) {
		try {
			$Thread::sleep(30);
		} catch ($InterruptedException&) {
			$var($InterruptedException, exception, $catch());
			exception->printStackTrace();
		}
	}
	$var($Timer, timer, $new($Timer, bug6520101::INTERVAL, $$new($bug6520101$1, this)));
	timer->setRepeats(false);
	timer->start();
}

bug6520101::bug6520101() {
}

$Class* bug6520101::load$($String* name, bool initialize) {
	$loadClass(bug6520101, name, initialize, &_bug6520101_ClassInfo_, allocate$bug6520101);
	return class$;
}

$Class* bug6520101::class$ = nullptr;