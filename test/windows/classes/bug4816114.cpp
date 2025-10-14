#include <bug4816114.h>

#include <bug4816114$1.h>
#include <bug4816114$2.h>
#include <bug4816114$3.h>
#include <bug4816114$TestSplitPane.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef CENTER
#undef HORIZONTAL_SPLIT

using $bug4816114$1 = ::bug4816114$1;
using $bug4816114$2 = ::bug4816114$2;
using $bug4816114$3 = ::bug4816114$3;
using $bug4816114$TestSplitPane = ::bug4816114$TestSplitPane;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;

class bug4816114$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4816114$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4816114::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4816114$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4816114$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4816114$$Lambda$lambda$main$0::*)()>(&bug4816114$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4816114$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4816114$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4816114$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4816114$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4816114$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug4816114_FieldInfo_[] = {
	{"fr", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4816114, fr)},
	{"splitPane", "Ljavax/swing/JSplitPane;", nullptr, 0, $field(bug4816114, splitPane)},
	{"resized", "[Z", nullptr, 0, $field(bug4816114, resized)},
	{"step", "I", nullptr, $STATIC, $staticField(bug4816114, step)},
	{"h_passed", "Z", nullptr, 0, $field(bug4816114, h_passed)},
	{"v_passed", "Z", nullptr, 0, $field(bug4816114, v_passed)},
	{"test", "Lbug4816114;", nullptr, $STATIC, $staticField(bug4816114, test)},
	{}
};

$MethodInfo _bug4816114_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4816114::*)()>(&bug4816114::init$))},
	{"createAndShowGUI", "()V", nullptr, $PUBLIC},
	{"doTest", "(II)V", nullptr, 0, nullptr, "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"isPassed", "()Z", nullptr, $SYNCHRONIZED},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4816114::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4816114::main)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException,java.awt.AWTException"},
	{"setPassed", "(IZ)V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _bug4816114_InnerClassesInfo_[] = {
	{"bug4816114$TestSplitPane", "bug4816114", "TestSplitPane", 0},
	{"bug4816114$3", nullptr, nullptr, 0},
	{"bug4816114$2", nullptr, nullptr, 0},
	{"bug4816114$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4816114_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4816114",
	"java.lang.Object",
	nullptr,
	_bug4816114_FieldInfo_,
	_bug4816114_MethodInfo_,
	nullptr,
	nullptr,
	_bug4816114_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4816114$TestSplitPane,bug4816114$3,bug4816114$2,bug4816114$1"
};

$Object* allocate$bug4816114($Class* clazz) {
	return $of($alloc(bug4816114));
}

$JFrame* bug4816114::fr = nullptr;
int32_t bug4816114::step = 0;
bug4816114* bug4816114::test = nullptr;

void bug4816114::init$() {
	$set(this, resized, $new($booleans, {
		false,
		false,
		false,
		false,
		false,
		false
	}));
	this->h_passed = false;
	this->v_passed = false;
}

void bug4816114::main($StringArray* args) {
	$init(bug4816114);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug4816114$1));
			$var($Robot, robot, $new($Robot));
			robot->waitForIdle();
			$Thread::sleep(1000);
			$Thread::sleep(2000);
			++bug4816114::step;
			$nc(bug4816114::test)->doTest(150, 300);
			++bug4816114::step;
			$nc(bug4816114::test)->doTest(650, 300);
			$SwingUtilities::invokeAndWait($$new($bug4816114$2));
			++bug4816114::step;
			$nc(bug4816114::test)->doTest(300, 650);
			++bug4816114::step;
			$nc(bug4816114::test)->doTest(300, 150);
			++bug4816114::step;
			$nc(bug4816114::test)->doTest(300, 650);
			if (!$nc(bug4816114::test)->isPassed()) {
				$throwNew($Error, "The divider location is wrong."_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4816114$$Lambda$lambda$main$0)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug4816114::createAndShowGUI() {
	$assignStatic(bug4816114::fr, $new($JFrame, "Test"_s));
	$nc(bug4816114::fr)->setUndecorated(true);
	$set(this, splitPane, $new($bug4816114$TestSplitPane, this));
	$nc(this->splitPane)->setOrientation($JSplitPane::HORIZONTAL_SPLIT);
	$nc(this->splitPane)->setResizeWeight((double)0);
	$nc(this->splitPane)->setBorder($($BorderFactory::createEmptyBorder(1, 1, 1, 1)));
	$var($JButton, leftButton, $new($JButton, "LEFT"_s));
	leftButton->setPreferredSize($$new($Dimension, 300, 300));
	leftButton->setMinimumSize($$new($Dimension, 150, 150));
	$nc(this->splitPane)->setLeftComponent(leftButton);
	$var($JButton, rightButton, $new($JButton, "RIGHT"_s));
	rightButton->setPreferredSize($$new($Dimension, 300, 300));
	rightButton->setMinimumSize($$new($Dimension, 150, 150));
	$nc(this->splitPane)->setRightComponent(rightButton);
	$init($BorderLayout);
	$nc($($nc(bug4816114::fr)->getContentPane()))->add(static_cast<$Component*>(this->splitPane), $of($BorderLayout::CENTER));
	$nc(bug4816114::fr)->pack();
	$nc(bug4816114::fr)->setVisible(true);
}

void bug4816114::doTest(int32_t width, int32_t height) {
	$SwingUtilities::invokeAndWait($$new($bug4816114$3, this, width, height));
	$synchronized(this) {
		while (!$nc(this->resized)->get(bug4816114::step)) {
			$of(this)->wait();
		}
	}
}

void bug4816114::setPassed(int32_t orientation, bool passed) {
	$synchronized(this) {
		if (orientation == $JSplitPane::HORIZONTAL_SPLIT) {
			this->h_passed = passed;
		} else {
			this->v_passed = passed;
		}
	}
}

bool bug4816114::isPassed() {
	$synchronized(this) {
		return this->h_passed && this->v_passed;
	}
}

void bug4816114::lambda$main$0() {
	$init(bug4816114);
	$nc(bug4816114::fr)->dispose();
}

void clinit$bug4816114($Class* class$) {
	bug4816114::step = 0;
	$assignStatic(bug4816114::test, $new(bug4816114));
}

bug4816114::bug4816114() {
}

$Class* bug4816114::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4816114$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4816114$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug4816114, name, initialize, &_bug4816114_ClassInfo_, clinit$bug4816114, allocate$bug4816114);
	return class$;
}

$Class* bug4816114::class$ = nullptr;