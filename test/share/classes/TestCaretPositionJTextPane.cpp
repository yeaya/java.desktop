#include <TestCaretPositionJTextPane.h>

#include <TestCaretPositionJTextPane$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/Serializable.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER
#undef PLAIN

using $TestCaretPositionJTextPane$1 = ::TestCaretPositionJTextPane$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $Serializable = ::java::io::Serializable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestCaretPositionJTextPane$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestCaretPositionJTextPane$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPositionJTextPane::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestCaretPositionJTextPane$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestCaretPositionJTextPane$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCaretPositionJTextPane$$Lambda$lambda$main$0::*)()>(&TestCaretPositionJTextPane$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestCaretPositionJTextPane$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestCaretPositionJTextPane$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestCaretPositionJTextPane$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$0::class$ = nullptr;

class TestCaretPositionJTextPane$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPositionJTextPane::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestCaretPositionJTextPane$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::*)()>(&TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestCaretPositionJTextPane$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TestCaretPositionJTextPane_FieldInfo_[] = {
	{"textPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPositionJTextPane, textPane)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPositionJTextPane, f)},
	{}
};

$MethodInfo _TestCaretPositionJTextPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCaretPositionJTextPane::*)()>(&TestCaretPositionJTextPane::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestCaretPositionJTextPane::createUI))},
	{"fillTextPane", "(Ljavax/swing/JTextPane;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JTextPane*)>(&TestCaretPositionJTextPane::fillTextPane))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestCaretPositionJTextPane::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestCaretPositionJTextPane::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestCaretPositionJTextPane::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestCaretPositionJTextPane_InnerClassesInfo_[] = {
	{"TestCaretPositionJTextPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCaretPositionJTextPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestCaretPositionJTextPane",
	"java.lang.Object",
	nullptr,
	_TestCaretPositionJTextPane_FieldInfo_,
	_TestCaretPositionJTextPane_MethodInfo_,
	nullptr,
	nullptr,
	_TestCaretPositionJTextPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestCaretPositionJTextPane$1"
};

$Object* allocate$TestCaretPositionJTextPane($Class* clazz) {
	return $of($alloc(TestCaretPositionJTextPane));
}

$JTextPane* TestCaretPositionJTextPane::textPane = nullptr;
$JFrame* TestCaretPositionJTextPane::f = nullptr;

void TestCaretPositionJTextPane::init$() {
}

void TestCaretPositionJTextPane::createUI() {
	$useLocalCurrentObjectStackCache();
	$init(TestCaretPositionJTextPane);
	$assignStatic(TestCaretPositionJTextPane::f, $new($JFrame, "Test Cursor/Caret with Java 9"_s));
	$assignStatic(TestCaretPositionJTextPane::textPane, $new($JTextPane));
	$nc(TestCaretPositionJTextPane::textPane)->setFont($$new($Font, "Dialog"_s, $Font::PLAIN, 12));
	fillTextPane(TestCaretPositionJTextPane::textPane);
	$nc(TestCaretPositionJTextPane::textPane)->addMouseListener($$new($TestCaretPositionJTextPane$1));
	$init($BorderLayout);
	$nc(TestCaretPositionJTextPane::f)->add(static_cast<$Component*>($$new($JScrollPane, TestCaretPositionJTextPane::textPane)), $of($BorderLayout::CENTER));
	$nc(TestCaretPositionJTextPane::f)->pack();
	$nc(TestCaretPositionJTextPane::f)->setVisible(true);
}

void TestCaretPositionJTextPane::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(200);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestCaretPositionJTextPane$$Lambda$lambda$main$0)));
			robot->waitForIdle();
			$init(TestCaretPositionJTextPane);
			$var($Point, p, $nc(TestCaretPositionJTextPane::textPane)->getLocationOnScreen());
			robot->mouseMove($nc(p)->x + 380, p->y + 6);
			robot->waitForIdle();
			robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			robot->waitForIdle();
			robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			robot->waitForIdle();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestCaretPositionJTextPane::fillTextPane($JTextPane* textPane) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < 30; ++i) {
		$var($StringBuilder, row, $new($StringBuilder));
		for (int32_t j = 0; j < 50; ++j) {
			row->append(j);
			if (j % 5 == 0) {
				row->append(" "_s);
			}
		}
		buf->append(static_cast<$CharSequence*>(row))->append($($System::lineSeparator()));
	}
	$nc(textPane)->setText($(buf->toString()));
	textPane->setCaretPosition(0);
}

void TestCaretPositionJTextPane::lambda$main$1() {
	$init(TestCaretPositionJTextPane);
	$nc(TestCaretPositionJTextPane::f)->dispose();
}

void TestCaretPositionJTextPane::lambda$main$0() {
	createUI();
}

TestCaretPositionJTextPane::TestCaretPositionJTextPane() {
}

$Class* TestCaretPositionJTextPane::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestCaretPositionJTextPane$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestCaretPositionJTextPane$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestCaretPositionJTextPane$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestCaretPositionJTextPane, name, initialize, &_TestCaretPositionJTextPane_ClassInfo_, allocate$TestCaretPositionJTextPane);
	return class$;
}

$Class* TestCaretPositionJTextPane::class$ = nullptr;