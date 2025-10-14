#include <bug4885629.h>

#include <bug4885629$1.h>
#include <bug4885629$2.h>
#include <bug4885629$3.h>
#include <java/awt/Color.h>
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
#include <javax/swing/JSplitPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

#undef BGCOLOR

using $bug4885629$1 = ::bug4885629$1;
using $bug4885629$2 = ::bug4885629$2;
using $bug4885629$3 = ::bug4885629$3;
using $Color = ::java::awt::Color;
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
using $JSplitPane = ::javax::swing::JSplitPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

class bug4885629$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4885629$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4885629::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4885629$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4885629$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4885629$$Lambda$lambda$main$0::*)()>(&bug4885629$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4885629$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4885629$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4885629$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4885629$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4885629$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug4885629_FieldInfo_[] = {
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, darkShadow)},
	{"darkHighlight", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, darkHighlight)},
	{"lightHighlight", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, lightHighlight)},
	{"BGCOLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, BGCOLOR)},
	{"sp", "Ljavax/swing/JSplitPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4885629, sp)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4885629, frame)},
	{}
};

$MethodInfo _bug4885629_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4885629::*)()>(&bug4885629::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4885629::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4885629::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4885629_InnerClassesInfo_[] = {
	{"bug4885629$3", nullptr, nullptr, 0},
	{"bug4885629$2", nullptr, nullptr, 0},
	{"bug4885629$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4885629_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4885629",
	"java.lang.Object",
	nullptr,
	_bug4885629_FieldInfo_,
	_bug4885629_MethodInfo_,
	nullptr,
	nullptr,
	_bug4885629_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4885629$3,bug4885629$2,bug4885629$1"
};

$Object* allocate$bug4885629($Class* clazz) {
	return $of($alloc(bug4885629));
}

$Color* bug4885629::darkShadow = nullptr;
$Color* bug4885629::darkHighlight = nullptr;
$Color* bug4885629::lightHighlight = nullptr;
$Color* bug4885629::BGCOLOR = nullptr;
$JSplitPane* bug4885629::sp = nullptr;
$JFrame* bug4885629::frame = nullptr;

void bug4885629::init$() {
}

void bug4885629::main($StringArray* args) {
	$init(bug4885629);
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($bug4885629$1)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug4885629$2));
			$var($Robot, robot, $new($Robot));
			robot->waitForIdle();
			robot->delay(1000);
			$SwingUtilities::invokeAndWait($$new($bug4885629$3, robot));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (bug4885629::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4885629$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug4885629::lambda$main$0() {
	$init(bug4885629);
	$nc(bug4885629::frame)->dispose();
}

void clinit$bug4885629($Class* class$) {
	$assignStatic(bug4885629::darkShadow, $new($Color, 100, 120, 200));
	$assignStatic(bug4885629::darkHighlight, $new($Color, 200, 120, 50));
	$assignStatic(bug4885629::lightHighlight, $nc(bug4885629::darkHighlight)->brighter());
	$assignStatic(bug4885629::BGCOLOR, $Color::blue);
}

bug4885629::bug4885629() {
}

$Class* bug4885629::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4885629$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4885629$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug4885629, name, initialize, &_bug4885629_ClassInfo_, clinit$bug4885629, allocate$bug4885629);
	return class$;
}

$Class* bug4885629::class$ = nullptr;