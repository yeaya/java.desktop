#include <bug8075609.h>

#include <bug8075609$1.h>
#include <bug8075609$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH
#undef VK_TAB

using $bug8075609$1 = ::bug8075609$1;
using $bug8075609$2 = ::bug8075609$2;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug8075609$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8075609$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8075609::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8075609$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8075609$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8075609$$Lambda$lambda$main$0::*)()>(&bug8075609$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8075609$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8075609$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8075609$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8075609$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8075609$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug8075609_FieldInfo_[] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075609, robot)},
	{"textField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075609, textField)},
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075609, mainFrame)},
	{}
};

$MethodInfo _bug8075609_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8075609::*)()>(&bug8075609::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8075609::createAndShowGUI))},
	{"hitKey", "(Ljava/awt/Robot;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,int32_t)>(&bug8075609::hitKey))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8075609::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8075609::main)), "java.lang.Throwable"},
	{"runTest1", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8075609::runTest1)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8075609_InnerClassesInfo_[] = {
	{"bug8075609$2", nullptr, nullptr, 0},
	{"bug8075609$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8075609_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8075609",
	"java.lang.Object",
	nullptr,
	_bug8075609_FieldInfo_,
	_bug8075609_MethodInfo_,
	nullptr,
	nullptr,
	_bug8075609_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8075609$2,bug8075609$1"
};

$Object* allocate$bug8075609($Class* clazz) {
	return $of($alloc(bug8075609));
}

$Robot* bug8075609::robot = nullptr;
$JTextField* bug8075609::textField = nullptr;
$JFrame* bug8075609::mainFrame = nullptr;

void bug8075609::init$() {
}

void bug8075609::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug8075609$1));
			$init(bug8075609);
			$assignStatic(bug8075609::robot, $new($Robot));
			$Thread::sleep(100);
			$nc(bug8075609::robot)->setAutoDelay(100);
			runTest1();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug8075609);
			if (bug8075609::mainFrame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8075609$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8075609::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug8075609);
	$assignStatic(bug8075609::mainFrame, $new($JFrame, "Bug 8075609 - 1 test"_s));
	$var($JPanel, rootPanel, $new($JPanel));
	rootPanel->setLayout($$new($BorderLayout));
	$var($JPanel, formPanel, $new($JPanel));
	formPanel->setFocusTraversalPolicy($$new($LayoutFocusTraversalPolicy));
	formPanel->setFocusCycleRoot(true);
	$var($JRadioButton, option1, $new($JRadioButton, "Option 1"_s, true));
	$var($JRadioButton, option2, $new($JRadioButton, "Option 2"_s));
	$var($ButtonGroup, radioButtonGroup, $new($ButtonGroup));
	radioButtonGroup->add(option1);
	radioButtonGroup->add(option2);
	formPanel->add(static_cast<$Component*>(option1));
	formPanel->add(static_cast<$Component*>(option2));
	$assignStatic(bug8075609::textField, $new($JTextField, "Another focusable component"_s));
	formPanel->add(static_cast<$Component*>(bug8075609::textField));
	$init($BorderLayout);
	rootPanel->add(static_cast<$Component*>(formPanel), $of($BorderLayout::CENTER));
	$var($JButton, okButton, $new($JButton, "OK"_s));
	rootPanel->add(static_cast<$Component*>(okButton), $of($BorderLayout::SOUTH));
	$nc(bug8075609::mainFrame)->add(static_cast<$Component*>(rootPanel));
	$nc(bug8075609::mainFrame)->pack();
	$nc(bug8075609::mainFrame)->setVisible(true);
	$nc(bug8075609::mainFrame)->toFront();
}

void bug8075609::runTest1() {
	$init(bug8075609);
	hitKey(bug8075609::robot, $KeyEvent::VK_TAB);
	$nc(bug8075609::robot)->delay(1000);
	$SwingUtilities::invokeAndWait($$new($bug8075609$2));
}

void bug8075609::hitKey($Robot* robot, int32_t keycode) {
	$nc(robot)->keyPress(keycode);
	robot->keyRelease(keycode);
	robot->waitForIdle();
}

void bug8075609::lambda$main$0() {
	$init(bug8075609);
	$nc(bug8075609::mainFrame)->dispose();
}

bug8075609::bug8075609() {
}

$Class* bug8075609::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8075609$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8075609$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug8075609, name, initialize, &_bug8075609_ClassInfo_, allocate$bug8075609);
	return class$;
}

$Class* bug8075609::class$ = nullptr;