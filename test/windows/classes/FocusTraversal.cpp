#include <FocusTraversal.h>

#include <FocusTraversal$1.h>
#include <FocusTraversal$2.h>
#include <FocusTraversal$3.h>
#include <FocusTraversal$4.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef VK_ENTER
#undef VK_SHIFT
#undef VK_TAB

using $FocusTraversal$1 = ::FocusTraversal$1;
using $FocusTraversal$2 = ::FocusTraversal$2;
using $FocusTraversal$3 = ::FocusTraversal$3;
using $FocusTraversal$4 = ::FocusTraversal$4;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _FocusTraversal_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, frame)},
	{"a", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, a)},
	{"b", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, b)},
	{"c", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, c)},
	{"d", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, d)},
	{"next", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, next)},
	{"prev", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, prev)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(FocusTraversal, robot)},
	{}
};

$MethodInfo _FocusTraversal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FocusTraversal::*)()>(&FocusTraversal::init$))},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FocusTraversal::cleanUp)), "java.lang.Exception"},
	{"createUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&FocusTraversal::createUI)), "java.lang.Exception"},
	{"executeCase", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&FocusTraversal::executeCase)), "java.lang.Exception"},
	{"focusOn", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&FocusTraversal::focusOn)), "java.lang.Exception"},
	{"isFocusOwner", "(Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*,$String*)>(&FocusTraversal::isFocusOwner)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FocusTraversal::main)), "java.lang.Exception"},
	{"runTestCase", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FocusTraversal::runTestCase)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&FocusTraversal::tryLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _FocusTraversal_InnerClassesInfo_[] = {
	{"FocusTraversal$4", nullptr, nullptr, 0},
	{"FocusTraversal$3", nullptr, nullptr, 0},
	{"FocusTraversal$2", nullptr, nullptr, 0},
	{"FocusTraversal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FocusTraversal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FocusTraversal",
	"java.lang.Object",
	nullptr,
	_FocusTraversal_FieldInfo_,
	_FocusTraversal_MethodInfo_,
	nullptr,
	nullptr,
	_FocusTraversal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FocusTraversal$4,FocusTraversal$3,FocusTraversal$2,FocusTraversal$1"
};

$Object* allocate$FocusTraversal($Class* clazz) {
	return $of($alloc(FocusTraversal));
}

$JFrame* FocusTraversal::frame = nullptr;
$JRadioButton* FocusTraversal::a = nullptr;
$JRadioButton* FocusTraversal::b = nullptr;
$JRadioButton* FocusTraversal::c = nullptr;
$JRadioButton* FocusTraversal::d = nullptr;
$JTextField* FocusTraversal::next = nullptr;
$JTextField* FocusTraversal::prev = nullptr;
$Robot* FocusTraversal::robot = nullptr;

void FocusTraversal::init$() {
}

void FocusTraversal::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(FocusTraversal);
	$assignStatic(FocusTraversal::robot, $new($Robot));
	$nc(FocusTraversal::robot)->setAutoDelay(100);
	$nc(FocusTraversal::robot)->waitForIdle();
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				executeCase($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
}

void FocusTraversal::executeCase($String* lookAndFeelString) {
	if (tryLookAndFeel(lookAndFeelString)) {
		createUI(lookAndFeelString);
		$init(FocusTraversal);
		$nc(FocusTraversal::robot)->waitForIdle();
		runTestCase();
		$nc(FocusTraversal::robot)->waitForIdle();
		cleanUp();
		$nc(FocusTraversal::robot)->waitForIdle();
	}
}

void FocusTraversal::createUI($String* lookAndFeelString) {
	$SwingUtilities::invokeAndWait($$new($FocusTraversal$1, lookAndFeelString));
}

void FocusTraversal::runTestCase() {
	$init(FocusTraversal);
	focusOn(FocusTraversal::a);
	$nc(FocusTraversal::robot)->waitForIdle();
	$nc(FocusTraversal::robot)->delay(500);
	$nc(FocusTraversal::robot)->keyPress($KeyEvent::VK_ENTER);
	$nc(FocusTraversal::robot)->keyRelease($KeyEvent::VK_ENTER);
	$nc(FocusTraversal::robot)->waitForIdle();
	isFocusOwner(FocusTraversal::next, "forward"_s);
	$nc(FocusTraversal::robot)->keyPress($KeyEvent::VK_SHIFT);
	$nc(FocusTraversal::robot)->keyPress($KeyEvent::VK_TAB);
	$nc(FocusTraversal::robot)->keyRelease($KeyEvent::VK_TAB);
	$nc(FocusTraversal::robot)->keyRelease($KeyEvent::VK_SHIFT);
	$nc(FocusTraversal::robot)->waitForIdle();
	isFocusOwner(FocusTraversal::a, "backward"_s);
}

void FocusTraversal::focusOn($Component* component) {
	$SwingUtilities::invokeAndWait($$new($FocusTraversal$2, component));
}

void FocusTraversal::isFocusOwner($Component* queriedFocusOwner, $String* direction) {
	$SwingUtilities::invokeAndWait($$new($FocusTraversal$3, queriedFocusOwner, direction));
}

bool FocusTraversal::tryLookAndFeel($String* lookAndFeelString) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($InstantiationException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		return false;
	}
	$init($System);
	$nc($System::out)->println($$str({"Testing lookAndFeel "_s, lookAndFeelString}));
	return true;
}

void FocusTraversal::cleanUp() {
	$SwingUtilities::invokeAndWait($$new($FocusTraversal$4));
}

FocusTraversal::FocusTraversal() {
}

$Class* FocusTraversal::load$($String* name, bool initialize) {
	$loadClass(FocusTraversal, name, initialize, &_FocusTraversal_ClassInfo_, allocate$FocusTraversal);
	return class$;
}

$Class* FocusTraversal::class$ = nullptr;