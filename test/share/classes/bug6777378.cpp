#include <bug6777378.h>

#include <bug6777378$1.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $bug6777378$1 = ::bug6777378$1;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTableHeader = ::javax::swing::table::JTableHeader;

class bug6777378$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6777378$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6777378::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6777378$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6777378$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6777378$$Lambda$lambda$main$0::*)()>(&bug6777378$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6777378$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6777378$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6777378$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6777378$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6777378$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6777378_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6777378, frame)},
	{"header", "Ljavax/swing/table/JTableHeader;", nullptr, $PRIVATE | $STATIC, $staticField(bug6777378, header)},
	{}
};

$MethodInfo _bug6777378_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6777378::*)()>(&bug6777378::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6777378::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6777378::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6777378_InnerClassesInfo_[] = {
	{"bug6777378$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6777378_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6777378",
	"java.lang.Object",
	nullptr,
	_bug6777378_FieldInfo_,
	_bug6777378_MethodInfo_,
	nullptr,
	nullptr,
	_bug6777378_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6777378$1,bug6777378$1$1"
};

$Object* allocate$bug6777378($Class* clazz) {
	return $of($alloc(bug6777378));
}

$JFrame* bug6777378::frame = nullptr;
$JTableHeader* bug6777378::header = nullptr;

void bug6777378::init$() {
}

void bug6777378::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(20);
			$SwingUtilities::invokeAndWait($$new($bug6777378$1));
			robot->waitForIdle();
			$init(bug6777378);
			$var($Point, point, $nc(bug6777378::header)->getLocationOnScreen());
			robot->mouseMove($nc(point)->x + 20, point->y + 50);
			robot->mouseMove($nc(point)->x + 30, point->y + 50);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(bug6777378);
			if (bug6777378::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6777378$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6777378::lambda$main$0() {
	$init(bug6777378);
	$nc(bug6777378::frame)->dispose();
}

bug6777378::bug6777378() {
}

$Class* bug6777378::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6777378$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6777378$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6777378, name, initialize, &_bug6777378_ClassInfo_, allocate$bug6777378);
	return class$;
}

$Class* bug6777378::class$ = nullptr;