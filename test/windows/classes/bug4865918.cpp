#include <bug4865918.h>

#include <bug4865918$1.h>
#include <bug4865918$2.h>
#include <bug4865918$3.h>
#include <bug4865918$TestScrollBar.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL

using $bug4865918$1 = ::bug4865918$1;
using $bug4865918$2 = ::bug4865918$2;
using $bug4865918$3 = ::bug4865918$3;
using $bug4865918$TestScrollBar = ::bug4865918$TestScrollBar;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug4865918$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4865918$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4865918::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4865918$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4865918$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4865918$$Lambda$lambda$main$0::*)()>(&bug4865918$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4865918$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4865918$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4865918$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4865918$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4865918$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug4865918_FieldInfo_[] = {
	{"sbar", "Lbug4865918$TestScrollBar;", nullptr, $PRIVATE | $STATIC, $staticField(bug4865918, sbar)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4865918, frame)},
	{}
};

$MethodInfo _bug4865918_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4865918::*)()>(&bug4865918::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4865918::createAndShowGUI))},
	{"getValue", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&bug4865918::getValue)), "java.lang.Exception"},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4865918::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4865918::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4865918_InnerClassesInfo_[] = {
	{"bug4865918$TestScrollBar", "bug4865918", "TestScrollBar", $STATIC},
	{"bug4865918$3", nullptr, nullptr, 0},
	{"bug4865918$2", nullptr, nullptr, 0},
	{"bug4865918$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4865918_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4865918",
	"java.lang.Object",
	nullptr,
	_bug4865918_FieldInfo_,
	_bug4865918_MethodInfo_,
	nullptr,
	nullptr,
	_bug4865918_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4865918$TestScrollBar,bug4865918$3,bug4865918$2,bug4865918$1"
};

$Object* allocate$bug4865918($Class* clazz) {
	return $of($alloc(bug4865918));
}

$bug4865918$TestScrollBar* bug4865918::sbar = nullptr;
$JFrame* bug4865918::frame = nullptr;

void bug4865918::init$() {
}

void bug4865918::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			$SwingUtilities::invokeAndWait($$new($bug4865918$1));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug4865918$2));
			robot->waitForIdle();
			int32_t value = getValue();
			if (value != 9) {
				$throwNew($Error, "The scrollbar block increment is incorect"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug4865918);
			if (bug4865918::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4865918$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t bug4865918::getValue() {
	$useLocalCurrentObjectStackCache();
	$var($ints, result, $new($ints, 1));
	$SwingUtilities::invokeAndWait($$new($bug4865918$3, result));
	return result->get(0);
}

void bug4865918::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug4865918);
	$assignStatic(bug4865918::frame, $new($JFrame, "bug4865918"_s));
	$nc(bug4865918::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug4865918::sbar, $new($bug4865918$TestScrollBar, $JScrollBar::HORIZONTAL, -1, 10, -100, 100));
	$nc(bug4865918::sbar)->setPreferredSize($$new($Dimension, 200, 20));
	$nc(bug4865918::sbar)->setBlockIncrement(10);
	$nc($($nc(bug4865918::frame)->getContentPane()))->add(static_cast<$Component*>(bug4865918::sbar));
	$nc(bug4865918::frame)->pack();
	$nc(bug4865918::frame)->setVisible(true);
}

void bug4865918::lambda$main$0() {
	$init(bug4865918);
	$nc(bug4865918::frame)->dispose();
}

bug4865918::bug4865918() {
}

$Class* bug4865918::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4865918$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4865918$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug4865918, name, initialize, &_bug4865918_ClassInfo_, allocate$bug4865918);
	return class$;
}

$Class* bug4865918::class$ = nullptr;