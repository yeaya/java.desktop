#include <bug4760494.h>

#include <bug4760494$1.h>
#include <bug4760494$PassedListener.h>
#include <bug4760494$TestStateListener.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug4760494$1 = ::bug4760494$1;
using $bug4760494$PassedListener = ::bug4760494$PassedListener;
using $bug4760494$TestStateListener = ::bug4760494$TestStateListener;
using $Robot = ::java::awt::Robot;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4760494$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4760494$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4760494::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4760494$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4760494$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4760494$$Lambda$lambda$main$0::*)()>(&bug4760494$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4760494$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4760494$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4760494$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4760494$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4760494$$Lambda$lambda$main$0::class$ = nullptr;

class bug4760494$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4760494$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4760494::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4760494$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4760494$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4760494$$Lambda$lambda$main$1$1::*)()>(&bug4760494$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4760494$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4760494$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4760494$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4760494$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4760494$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _bug4760494_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4760494, frame)},
	{"pass", "Lbug4760494$PassedListener;", nullptr, $PUBLIC | $STATIC, $staticField(bug4760494, pass)},
	{"tester", "Lbug4760494$TestStateListener;", nullptr, $PUBLIC | $STATIC, $staticField(bug4760494, tester)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PUBLIC | $STATIC, $staticField(bug4760494, robot)},
	{"pressed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4760494, pressed)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4760494, passed)},
	{"popup", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4760494, popup)},
	{}
};

$MethodInfo _bug4760494_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4760494::*)()>(&bug4760494::init$))},
	{"createUI", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug4760494::createUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4760494::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4760494::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4760494::main)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _bug4760494_InnerClassesInfo_[] = {
	{"bug4760494$RobotThread", "bug4760494", "RobotThread", $PUBLIC | $STATIC},
	{"bug4760494$TestStateListener", "bug4760494", "TestStateListener", $PUBLIC | $STATIC},
	{"bug4760494$PassedListener", "bug4760494", "PassedListener", $PUBLIC | $STATIC},
	{"bug4760494$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4760494_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4760494",
	"java.lang.Object",
	nullptr,
	_bug4760494_FieldInfo_,
	_bug4760494_MethodInfo_,
	nullptr,
	nullptr,
	_bug4760494_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4760494$RobotThread,bug4760494$TestStateListener,bug4760494$PassedListener,bug4760494$1"
};

$Object* allocate$bug4760494($Class* clazz) {
	return $of($alloc(bug4760494));
}

$JFrame* bug4760494::frame = nullptr;
$bug4760494$PassedListener* bug4760494::pass = nullptr;
$bug4760494$TestStateListener* bug4760494::tester = nullptr;
$Robot* bug4760494::robot = nullptr;
$volatile(bool) bug4760494::pressed = false;
$volatile(bool) bug4760494::passed = false;
$volatile($JPopupMenu*) bug4760494::popup = nullptr;

void bug4760494::init$() {
}

void bug4760494::main($StringArray* args) {
	$init(bug4760494);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug4760494::pass, $new($bug4760494$PassedListener));
	$assignStatic(bug4760494::tester, $new($bug4760494$TestStateListener));
	$assignStatic(bug4760494::robot, $new($Robot));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4760494$$Lambda$lambda$main$0)));
	while (!bug4760494::pressed) {
		try {
			$Thread::sleep(1000);
		} catch ($InterruptedException& e) {
		}
	}
	int32_t count = 0;
	while (!bug4760494::passed && count < 10) {
		try {
			++count;
			$Thread::sleep(1000);
		} catch ($InterruptedException& e) {
		}
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4760494$$Lambda$lambda$main$1$1)));
	if (!bug4760494::passed) {
		$throwNew($RuntimeException, "Menu item not selected"_s);
	}
}

void bug4760494::createUI() {
	$init(bug4760494);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug4760494::frame, $new($JFrame, "Bug 4760494"_s));
	$nc(bug4760494::frame)->addWindowListener(bug4760494::tester);
	$assignStatic(bug4760494::popup, $new($JPopupMenu));
	$var($JMenuItem, popupItem, $nc(bug4760494::popup)->add($$new($JMenuItem, "Test item"_s)));
	$nc(popupItem)->setMnemonic(u'T');
	popupItem->addActionListener($$new($bug4760494$PassedListener));
	$nc(bug4760494::frame)->addMouseListener($$new($bug4760494$1));
	$nc(bug4760494::frame)->setSize(200, 200);
	$nc(bug4760494::frame)->setLocation(200, 200);
	$nc(bug4760494::frame)->setVisible(true);
	$nc(bug4760494::frame)->toFront();
}

void bug4760494::lambda$main$1() {
	$init(bug4760494);
	$nc(bug4760494::frame)->dispose();
}

void bug4760494::lambda$main$0() {
	$init(bug4760494);
	createUI();
}

void clinit$bug4760494($Class* class$) {
	$assignStatic(bug4760494::frame, nullptr);
	bug4760494::pressed = false;
	bug4760494::passed = false;
	$assignStatic(bug4760494::popup, nullptr);
}

bug4760494::bug4760494() {
}

$Class* bug4760494::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4760494$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4760494$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4760494$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug4760494$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(bug4760494, name, initialize, &_bug4760494_ClassInfo_, clinit$bug4760494, allocate$bug4760494);
	return class$;
}

$Class* bug4760494::class$ = nullptr;