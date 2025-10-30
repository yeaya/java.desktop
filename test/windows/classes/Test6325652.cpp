#include <Test6325652.h>

#include <SwingTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Error.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HEIGHT
#undef VK_CONTROL
#undef VK_F5
#undef VK_F6
#undef VK_F9
#undef WIDTH

using $SwingTest = ::SwingTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _Test6325652_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6325652, WIDTH)},
	{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6325652, HEIGHT)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(Test6325652, robot)},
	{"internal", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $field(Test6325652, internal)},
	{}
};

$MethodInfo _Test6325652_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6325652::*)($JFrame*)>(&Test6325652::init$))},
	{"click", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($ints*)>(&Test6325652::click))},
	{"create", "(I)Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JInternalFrame*(*)(int32_t)>(&Test6325652::create))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6325652::main)), "java.lang.Throwable"},
	{"select", "()V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException"},
	{"stepFirst", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Test6325652::stepFirst)), "java.awt.AWTException"},
	{"stepFirstValidate", "()V", nullptr, $PUBLIC},
	{"stepSecond", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Test6325652::stepSecond))},
	{"stepSecondValidate", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6325652_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6325652",
	"java.lang.Object",
	nullptr,
	_Test6325652_FieldInfo_,
	_Test6325652_MethodInfo_
};

$Object* allocate$Test6325652($Class* clazz) {
	return $of($alloc(Test6325652));
}

$Robot* Test6325652::robot = nullptr;

void Test6325652::main($StringArray* args) {
	$load(Test6325652);
	$SwingTest::start(Test6325652::class$);
}

void Test6325652::init$($JFrame* frame) {
	$useLocalCurrentObjectStackCache();
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	desktop->add($(static_cast<$Component*>(create(0))));
	desktop->add(static_cast<$Component*>(($set(this, internal, create(1)))));
	$nc(frame)->add(static_cast<$Component*>(desktop));
}

void Test6325652::select() {
	$nc(this->internal)->setSelected(true);
}

void Test6325652::stepFirst() {
	$init(Test6325652);
	$assignStatic(Test6325652::robot, $new($Robot));
	$nc(Test6325652::robot)->setAutoDelay(50);
	click($$new($ints, {
		$KeyEvent::VK_CONTROL,
		$KeyEvent::VK_F9
	}));
}

void Test6325652::stepFirstValidate() {
	if (!$nc(this->internal)->isIcon()) {
		$throwNew($Error, "frame should be an icon"_s);
	}
}

void Test6325652::stepSecond() {
	$useLocalCurrentObjectStackCache();
	click($$new($ints, {
		$KeyEvent::VK_CONTROL,
		$KeyEvent::VK_F6
	}));
	click($$new($ints, {
		$KeyEvent::VK_CONTROL,
		$KeyEvent::VK_F5
	}));
}

void Test6325652::stepSecondValidate() {
	if ($nc(this->internal)->isIcon()) {
		$throwNew($Error, "frame should not be an icon"_s);
	}
}

void Test6325652::click($ints* keys) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, arr$, keys);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$init(Test6325652);
				$nc(Test6325652::robot)->keyPress(key);
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
				$init(Test6325652);
				$nc(Test6325652::robot)->keyRelease(key);
			}
		}
	}
}

$JInternalFrame* Test6325652::create(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, $str({"test"_s, $$str(index)}));
	index = index * 3 + 1;
	$var($JInternalFrame, internal, $new($JInternalFrame, text, true, true, true, true));
	$nc($(internal->getContentPane()))->add(static_cast<$Component*>($$new($JTextArea, text)));
	internal->setBounds(10 * index, 10 * index, Test6325652::WIDTH, Test6325652::HEIGHT);
	internal->setVisible(true);
	return internal;
}

Test6325652::Test6325652() {
}

$Class* Test6325652::load$($String* name, bool initialize) {
	$loadClass(Test6325652, name, initialize, &_Test6325652_ClassInfo_, allocate$Test6325652);
	return class$;
}

$Class* Test6325652::class$ = nullptr;