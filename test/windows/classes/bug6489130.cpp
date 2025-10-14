#include <bug6489130.h>

#include <bug6489130$1.h>
#include <bug6489130$2.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef MUX
#undef SECONDS

using $bug6489130$1 = ::bug6489130$1;
using $bug6489130$2 = ::bug6489130$2;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

$FieldInfo _bug6489130_FieldInfo_[] = {
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $FINAL, $field(bug6489130, chooser)},
	{"MUX", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6489130, MUX)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $FINAL, $field(bug6489130, timer)},
	{"state", "I", nullptr, $PRIVATE, $field(bug6489130, state)},
	{}
};

$MethodInfo _bug6489130_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6489130::*)()>(&bug6489130::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6489130::main)), "java.lang.InterruptedException"},
	{"run", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6489130::*)()>(&bug6489130::run))},
	{}
};

$InnerClassInfo _bug6489130_InnerClassesInfo_[] = {
	{"bug6489130$2", nullptr, nullptr, 0},
	{"bug6489130$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6489130_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6489130",
	"java.lang.Object",
	nullptr,
	_bug6489130_FieldInfo_,
	_bug6489130_MethodInfo_,
	nullptr,
	nullptr,
	_bug6489130_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6489130$2,bug6489130$1,bug6489130$1$1"
};

$Object* allocate$bug6489130($Class* clazz) {
	return $of($alloc(bug6489130));
}

$CountDownLatch* bug6489130::MUX = nullptr;

void bug6489130::init$() {
	$set(this, chooser, $new($JFileChooser));
	$set(this, timer, $new($Timer, 1000, $$new($bug6489130$1, this)));
	this->state = 0;
}

void bug6489130::main($StringArray* args) {
	$init(bug6489130);
	$SwingUtilities::invokeLater($$new($bug6489130$2));
	$init($TimeUnit);
	if (!$nc(bug6489130::MUX)->await(10, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "Timeout"_s);
	}
}

void bug6489130::run() {
	$nc(this->timer)->start();
}

void clinit$bug6489130($Class* class$) {
	$assignStatic(bug6489130::MUX, $new($CountDownLatch, 1));
}

bug6489130::bug6489130() {
}

$Class* bug6489130::load$($String* name, bool initialize) {
	$loadClass(bug6489130, name, initialize, &_bug6489130_ClassInfo_, clinit$bug6489130, allocate$bug6489130);
	return class$;
}

$Class* bug6489130::class$ = nullptr;