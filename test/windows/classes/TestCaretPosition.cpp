#include <TestCaretPosition.h>

#include <TestCaretPosition$1.h>
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
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
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
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER
#undef PLAIN

using $TestCaretPosition$1 = ::TestCaretPosition$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
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
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestCaretPosition$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestCaretPosition$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPosition::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestCaretPosition$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestCaretPosition$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCaretPosition$$Lambda$lambda$main$0::*)()>(&TestCaretPosition$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestCaretPosition$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestCaretPosition$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestCaretPosition$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestCaretPosition$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestCaretPosition$$Lambda$lambda$main$0::class$ = nullptr;

class TestCaretPosition$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestCaretPosition$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestCaretPosition::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestCaretPosition$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestCaretPosition$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCaretPosition$$Lambda$lambda$main$1$1::*)()>(&TestCaretPosition$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestCaretPosition$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestCaretPosition$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestCaretPosition$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestCaretPosition$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestCaretPosition$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TestCaretPosition_FieldInfo_[] = {
	{"jTextArea1", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPosition, jTextArea1)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestCaretPosition, f)},
	{}
};

$MethodInfo _TestCaretPosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCaretPosition::*)()>(&TestCaretPosition::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestCaretPosition::createUI))},
	{"fillTextArea", "(Ljavax/swing/JTextArea;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JTextArea*)>(&TestCaretPosition::fillTextArea))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestCaretPosition::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestCaretPosition::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestCaretPosition::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestCaretPosition_InnerClassesInfo_[] = {
	{"TestCaretPosition$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCaretPosition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestCaretPosition",
	"java.lang.Object",
	nullptr,
	_TestCaretPosition_FieldInfo_,
	_TestCaretPosition_MethodInfo_,
	nullptr,
	nullptr,
	_TestCaretPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestCaretPosition$1"
};

$Object* allocate$TestCaretPosition($Class* clazz) {
	return $of($alloc(TestCaretPosition));
}

$JTextArea* TestCaretPosition::jTextArea1 = nullptr;
$JFrame* TestCaretPosition::f = nullptr;

void TestCaretPosition::init$() {
}

void TestCaretPosition::createUI() {
	$init(TestCaretPosition);
	$assignStatic(TestCaretPosition::jTextArea1, $new($JTextArea, 5, 80));
	$assignStatic(TestCaretPosition::f, $new($JFrame));
	$nc(TestCaretPosition::jTextArea1)->setFont($$new($Font, "Arial"_s, $Font::PLAIN, 12));
	fillTextArea(TestCaretPosition::jTextArea1);
	$nc(TestCaretPosition::jTextArea1)->setLineWrap(true);
	$nc(TestCaretPosition::jTextArea1)->addMouseListener($$new($TestCaretPosition$1));
	$init($BorderLayout);
	$nc(TestCaretPosition::f)->add(static_cast<$Component*>($$new($JScrollPane, TestCaretPosition::jTextArea1)), $of($BorderLayout::CENTER));
	$nc(TestCaretPosition::f)->pack();
	$nc(TestCaretPosition::f)->setVisible(true);
}

void TestCaretPosition::main($StringArray* args) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestCaretPosition$$Lambda$lambda$main$0)));
			$init(TestCaretPosition);
			$var($Point, p, $nc(TestCaretPosition::jTextArea1)->getLocationOnScreen());
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(200);
			robot->mouseMove($nc(p)->x + 480, p->y + 6);
			robot->waitForIdle();
			robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			robot->waitForIdle();
			robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			robot->waitForIdle();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestCaretPosition$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestCaretPosition::fillTextArea($JTextArea* area) {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < 3; ++i) {
		$var($StringBuilder, row, $new($StringBuilder));
		for (int32_t j = 0; j < 50; ++j) {
			row->append(j);
			if (j % 5 == 0) {
				row->append(" "_s);
			}
		}
		buf->append(static_cast<$CharSequence*>(row))->append($($System::lineSeparator()));
	}
	$nc(area)->setText($(buf->toString()));
	area->setCaretPosition(0);
}

void TestCaretPosition::lambda$main$1() {
	$init(TestCaretPosition);
	$nc(TestCaretPosition::f)->dispose();
}

void TestCaretPosition::lambda$main$0() {
	createUI();
}

TestCaretPosition::TestCaretPosition() {
}

$Class* TestCaretPosition::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestCaretPosition$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestCaretPosition$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestCaretPosition$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestCaretPosition$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestCaretPosition, name, initialize, &_TestCaretPosition_ClassInfo_, allocate$TestCaretPosition);
	return class$;
}

$Class* TestCaretPosition::class$ = nullptr;