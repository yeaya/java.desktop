#include <bug6542335.h>

#include <bug6542335$1.h>
#include <bug6542335$2.h>
#include <bug6542335$3.h>
#include <bug6542335$MyScrollBarUI.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
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
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6542335$1 = ::bug6542335$1;
using $bug6542335$2 = ::bug6542335$2;
using $bug6542335$3 = ::bug6542335$3;
using $bug6542335$MyScrollBarUI = ::bug6542335$MyScrollBarUI;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
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
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6542335$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6542335$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6542335::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6542335$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6542335$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6542335$$Lambda$lambda$main$0::*)()>(&bug6542335$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6542335$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6542335$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6542335$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6542335$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6542335$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6542335_FieldInfo_[] = {
	{"sb", "Ljavax/swing/JScrollBar;", nullptr, $PRIVATE | $STATIC, $staticField(bug6542335, sb)},
	{"ui", "Lbug6542335$MyScrollBarUI;", nullptr, $PRIVATE | $STATIC, $staticField(bug6542335, ui)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6542335, frame)},
	{}
};

$MethodInfo _bug6542335_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6542335::*)()>(&bug6542335::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6542335::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6542335::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6542335_InnerClassesInfo_[] = {
	{"bug6542335$MyScrollBarUI", "bug6542335", "MyScrollBarUI", $STATIC},
	{"bug6542335$3", nullptr, nullptr, 0},
	{"bug6542335$2", nullptr, nullptr, 0},
	{"bug6542335$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6542335_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6542335",
	"java.lang.Object",
	nullptr,
	_bug6542335_FieldInfo_,
	_bug6542335_MethodInfo_,
	nullptr,
	nullptr,
	_bug6542335_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6542335$MyScrollBarUI,bug6542335$3,bug6542335$2,bug6542335$1"
};

$Object* allocate$bug6542335($Class* clazz) {
	return $of($alloc(bug6542335));
}

$JScrollBar* bug6542335::sb = nullptr;
$bug6542335$MyScrollBarUI* bug6542335::ui = nullptr;
$JFrame* bug6542335::frame = nullptr;

void bug6542335::init$() {
}

void bug6542335::main($StringArray* args) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(10);
			$var($RectangleArray, thumbBounds, $new($RectangleArray, 1));
			$SwingUtilities::invokeAndWait($$new($bug6542335$1));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6542335$2, thumbBounds, robot));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6542335$3, thumbBounds));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug6542335);
			if (bug6542335::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6542335$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6542335::lambda$main$0() {
	$init(bug6542335);
	$nc(bug6542335::frame)->dispose();
}

bug6542335::bug6542335() {
}

$Class* bug6542335::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6542335$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6542335$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6542335, name, initialize, &_bug6542335_ClassInfo_, allocate$bug6542335);
	return class$;
}

$Class* bug6542335::class$ = nullptr;