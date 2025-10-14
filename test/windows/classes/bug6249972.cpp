#include <bug6249972.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef VK_Z

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6249972$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6249972$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6249972::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6249972$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6249972$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6249972$$Lambda$lambda$main$0::*)()>(&bug6249972$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6249972$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6249972$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6249972$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6249972$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6249972$$Lambda$lambda$main$0::class$ = nullptr;

class bug6249972$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(bug6249972$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6249972* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6249972$$Lambda$lambda$new$1$1>());
	}
	bug6249972* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6249972$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6249972$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo bug6249972$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(Lbug6249972;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6249972$$Lambda$lambda$new$1$1::*)(bug6249972*)>(&bug6249972$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6249972$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6249972$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6249972$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6249972$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6249972$$Lambda$lambda$new$1$1::class$ = nullptr;

class bug6249972$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(bug6249972$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug6249972* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6249972$$Lambda$lambda$test$2$2>());
	}
	bug6249972* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6249972$$Lambda$lambda$test$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6249972$$Lambda$lambda$test$2$2, inst$)},
	{}
};
$MethodInfo bug6249972$$Lambda$lambda$test$2$2::methodInfos[3] = {
	{"<init>", "(Lbug6249972;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6249972$$Lambda$lambda$test$2$2::*)(bug6249972*)>(&bug6249972$$Lambda$lambda$test$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6249972$$Lambda$lambda$test$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6249972$$Lambda$lambda$test$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6249972$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$loadClass(bug6249972$$Lambda$lambda$test$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6249972$$Lambda$lambda$test$2$2::class$ = nullptr;

$FieldInfo _bug6249972_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6249972, frame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6249972, robot)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE, $field(bug6249972, menu)},
	{"testPassed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug6249972, testPassed)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug6249972, p)},
	{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $VOLATILE, $field(bug6249972, size)},
	{}
};

$MethodInfo _bug6249972_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6249972::*)()>(&bug6249972::init$)), "java.lang.Exception"},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6249972::lambda$main$0))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6249972::*)()>(&bug6249972::lambda$new$1))},
	{"lambda$test$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug6249972::*)()>(&bug6249972::lambda$test$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6249972::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6249972::*)()>(&bug6249972::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6249972_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6249972",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_bug6249972_FieldInfo_,
	_bug6249972_MethodInfo_
};

$Object* allocate$bug6249972($Class* clazz) {
	return $of($alloc(bug6249972));
}

$JFrame* bug6249972::frame = nullptr;
$Robot* bug6249972::robot = nullptr;

void bug6249972::main($StringArray* args) {
	$init(bug6249972);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assignStatic(bug6249972::robot, $new($Robot));
			$nc(bug6249972::robot)->setAutoDelay(100);
			$var(bug6249972, bugTest, $new(bug6249972));
			$nc(bug6249972::robot)->waitForIdle();
			$nc(bug6249972::robot)->delay(1000);
			bugTest->test();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (bug6249972::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6249972$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6249972::init$() {
	this->testPassed = false;
	$set(this, p, nullptr);
	$set(this, size, nullptr);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6249972$$Lambda$lambda$new$1$1, this)));
}

void bug6249972::test() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6249972$$Lambda$lambda$test$2$2, this)));
	$nc(this->p)->x += $nc(this->size)->width / 2;
	$nc(this->p)->y += $nc(this->size)->height / 2;
	$nc(bug6249972::robot)->mouseMove($nc(this->p)->x, $nc(this->p)->y);
	$nc(bug6249972::robot)->waitForIdle();
	$nc(bug6249972::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(bug6249972::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(bug6249972::robot)->waitForIdle();
	$nc(bug6249972::robot)->delay(100);
	$nc(bug6249972::robot)->keyPress($KeyEvent::VK_Z);
	$nc(bug6249972::robot)->keyRelease($KeyEvent::VK_Z);
	$nc(bug6249972::robot)->waitForIdle();
	$nc(bug6249972::robot)->delay(1000);
	if (!this->testPassed) {
		$throwNew($RuntimeException, "JMenuItem(String,int) does not handle lower-case mnemonics properly."_s);
	}
	$init($System);
	$nc($System::out)->println("Test passed"_s);
}

void bug6249972::actionPerformed($ActionEvent* e) {
	this->testPassed = true;
}

void bug6249972::lambda$test$2() {
	$set(this, p, $nc(this->menu)->getLocationOnScreen());
	$set(this, size, $nc(this->menu)->getSize());
}

void bug6249972::lambda$new$1() {
	$assignStatic(bug6249972::frame, $new($JFrame, "bug6249972"_s));
	$nc(bug6249972::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JMenuBar, bar, $new($JMenuBar));
	$nc(bug6249972::frame)->setJMenuBar(bar);
	$set(this, menu, $new($JMenu, "Problem"_s));
	bar->add(this->menu);
	$var($JMenuItem, item, $new($JMenuItem, "JMenuItem(String,\'z\')"_s, (int32_t)u'z'));
	item->addActionListener(this);
	$nc(this->menu)->add(item);
	$nc(bug6249972::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6249972::frame)->pack();
	$nc(bug6249972::frame)->setVisible(true);
}

void bug6249972::lambda$main$0() {
	$init(bug6249972);
	$nc(bug6249972::frame)->dispose();
}

bug6249972::bug6249972() {
}

$Class* bug6249972::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6249972$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6249972$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug6249972$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return bug6249972$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(bug6249972$$Lambda$lambda$test$2$2::classInfo$.name)) {
			return bug6249972$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
	}
	$loadClass(bug6249972, name, initialize, &_bug6249972_ClassInfo_, allocate$bug6249972);
	return class$;
}

$Class* bug6249972::class$ = nullptr;