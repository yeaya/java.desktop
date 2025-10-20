#include <bug6647340.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6647340$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		bug6647340::lambda$main$0(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$main$0>());
	}
	bug6647340* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"test", "Lbug6647340;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$main$0, test)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$main$0::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$main$0::class$ = nullptr;

class bug6647340$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		bug6647340::lambda$main$1(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$main$1$1>());
	}
	bug6647340* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"test", "Lbug6647340;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$main$1$1, test)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$main$1$1::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug6647340$$Lambda$lambda$test1$2$2 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$test1$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test1$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$test1$2$2>());
	}
	bug6647340* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$test1$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$test1$2$2, inst$)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$test1$2$2::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$test1$2$2::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$test1$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$test1$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$test1$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$test1$2$2::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$test1$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$test1$2$2::class$ = nullptr;

class bug6647340$$Lambda$lambda$test2$3$3 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$test2$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test2$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$test2$3$3>());
	}
	bug6647340* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$test2$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$test2$3$3, inst$)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$test2$3$3::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$test2$3$3::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$test2$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$test2$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$test2$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$test2$3$3::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$test2$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$test2$3$3::class$ = nullptr;

class bug6647340$$Lambda$lambda$test2$4$4 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$test2$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test2$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$test2$4$4>());
	}
	bug6647340* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$test2$4$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$test2$4$4, inst$)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$test2$4$4::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$test2$4$4::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$test2$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$test2$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$test2$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$test2$4$4::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$test2$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$test2$4$4::class$ = nullptr;

class bug6647340$$Lambda$lambda$test2$5$5 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$test2$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test2$5();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$test2$5$5>());
	}
	bug6647340* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$test2$5$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$test2$5$5, inst$)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$test2$5$5::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$test2$5$5::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$test2$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$test2$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$test2$5$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$test2$5$5::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$test2$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$test2$5$5::class$ = nullptr;

class bug6647340$$Lambda$lambda$check1$6$6 : public $Runnable {
	$class(bug6647340$$Lambda$lambda$check1$6$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6647340* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$check1$6();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6647340$$Lambda$lambda$check1$6$6>());
	}
	bug6647340* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6647340$$Lambda$lambda$check1$6$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6647340$$Lambda$lambda$check1$6$6, inst$)},
	{}
};
$MethodInfo bug6647340$$Lambda$lambda$check1$6$6::methodInfos[3] = {
	{"<init>", "(Lbug6647340;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340$$Lambda$lambda$check1$6$6::*)(bug6647340*)>(&bug6647340$$Lambda$lambda$check1$6$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6647340$$Lambda$lambda$check1$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6647340$$Lambda$lambda$check1$6$6",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6647340$$Lambda$lambda$check1$6$6::load$($String* name, bool initialize) {
	$loadClass(bug6647340$$Lambda$lambda$check1$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6647340$$Lambda$lambda$check1$6$6::class$ = nullptr;

$FieldInfo _bug6647340_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6647340, frame)},
	{"location", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug6647340, location)},
	{"iconloc", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug6647340, iconloc)},
	{"jif", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $field(bug6647340, jif)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6647340, robot)},
	{}
};

$MethodInfo _bug6647340_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6647340::*)()>(&bug6647340::init$))},
	{"check1", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)()>(&bug6647340::check1)), "java.lang.Exception"},
	{"check2", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)()>(&bug6647340::check2)), "java.lang.Exception"},
	{"lambda$check1$6", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6647340::*)()>(&bug6647340::lambda$check1$6))},
	{"lambda$main$0", "(Lbug6647340;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bug6647340*)>(&bug6647340::lambda$main$0))},
	{"lambda$main$1", "(Lbug6647340;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bug6647340*)>(&bug6647340::lambda$main$1))},
	{"lambda$test1$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6647340::*)()>(&bug6647340::lambda$test1$2))},
	{"lambda$test2$3", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6647340::*)()>(&bug6647340::lambda$test2$3))},
	{"lambda$test2$4", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6647340::*)()>(&bug6647340::lambda$test2$4))},
	{"lambda$test2$5", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6647340::*)()>(&bug6647340::lambda$test2$5))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6647340::main)), "java.lang.Exception"},
	{"setIcon", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)(bool)>(&bug6647340::setIcon))},
	{"setupUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)()>(&bug6647340::setupUI))},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)()>(&bug6647340::test)), "java.lang.Exception"},
	{"test1", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)()>(&bug6647340::test1)), "java.lang.Exception"},
	{"test2", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6647340::*)()>(&bug6647340::test2)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6647340_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6647340",
	"java.lang.Object",
	nullptr,
	_bug6647340_FieldInfo_,
	_bug6647340_MethodInfo_
};

$Object* allocate$bug6647340($Class* clazz) {
	return $of($alloc(bug6647340));
}

