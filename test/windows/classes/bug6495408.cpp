#include <bug6495408.h>

#include <bug6495408$1.h>
#include <bug6495408$2.h>
#include <java/awt/Point.h>
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
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6495408$1 = ::bug6495408$1;
using $bug6495408$2 = ::bug6495408$2;
using $Point = ::java::awt::Point;
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
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6495408$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6495408$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6495408::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6495408$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6495408$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6495408$$Lambda$lambda$main$0::*)()>(&bug6495408$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6495408$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6495408$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6495408$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6495408$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6495408$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6495408_FieldInfo_[] = {
	{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, $STATIC, $staticField(bug6495408, tabbedPane)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug6495408, frame)},
	{}
};

$MethodInfo _bug6495408_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6495408::*)()>(&bug6495408::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6495408::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6495408::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6495408_InnerClassesInfo_[] = {
	{"bug6495408$2", nullptr, nullptr, 0},
	{"bug6495408$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6495408_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6495408",
	"java.lang.Object",
	nullptr,
	_bug6495408_FieldInfo_,
	_bug6495408_MethodInfo_,
	nullptr,
	nullptr,
	_bug6495408_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6495408$2,bug6495408$1"
};

$Object* allocate$bug6495408($Class* clazz) {
	return $of($alloc(bug6495408));
}

$JTabbedPane* bug6495408::tabbedPane = nullptr;
$JFrame* bug6495408::frame = nullptr;

void bug6495408::init$() {
}

void bug6495408::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(50);
			$SwingUtilities::invokeAndWait($$new($bug6495408$1));
			robot->waitForIdle();
			$var($Rectangle, d, $new($Rectangle));
			$var($Point, p, $new($Point));
			for (int32_t i = 0; i < 7; ++i) {
				$SwingUtilities::invokeLater($$new($bug6495408$2, d, p, robot));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug6495408);
			if (bug6495408::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6495408$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6495408::lambda$main$0() {
	$init(bug6495408);
	$nc(bug6495408::frame)->dispose();
}

bug6495408::bug6495408() {
}

$Class* bug6495408::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6495408$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6495408$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6495408, name, initialize, &_bug6495408_ClassInfo_, allocate$bug6495408);
	return class$;
}

$Class* bug6495408::class$ = nullptr;