#include <bug4936917.h>

#include <bug4936917$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Timer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug4936917$1 = ::bug4936917$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Timer = ::java::util::Timer;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug4936917$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(bug4936917$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4936917* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4936917$$Lambda$lambda$blockTillDisplayed$0>());
	}
	bug4936917* inst$ = nullptr;
	$JComponent* comp = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4936917$$Lambda$lambda$blockTillDisplayed$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4936917$$Lambda$lambda$blockTillDisplayed$0, inst$)},
	{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(bug4936917$$Lambda$lambda$blockTillDisplayed$0, comp)},
	{}
};
$MethodInfo bug4936917$$Lambda$lambda$blockTillDisplayed$0::methodInfos[3] = {
	{"<init>", "(Lbug4936917;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4936917$$Lambda$lambda$blockTillDisplayed$0::*)(bug4936917*,$JComponent*)>(&bug4936917$$Lambda$lambda$blockTillDisplayed$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4936917$$Lambda$lambda$blockTillDisplayed$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4936917$$Lambda$lambda$blockTillDisplayed$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4936917$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$loadClass(bug4936917$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4936917$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class bug4936917$$Lambda$lambda$destroy$1$1 : public $Runnable {
	$class(bug4936917$$Lambda$lambda$destroy$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4936917::lambda$destroy$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4936917$$Lambda$lambda$destroy$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4936917$$Lambda$lambda$destroy$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4936917$$Lambda$lambda$destroy$1$1::*)()>(&bug4936917$$Lambda$lambda$destroy$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4936917$$Lambda$lambda$destroy$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4936917$$Lambda$lambda$destroy$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4936917$$Lambda$lambda$destroy$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4936917$$Lambda$lambda$destroy$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4936917$$Lambda$lambda$destroy$1$1::class$ = nullptr;

$FieldInfo _bug4936917_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE, $field(bug4936917, passed)},
	{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE, $field(bug4936917, timer)},
	{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(bug4936917, editorPane)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4936917, f)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug4936917, p)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(bug4936917, text)},
	{}
};

$MethodInfo _bug4936917_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4936917::*)()>(&bug4936917::init$))},
	{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"destroy", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"init", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4936917::*)($JComponent*)>(&bug4936917::lambda$blockTillDisplayed$0))},
	{"lambda$destroy$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4936917::lambda$destroy$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4936917::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4936917_InnerClassesInfo_[] = {
	{"bug4936917$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4936917_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4936917",
	"java.lang.Object",
	nullptr,
	_bug4936917_FieldInfo_,
	_bug4936917_MethodInfo_,
	nullptr,
	nullptr,
	_bug4936917_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4936917$1"
};

$Object* allocate$bug4936917($Class* clazz) {
	return $of($alloc(bug4936917));
}

$JFrame* bug4936917::f = nullptr;

void bug4936917::init$() {
	this->passed = false;
	$set(this, p, nullptr);
	$set(this, text, "<html><head><style>body {background-color: #cccccc; margin-top: 36.000000pt;}</style></head><body> some text </body></html>"_s);
}

void bug4936917::init() {
	$SwingUtilities::invokeAndWait($$new($bug4936917$1, this));
	blockTillDisplayed(this->editorPane);
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(300);
	int32_t x0 = $nc(this->p)->x + 15;
	int32_t y = $nc(this->p)->y + 15;
	int32_t match = 0;
	int32_t nonmatch = 0;
	this->passed = true;
	for (int32_t x = x0; x < x0 + 10; ++x) {
		$init($System);
		$nc($System::out)->println($$str({"color ("_s, $$str(x), ","_s, $$str(y), ")="_s, $(robot->getPixelColor(x, y))}));
		if (!$nc($(robot->getPixelColor(x, y)))->equals($$new($Color, 204, 204, 204))) {
			++nonmatch;
		} else {
			++match;
		}
	}
	if (nonmatch > match) {
		this->passed = false;
	}
}

void bug4936917::blockTillDisplayed($JComponent* comp) {
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4936917$$Lambda$lambda$blockTillDisplayed$0, this, comp)));
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException&) {
				$catch();
			}
		}
	}
}

void bug4936917::destroy() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4936917$$Lambda$lambda$destroy$1$1)));
	if (!this->passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void bug4936917::main($StringArray* args) {
	$var(bug4936917, test, $new(bug4936917));
	test->init();
	test->destroy();
}

void bug4936917::lambda$destroy$1() {
	$init(bug4936917);
	$nc(bug4936917::f)->dispose();
}

void bug4936917::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
}

bug4936917::bug4936917() {
}

$Class* bug4936917::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4936917$$Lambda$lambda$blockTillDisplayed$0::classInfo$.name)) {
			return bug4936917$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals(bug4936917$$Lambda$lambda$destroy$1$1::classInfo$.name)) {
			return bug4936917$$Lambda$lambda$destroy$1$1::load$(name, initialize);
		}
	}
	$loadClass(bug4936917, name, initialize, &_bug4936917_ClassInfo_, allocate$bug4936917);
	return class$;
}

$Class* bug4936917::class$ = nullptr;