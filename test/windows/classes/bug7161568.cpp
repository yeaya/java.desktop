#include <bug7161568.h>

#include <bug7161568$1.h>
#include <bug7161568$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef FALSE
#undef N
#undef VK_LEFT

using $bug7161568$1 = ::bug7161568$1;
using $bug7161568$2 = ::bug7161568$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug7161568$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug7161568$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug7161568::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug7161568$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug7161568$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7161568$$Lambda$lambda$main$0::*)()>(&bug7161568$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug7161568$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug7161568$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug7161568$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug7161568$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug7161568$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug7161568_FieldInfo_[] = {
	{"N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug7161568, N)},
	{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug7161568, tabbedPane)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7161568, frame)},
	{}
};

$MethodInfo _bug7161568_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7161568::*)()>(&bug7161568::init$))},
	{"createAndShowUI", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug7161568::createAndShowUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug7161568::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7161568::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7161568_InnerClassesInfo_[] = {
	{"bug7161568$2", nullptr, nullptr, 0},
	{"bug7161568$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7161568_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7161568",
	"java.lang.Object",
	nullptr,
	_bug7161568_FieldInfo_,
	_bug7161568_MethodInfo_,
	nullptr,
	nullptr,
	_bug7161568_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7161568$2,bug7161568$1"
};

$Object* allocate$bug7161568($Class* clazz) {
	return $of($alloc(bug7161568));
}

$JTabbedPane* bug7161568::tabbedPane = nullptr;
$JFrame* bug7161568::frame = nullptr;

void bug7161568::init$() {
}

void bug7161568::main($StringArray* args) {
	$init($Boolean);
	$UIManager::put("TabbedPane.selectionFollowsFocus"_s, $Boolean::FALSE);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(50);
			$SwingUtilities::invokeAndWait($$new($bug7161568$1));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug7161568$2));
			robot->waitForIdle();
			for (int32_t i = 0; i < bug7161568::N; ++i) {
				robot->keyPress($KeyEvent::VK_LEFT);
				robot->keyRelease($KeyEvent::VK_LEFT);
				robot->waitForIdle();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug7161568);
			if (bug7161568::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug7161568$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug7161568::createAndShowUI() {
	$init(bug7161568);
	$assignStatic(bug7161568::frame, $new($JFrame, "Test"_s));
	$nc(bug7161568::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug7161568::frame)->setSize(100, 100);
	$assignStatic(bug7161568::tabbedPane, $new($JTabbedPane));
	for (int32_t i = 0; i < bug7161568::N; ++i) {
		$nc(bug7161568::tabbedPane)->addTab($$str({"Tab: "_s, $$str(i)}), $$new($JLabel, "Test"_s));
	}
	$nc(bug7161568::tabbedPane)->setSelectedIndex(0);
	$nc($($nc(bug7161568::frame)->getContentPane()))->add(static_cast<$Component*>(bug7161568::tabbedPane));
	$nc(bug7161568::frame)->setVisible(true);
}

void bug7161568::lambda$main$0() {
	$init(bug7161568);
	$nc(bug7161568::frame)->dispose();
}

bug7161568::bug7161568() {
}

$Class* bug7161568::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug7161568$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug7161568$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug7161568, name, initialize, &_bug7161568_ClassInfo_, allocate$bug7161568);
	return class$;
}

$Class* bug7161568::class$ = nullptr;