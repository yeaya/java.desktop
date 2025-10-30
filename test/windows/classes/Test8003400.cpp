#include <Test8003400.h>

#include <Test8003400$1.h>
#include <Test8003400$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef OBJECTS
#undef TITLE
#undef VK_END

using $Test8003400$1 = ::Test8003400$1;
using $Test8003400$2 = ::Test8003400$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class Test8003400$$Lambda$lambda$main$0 : public $Runnable {
	$class(Test8003400$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test8003400::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8003400$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8003400$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8003400$$Lambda$lambda$main$0::*)()>(&Test8003400$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8003400$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8003400$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test8003400$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Test8003400$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8003400$$Lambda$lambda$main$0::class$ = nullptr;

class Test8003400$$Lambda$dispose$1 : public $Runnable {
	$class(Test8003400$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8003400$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test8003400$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Test8003400$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo Test8003400$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(Test8003400$$Lambda$dispose$1::*)($Window*)>(&Test8003400$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8003400$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8003400$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test8003400$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(Test8003400$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8003400$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _Test8003400_FieldInfo_[] = {
	{"TITLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8003400, TITLE)},
	{"OBJECTS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Test8003400, OBJECTS)},
	{"pane", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(Test8003400, pane)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test8003400, frame)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(Test8003400, tree)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(Test8003400, point)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(Test8003400, rect)},
	{}
};

$MethodInfo _Test8003400_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8003400::*)()>(&Test8003400::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&Test8003400::blockTillDisplayed))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test8003400::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8003400::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test8003400_InnerClassesInfo_[] = {
	{"Test8003400$2", nullptr, nullptr, 0},
	{"Test8003400$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8003400_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8003400",
	"java.lang.Object",
	nullptr,
	_Test8003400_FieldInfo_,
	_Test8003400_MethodInfo_,
	nullptr,
	nullptr,
	_Test8003400_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test8003400$2,Test8003400$1"
};

$Object* allocate$Test8003400($Class* clazz) {
	return $of($alloc(Test8003400));
}

$String* Test8003400::TITLE = nullptr;
$List* Test8003400::OBJECTS = nullptr;
$JScrollPane* Test8003400::pane = nullptr;
$JFrame* Test8003400::frame = nullptr;
$JTree* Test8003400::tree = nullptr;
$Point* Test8003400::point = nullptr;
$Rectangle* Test8003400::rect = nullptr;

void Test8003400::init$() {
}

void Test8003400::blockTillDisplayed($Component* comp) {
	$init(Test8003400);
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(500);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void Test8003400::main($StringArray* args) {
	$init(Test8003400);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, args);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, arg, arr$->get(i$));
			{
				if ($nc(arg)->equals("reverse"_s)) {
					$Collections::reverse(Test8003400::OBJECTS);
				}
			}
		}
	}
	$var($UIManager$LookAndFeelInfoArray, infos, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, infos);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(info)->getClassName()));
				$nc($System::out)->println($($nc(info)->getClassName()));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$SwingUtilities::invokeAndWait($$new($Test8003400$1));
						blockTillDisplayed(Test8003400::frame);
						$var($Robot, robot, $new($Robot));
						robot->setAutoDelay(100);
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8003400$$Lambda$lambda$main$0)));
						robot->waitForIdle();
						robot->delay(500);
						robot->mouseMove($nc(Test8003400::point)->x + $nc(Test8003400::rect)->width / 2, $nc(Test8003400::point)->y + $nc(Test8003400::rect)->height / 3);
						robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
						robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
						robot->waitForIdle();
						robot->delay(1000);
						robot->keyPress($KeyEvent::VK_END);
						robot->keyRelease($KeyEvent::VK_END);
						robot->waitForIdle();
						robot->delay(1000);
						$SwingUtilities::invokeAndWait($$new($Test8003400$2));
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (Test8003400::frame != nullptr) {
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8003400$$Lambda$dispose$1, static_cast<$JFrame*>($nc(Test8003400::frame)))));
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

void Test8003400::lambda$main$0() {
	$init(Test8003400);
	$assignStatic(Test8003400::point, $nc(Test8003400::tree)->getLocationOnScreen());
	$assignStatic(Test8003400::rect, $nc(Test8003400::tree)->getBounds());
}

void clinit$Test8003400($Class* class$) {
	$assignStatic(Test8003400::TITLE, "Test JTree with a large model"_s);
	$assignStatic(Test8003400::OBJECTS, $Arrays::asList($$new($StringArray, {
		Test8003400::TITLE,
		"x"_s,
		"y"_s,
		"z"_s
	})));
}

Test8003400::Test8003400() {
}

$Class* Test8003400::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test8003400$$Lambda$lambda$main$0::classInfo$.name)) {
			return Test8003400$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(Test8003400$$Lambda$dispose$1::classInfo$.name)) {
			return Test8003400$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(Test8003400, name, initialize, &_Test8003400_ClassInfo_, clinit$Test8003400, allocate$Test8003400);
	return class$;
}

$Class* Test8003400::class$ = nullptr;