#include <bug6989617.h>

#include <bug6989617$1.h>
#include <bug6989617$2.h>
#include <bug6989617$3.h>
#include <bug6989617$4.h>
#include <bug6989617$5.h>
#include <bug6989617$MyPanel.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6989617$1 = ::bug6989617$1;
using $bug6989617$2 = ::bug6989617$2;
using $bug6989617$3 = ::bug6989617$3;
using $bug6989617$4 = ::bug6989617$4;
using $bug6989617$5 = ::bug6989617$5;
using $bug6989617$MyPanel = ::bug6989617$MyPanel;
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
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6989617$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6989617$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6989617::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6989617$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6989617$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6989617$$Lambda$lambda$main$0::*)()>(&bug6989617$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6989617$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6989617$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6989617$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6989617$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6989617$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6989617_FieldInfo_[] = {
	{"panel", "Lbug6989617$MyPanel;", nullptr, $PRIVATE | $STATIC, $staticField(bug6989617, panel)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug6989617, button)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6989617, frame)},
	{}
};

$MethodInfo _bug6989617_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6989617::*)()>(&bug6989617::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6989617::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6989617::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6989617_InnerClassesInfo_[] = {
	{"bug6989617$MyPanel", "bug6989617", "MyPanel", $STATIC},
	{"bug6989617$5", nullptr, nullptr, 0},
	{"bug6989617$4", nullptr, nullptr, 0},
	{"bug6989617$3", nullptr, nullptr, 0},
	{"bug6989617$2", nullptr, nullptr, 0},
	{"bug6989617$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6989617_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6989617",
	"java.lang.Object",
	nullptr,
	_bug6989617_FieldInfo_,
	_bug6989617_MethodInfo_,
	nullptr,
	nullptr,
	_bug6989617_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6989617$MyPanel,bug6989617$5,bug6989617$4,bug6989617$3,bug6989617$2,bug6989617$1"
};

$Object* allocate$bug6989617($Class* clazz) {
	return $of($alloc(bug6989617));
}

$bug6989617$MyPanel* bug6989617::panel = nullptr;
$JButton* bug6989617::button = nullptr;
$JFrame* bug6989617::frame = nullptr;

void bug6989617::init$() {
}

void bug6989617::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			$SwingUtilities::invokeAndWait($$new($bug6989617$1));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6989617$2));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6989617$3));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6989617$4));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6989617$5));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(bug6989617);
			if (bug6989617::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6989617$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6989617::lambda$main$0() {
	$init(bug6989617);
	$nc(bug6989617::frame)->dispose();
}

bug6989617::bug6989617() {
}

$Class* bug6989617::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6989617$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6989617$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6989617, name, initialize, &_bug6989617_ClassInfo_, allocate$bug6989617);
	return class$;
}

$Class* bug6989617::class$ = nullptr;