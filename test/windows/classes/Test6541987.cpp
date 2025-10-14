#include <Test6541987.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
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
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BLACK
#undef VK_0
#undef VK_1
#undef VK_ALT
#undef VK_ESCAPE
#undef VK_H
#undef VK_TAB

using $WindowArray = $Array<::java::awt::Window>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class Test6541987$$Lambda$dispose : public $Runnable {
	$class(Test6541987$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6541987$$Lambda$dispose>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test6541987$$Lambda$dispose::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Test6541987$$Lambda$dispose, inst$)},
	{}
};
$MethodInfo Test6541987$$Lambda$dispose::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6541987$$Lambda$dispose::*)($Window*)>(&Test6541987$$Lambda$dispose::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6541987$$Lambda$dispose::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6541987$$Lambda$dispose",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test6541987$$Lambda$dispose::load$($String* name, bool initialize) {
	$loadClass(Test6541987$$Lambda$dispose, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6541987$$Lambda$dispose::class$ = nullptr;

$FieldInfo _Test6541987_FieldInfo_[] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(Test6541987, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6541987, frame)},
	{}
};

$MethodInfo _Test6541987_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6541987::*)()>(&Test6541987::init$))},
	{"click", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($ints*)>(&Test6541987::click))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6541987::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test6541987::start))},
	{}
};

$ClassInfo _Test6541987_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6541987",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6541987_FieldInfo_,
	_Test6541987_MethodInfo_
};

$Object* allocate$Test6541987($Class* clazz) {
	return $of($alloc(Test6541987));
}

$Robot* Test6541987::robot = nullptr;
$JFrame* Test6541987::frame = nullptr;

void Test6541987::init$() {
}

void Test6541987::main($StringArray* args) {
	$init(Test6541987);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assignStatic(Test6541987::robot, $new($Robot));
			$nc(Test6541987::robot)->setAutoDelay(100);
			start();
			click($$new($ints, {$KeyEvent::VK_ESCAPE}));
			$nc(Test6541987::robot)->waitForIdle();
			start();
			click($$new($ints, {$KeyEvent::VK_1}));
			click($$new($ints, {$KeyEvent::VK_0}));
			click($$new($ints, {$KeyEvent::VK_ESCAPE}));
			click($$new($ints, {$KeyEvent::VK_ESCAPE}));
			$nc(Test6541987::robot)->waitForIdle();
			$nc(Test6541987::robot)->delay(500);
			{
				$var($WindowArray, arr$, $Window::getWindows());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Window, window, arr$->get(i$));
					{
						if ($nc(window)->isVisible()) {
							$throwNew($Error, $$str({"found visible window: "_s, $(window->getName())}));
						}
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (Test6541987::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test6541987$$Lambda$dispose, static_cast<$JFrame*>($nc(Test6541987::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Test6541987::start() {
	$init(Test6541987);
	$SwingUtilities::invokeLater($$new(Test6541987));
	click($$new($ints, {
		$KeyEvent::VK_ALT,
		$KeyEvent::VK_H
	}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
}

void Test6541987::click($ints* keys) {
	$init(Test6541987);
	$nc(Test6541987::robot)->waitForIdle();
	{
		$var($ints, arr$, keys);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$nc(Test6541987::robot)->keyPress(key);
			}
		}
	}
	{
		$var($ints, arr$, keys);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$nc(Test6541987::robot)->keyRelease(key);
			}
		}
	}
}

void Test6541987::run() {
	$var($String, title, $of(this)->getClass()->getName());
	$assignStatic(Test6541987::frame, $new($JFrame, title));
	$nc(Test6541987::frame)->setLocationRelativeTo(nullptr);
	$nc(Test6541987::frame)->setVisible(true);
	$init($Color);
	$var($Color, color, $JColorChooser::showDialog(Test6541987::frame, title, $Color::BLACK));
	if (color != nullptr) {
		$throwNew($Error, $$str({"unexpected color: "_s, color}));
	}
	$nc(Test6541987::frame)->setVisible(false);
	$nc(Test6541987::frame)->dispose();
}

Test6541987::Test6541987() {
}

$Class* Test6541987::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test6541987$$Lambda$dispose::classInfo$.name)) {
			return Test6541987$$Lambda$dispose::load$(name, initialize);
		}
	}
	$loadClass(Test6541987, name, initialize, &_Test6541987_ClassInfo_, allocate$Test6541987);
	return class$;
}

$Class* Test6541987::class$ = nullptr;