#include <bug6987844.h>

#include <bug6987844$1.h>
#include <bug6987844$2.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $bug6987844$1 = ::bug6987844$1;
using $bug6987844$2 = ::bug6987844$2;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6987844$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6987844$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6987844::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6987844$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6987844$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6987844$$Lambda$lambda$main$0::*)()>(&bug6987844$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6987844$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6987844$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6987844$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6987844$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6987844$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6987844_FieldInfo_[] = {
	{"menu1", "Ljavax/swing/JMenu;", nullptr, $STATIC, $staticField(bug6987844, menu1)},
	{"menu2", "Ljavax/swing/JMenu;", nullptr, $STATIC, $staticField(bug6987844, menu2)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug6987844, frame)},
	{}
};

$MethodInfo _bug6987844_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6987844::*)()>(&bug6987844::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6987844::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6987844::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6987844_InnerClassesInfo_[] = {
	{"bug6987844$2", nullptr, nullptr, 0},
	{"bug6987844$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6987844_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6987844",
	"java.lang.Object",
	nullptr,
	_bug6987844_FieldInfo_,
	_bug6987844_MethodInfo_,
	nullptr,
	nullptr,
	_bug6987844_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6987844$2,bug6987844$1"
};

$Object* allocate$bug6987844($Class* clazz) {
	return $of($alloc(bug6987844));
}

$JMenu* bug6987844::menu1 = nullptr;
$JMenu* bug6987844::menu2 = nullptr;
$JFrame* bug6987844::frame = nullptr;

void bug6987844::init$() {
}

void bug6987844::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(200);
			$SwingUtilities::invokeAndWait($$new($bug6987844$1));
			robot->waitForIdle();
			$init(bug6987844);
			$var($Point, point1, $nc(bug6987844::menu1)->getLocationOnScreen());
			$var($Point, point2, $nc(bug6987844::menu2)->getLocationOnScreen());
			robot->mouseMove($nc(point1)->x + 1, point1->y + 1);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->mouseMove($nc(point2)->x + 1, point2->y + 1);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->mouseMove($nc(point1)->x + 1, point1->y + 1);
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6987844$2));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug6987844);
			if (bug6987844::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6987844$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6987844::lambda$main$0() {
	$init(bug6987844);
	$nc(bug6987844::frame)->dispose();
}

bug6987844::bug6987844() {
}

$Class* bug6987844::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6987844$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6987844$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6987844, name, initialize, &_bug6987844_ClassInfo_, allocate$bug6987844);
	return class$;
}

$Class* bug6987844::class$ = nullptr;