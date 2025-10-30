#include <Test6256140.h>

#include <Test6256140$1.h>
#include <Test6256140$2.h>
#include <Test6256140$3.h>
#include <Test6256140$4.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef MAX_VALUE
#undef VK_A
#undef VK_ESCAPE

using $Test6256140$1 = ::Test6256140$1;
using $Test6256140$2 = ::Test6256140$2;
using $Test6256140$3 = ::Test6256140$3;
using $Test6256140$4 = ::Test6256140$4;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class Test6256140$$Lambda$dispose : public $Runnable {
	$class(Test6256140$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test6256140$$Lambda$dispose>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test6256140$$Lambda$dispose::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Test6256140$$Lambda$dispose, inst$)},
	{}
};
$MethodInfo Test6256140$$Lambda$dispose::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(Test6256140$$Lambda$dispose::*)($Window*)>(&Test6256140$$Lambda$dispose::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test6256140$$Lambda$dispose::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test6256140$$Lambda$dispose",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test6256140$$Lambda$dispose::load$($String* name, bool initialize) {
	$loadClass(Test6256140$$Lambda$dispose, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test6256140$$Lambda$dispose::class$ = nullptr;

$FieldInfo _Test6256140_FieldInfo_[] = {
	{"ft", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Test6256140, ft)},
	{"initialText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6256140, initialText)},
	{"toolTipLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6256140, toolTipLabel)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6256140, frame)},
	{}
};

$MethodInfo _Test6256140_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6256140::*)()>(&Test6256140::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test6256140::createAndShowGUI))},
	{"isTextEqual", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Test6256140::isTextEqual)), "java.lang.Exception"},
	{"isTooltipShowning", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Test6256140::isTooltipShowning)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6256140::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test6256140_InnerClassesInfo_[] = {
	{"Test6256140$4", nullptr, nullptr, 0},
	{"Test6256140$3", nullptr, nullptr, 0},
	{"Test6256140$2", nullptr, nullptr, 0},
	{"Test6256140$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6256140_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6256140",
	"java.lang.Object",
	nullptr,
	_Test6256140_FieldInfo_,
	_Test6256140_MethodInfo_,
	nullptr,
	nullptr,
	_Test6256140_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6256140$4,Test6256140$3,Test6256140$2,Test6256140$1"
};

$Object* allocate$Test6256140($Class* clazz) {
	return $of($alloc(Test6256140));
}

$volatile($JFormattedTextField*) Test6256140::ft = nullptr;
$String* Test6256140::initialText = nullptr;
$JLabel* Test6256140::toolTipLabel = nullptr;
$JFrame* Test6256140::frame = nullptr;

void Test6256140::init$() {
}

void Test6256140::main($StringArray* args) {
	$init(Test6256140);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(100);
			$SwingUtilities::invokeAndWait($$new($Test6256140$1));
			robot->waitForIdle();
			robot->delay(1000);
			$var($Point, point, $nc(Test6256140::ft)->getLocationOnScreen());
			robot->mouseMove($nc(point)->x, point->y);
			robot->waitForIdle();
			robot->mouseMove($nc(point)->x + 3, point->y + 3);
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_A);
			robot->keyRelease($KeyEvent::VK_A);
			robot->waitForIdle();
			if (!isTooltipShowning()) {
				$throwNew($RuntimeException, "Tooltip is not shown"_s);
			}
			robot->keyPress($KeyEvent::VK_ESCAPE);
			robot->keyRelease($KeyEvent::VK_ESCAPE);
			robot->waitForIdle();
			if (isTooltipShowning()) {
				$throwNew($RuntimeException, "Tooltip must be hidden now"_s);
			}
			if (isTextEqual()) {
				$throwNew($RuntimeException, "FormattedTextField must *not* cancel the updated value this time"_s);
			}
			robot->keyPress($KeyEvent::VK_ESCAPE);
			robot->keyRelease($KeyEvent::VK_ESCAPE);
			robot->waitForIdle();
			if (!isTextEqual()) {
				$throwNew($RuntimeException, "FormattedTextField must cancel the updated value"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (Test6256140::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test6256140$$Lambda$dispose, static_cast<$JFrame*>($nc(Test6256140::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool Test6256140::isTooltipShowning() {
	$init(Test6256140);
	$useLocalCurrentObjectStackCache();
	$var($booleans, result, $new($booleans, 1));
	$SwingUtilities::invokeAndWait($$new($Test6256140$2, result));
	return result->get(0);
}

bool Test6256140::isTextEqual() {
	$init(Test6256140);
	$useLocalCurrentObjectStackCache();
	$var($booleans, result, $new($booleans, 1));
	$SwingUtilities::invokeAndWait($$new($Test6256140$3, result));
	return result->get(0);
}

void Test6256140::createAndShowGUI() {
	$init(Test6256140);
	$useLocalCurrentObjectStackCache();
	$nc($($ToolTipManager::sharedInstance()))->setDismissDelay($Integer::MAX_VALUE);
	$nc($($ToolTipManager::sharedInstance()))->setInitialDelay(0);
	$assignStatic(Test6256140::frame, $new($JFrame));
	$nc(Test6256140::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(Test6256140::frame)->setLayout($$new($FlowLayout));
	$assignStatic(Test6256140::ft, $new($Test6256140$4));
	$nc(Test6256140::ft)->setToolTipText("   "_s);
	$nc(Test6256140::ft)->setValue(Test6256140::initialText);
	$nc(Test6256140::frame)->add(static_cast<$Component*>(Test6256140::ft));
	$nc(Test6256140::frame)->pack();
	$nc(Test6256140::frame)->setLocationRelativeTo(nullptr);
	$nc(Test6256140::frame)->setVisible(true);
	$nc(Test6256140::ft)->requestFocus();
}

void clinit$Test6256140($Class* class$) {
	$assignStatic(Test6256140::initialText, "value"_s);
	$assignStatic(Test6256140::toolTipLabel, $new($JLabel, "tip"_s));
}

Test6256140::Test6256140() {
}

$Class* Test6256140::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test6256140$$Lambda$dispose::classInfo$.name)) {
			return Test6256140$$Lambda$dispose::load$(name, initialize);
		}
	}
	$loadClass(Test6256140, name, initialize, &_Test6256140_ClassInfo_, clinit$Test6256140, allocate$Test6256140);
	return class$;
}

$Class* Test6256140::class$ = nullptr;