#include <bug6236162.h>

#include <bug6236162$1.h>
#include <bug6236162$MyComboUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
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
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_DOWN

using $bug6236162$1 = ::bug6236162$1;
using $bug6236162$MyComboUI = ::bug6236162$MyComboUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

class bug6236162$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6236162$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6236162::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6236162$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6236162$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6236162$$Lambda$lambda$main$0::*)()>(&bug6236162$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6236162$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6236162$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6236162$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6236162$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6236162$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6236162_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6236162, frame)},
	{"combo", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug6236162, combo)},
	{"comboUI", "Lbug6236162$MyComboUI;", nullptr, $PRIVATE | $STATIC, $staticField(bug6236162, comboUI)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6236162, robot)},
	{}
};

$MethodInfo _bug6236162_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6236162::*)()>(&bug6236162::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6236162::createAndShowGUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6236162::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6236162::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6236162::test)), "java.awt.AWTException"},
	{}
};

$InnerClassInfo _bug6236162_InnerClassesInfo_[] = {
	{"bug6236162$MyComboUI", "bug6236162", "MyComboUI", $PRIVATE | $STATIC},
	{"bug6236162$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6236162_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6236162",
	"java.lang.Object",
	nullptr,
	_bug6236162_FieldInfo_,
	_bug6236162_MethodInfo_,
	nullptr,
	nullptr,
	_bug6236162_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6236162$MyComboUI,bug6236162$1"
};

$Object* allocate$bug6236162($Class* clazz) {
	return $of($alloc(bug6236162));
}

$JFrame* bug6236162::frame = nullptr;
$JComboBox* bug6236162::combo = nullptr;
$bug6236162$MyComboUI* bug6236162::comboUI = nullptr;
$Robot* bug6236162::robot = nullptr;

void bug6236162::init$() {
}

void bug6236162::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug6236162);
	$assignStatic(bug6236162::robot, $new($Robot));
	$nc(bug6236162::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$UIManager::setLookAndFeel($($UIManager::getCrossPlatformLookAndFeelClassName()));
			$SwingUtilities::invokeAndWait($$new($bug6236162$1));
			$nc(bug6236162::robot)->waitForIdle();
			$nc(bug6236162::robot)->delay(1000);
			test();
			$nc($System::out)->println("Test passed"_s);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (bug6236162::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6236162$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6236162::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug6236162);
	$assignStatic(bug6236162::frame, $new($JFrame, "bug6236162"_s));
	$assignStatic(bug6236162::combo, $new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s,
		"three"_s,
		"four"_s,
		"five"_s
	})));
	$nc(bug6236162::combo)->setEditable(true);
	$assignStatic(bug6236162::comboUI, $new($bug6236162$MyComboUI));
	$nc(bug6236162::combo)->setUI(static_cast<$ComboBoxUI*>(bug6236162::comboUI));
	$nc(bug6236162::combo)->setSelectedIndex(3);
	$nc($($nc(bug6236162::frame)->getContentPane()))->add(static_cast<$Component*>(bug6236162::combo));
	$nc(bug6236162::frame)->pack();
	$nc(bug6236162::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug6236162::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6236162::frame)->setVisible(true);
	$nc(bug6236162::frame)->toFront();
}

void bug6236162::test() {
	$useLocalCurrentObjectStackCache();
	$init(bug6236162);
	$nc(bug6236162::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6236162::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6236162::robot)->waitForIdle();
	$var($Point, p, $nc(bug6236162::combo)->getLocationOnScreen());
	$var($Dimension, size, $nc(bug6236162::combo)->getSize());
	$nc(p)->x += $nc(size)->width / 2;
	p->y += size->height;
	float dy = (float)1;
	$nc(bug6236162::robot)->mouseMove(p->x, p->y - 5);
	for (int32_t i = 1; i <= 10; ++i) {
		$nc(bug6236162::robot)->mouseMove((p->x), $cast(int32_t, (p->y - 5 + dy * i)));
	}
	$nc(bug6236162::robot)->waitForIdle();
	$nc(bug6236162::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug6236162::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug6236162::robot)->waitForIdle();
	$var($JList, list, $nc($($nc(bug6236162::comboUI)->getComboPopup()))->getList());
	if ($nc(list)->getSelectedIndex() != 1) {
		$throwNew($RuntimeException, "There is an inconsistence in combo box behavior when user points an item in combo popup by mouse and then uses UP/DOWN keys."_s);
	}
}

void bug6236162::lambda$main$0() {
	$init(bug6236162);
	$nc(bug6236162::frame)->dispose();
}

bug6236162::bug6236162() {
}

$Class* bug6236162::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6236162$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6236162$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6236162, name, initialize, &_bug6236162_ClassInfo_, allocate$bug6236162);
	return class$;
}

$Class* bug6236162::class$ = nullptr;