$Robot* bug6647340::robot = nullptr;

void bug6647340::init$() {
}

void bug6647340::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug6647340);
	$assignStatic(bug6647340::robot, $new($Robot));
	$var(bug6647340, test, $new(bug6647340));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$main$0, test)));
			$nc(bug6647340::robot)->waitForIdle();
			$nc(bug6647340::robot)->delay(1000);
			test->test();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (test->frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$main$1$1, test)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6647340::setupUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$nc(this->frame)->add(static_cast<$Component*>(desktop));
	$set(this, jif, $new($JInternalFrame, "Internal Frame"_s, true, true, true, true));
	$nc(this->jif)->setBounds(20, 20, 200, 100);
	desktop->add(static_cast<$Component*>(this->jif));
	$nc(this->jif)->setVisible(true);
	$var($Dimension, screen, $nc($($Toolkit::getDefaultToolkit()))->getScreenSize());
	$nc(this->frame)->setBounds(($nc(screen)->width - 400) / 2, (screen->height - 400) / 2, 400, 400);
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->setVisible(true);
}

void bug6647340::test() {
	test1();
	$nc(bug6647340::robot)->waitForIdle();
	$nc(bug6647340::robot)->delay(500);
	check1();
	$nc(bug6647340::robot)->waitForIdle();
	test2();
	$nc(bug6647340::robot)->waitForIdle();
	$nc(bug6647340::robot)->delay(500);
	check2();
}

void bug6647340::test1() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$test1$2$2, this)));
}

void bug6647340::test2() {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$test2$3$3, this)));
	$nc(bug6647340::robot)->waitForIdle();
	$nc(bug6647340::robot)->delay(500);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$test2$4$4, this)));
	$nc(bug6647340::robot)->waitForIdle();
	$nc(bug6647340::robot)->delay(500);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$test2$5$5, this)));
}

void bug6647340::check1() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$check1$6$6, this)));
	if (!$nc(this->iconloc)->equals(this->location)) {
		$init($System);
		$nc($System::out)->println("First test passed"_s);
	} else {
		$throwNew($RuntimeException, "Icon isn\'t shifted with the frame bounds"_s);
	}
}

void bug6647340::check2() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6647340$$Lambda$lambda$check1$6$6, this)));
	if ($nc(this->iconloc)->equals(this->location)) {
		$init($System);
		$nc($System::out)->println("Second test passed"_s);
	} else {
		$throwNew($RuntimeException, "Icon isn\'t located near the frame bottom"_s);
	}
}

void bug6647340::setIcon(bool b) {
	try {
		$nc(this->jif)->setIcon(b);
	} catch ($PropertyVetoException&) {
		$var($PropertyVetoException, e, $catch());
		e->printStackTrace();
	}
}

void bug6647340::lambda$check1$6() {
	$set(this, iconloc, $nc($($nc(this->jif)->getDesktopIcon()))->getLocation());
}

void bug6647340::lambda$test2$5() {
	setIcon(true);
}

void bug6647340::lambda$test2$4() {
	$var($Dimension, size, $nc(this->frame)->getSize());
	$nc(this->frame)->setSize($nc(size)->width - 100, size->height - 100);
}

void bug6647340::lambda$test2$3() {
	setIcon(false);
}

void bug6647340::lambda$test1$2() {
	$useLocalCurrentObjectStackCache();
	setIcon(true);
	$set(this, location, $nc($($nc(this->jif)->getDesktopIcon()))->getLocation());
	$var($Dimension, size, $nc(this->frame)->getSize());
	$nc(this->frame)->setSize($nc(size)->width + 100, size->height + 100);
}

void bug6647340::lambda$main$1(bug6647340* test) {
	$nc($nc(test)->frame)->dispose();
}

void bug6647340::lambda$main$0(bug6647340* test) {
	$nc(test)->setupUI();
}

bug6647340::bug6647340() {
}

$Class* bug6647340::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6647340$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug6647340$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug6647340$$Lambda$lambda$test1$2$2::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$test1$2$2::load$(name, initialize);
		}
		if (name->equals(bug6647340$$Lambda$lambda$test2$3$3::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$test2$3$3::load$(name, initialize);
		}
		if (name->equals(bug6647340$$Lambda$lambda$test2$4$4::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$test2$4$4::load$(name, initialize);
		}
		if (name->equals(bug6647340$$Lambda$lambda$test2$5$5::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$test2$5$5::load$(name, initialize);
		}
		if (name->equals(bug6647340$$Lambda$lambda$check1$6$6::classInfo$.name)) {
			return bug6647340$$Lambda$lambda$check1$6$6::load$(name, initialize);
		}
	}
	$loadClass(bug6647340, name, initialize, &_bug6647340_ClassInfo_, allocate$bug6647340);
	return class$;
}

$Class* bug6647340::class$ = nullptr;