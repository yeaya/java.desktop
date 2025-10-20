#include <SetInvokerJPopupMenuTest.h>

#include <SetInvokerJPopupMenuTest$1.h>
#include <SetInvokerJPopupMenuTest$MyButton.h>
#include <SetInvokerJPopupMenuTest$MyPopupMenu.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef DISPOSE_ON_CLOSE
#undef LF

using $SetInvokerJPopupMenuTest$1 = ::SetInvokerJPopupMenuTest$1;
using $SetInvokerJPopupMenuTest$MyButton = ::SetInvokerJPopupMenuTest$MyButton;
using $SetInvokerJPopupMenuTest$MyPopupMenu = ::SetInvokerJPopupMenuTest$MyPopupMenu;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class SetInvokerJPopupMenuTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetInvokerJPopupMenuTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SetInvokerJPopupMenuTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::*)()>(&SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SetInvokerJPopupMenuTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::class$ = nullptr;

class SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetInvokerJPopupMenuTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::*)()>(&SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetInvokerJPopupMenuTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::*)()>(&SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$FieldInfo _SetInvokerJPopupMenuTest_FieldInfo_[] = {
	{"popup", "LSetInvokerJPopupMenuTest$MyPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, popup)},
	{"jtb", "LSetInvokerJPopupMenuTest$MyButton;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, jtb)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, robot)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, f)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, p)},
	{"isPopupVisible", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SetInvokerJPopupMenuTest, isPopupVisible)},
	{}
};

$MethodInfo _SetInvokerJPopupMenuTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetInvokerJPopupMenuTest::*)()>(&SetInvokerJPopupMenuTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SetInvokerJPopupMenuTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SetInvokerJPopupMenuTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SetInvokerJPopupMenuTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetInvokerJPopupMenuTest::main)), "java.lang.Exception"},
	{"postDown", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&SetInvokerJPopupMenuTest::postDown))},
	{"postUp", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&SetInvokerJPopupMenuTest::postUp))},
	{}
};

$InnerClassInfo _SetInvokerJPopupMenuTest_InnerClassesInfo_[] = {
	{"SetInvokerJPopupMenuTest$MyPopupMenu", "SetInvokerJPopupMenuTest", "MyPopupMenu", $PRIVATE | $STATIC},
	{"SetInvokerJPopupMenuTest$MyButton", "SetInvokerJPopupMenuTest", "MyButton", $PRIVATE | $STATIC},
	{"SetInvokerJPopupMenuTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SetInvokerJPopupMenuTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SetInvokerJPopupMenuTest",
	"java.lang.Object",
	nullptr,
	_SetInvokerJPopupMenuTest_FieldInfo_,
	_SetInvokerJPopupMenuTest_MethodInfo_,
	nullptr,
	nullptr,
	_SetInvokerJPopupMenuTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SetInvokerJPopupMenuTest$MyPopupMenu,SetInvokerJPopupMenuTest$MyButton,SetInvokerJPopupMenuTest$1"
};

$Object* allocate$SetInvokerJPopupMenuTest($Class* clazz) {
	return $of($alloc(SetInvokerJPopupMenuTest));
}

$SetInvokerJPopupMenuTest$MyPopupMenu* SetInvokerJPopupMenuTest::popup = nullptr;
$SetInvokerJPopupMenuTest$MyButton* SetInvokerJPopupMenuTest::jtb = nullptr;
$Robot* SetInvokerJPopupMenuTest::robot = nullptr;
$JFrame* SetInvokerJPopupMenuTest::f = nullptr;
$Point* SetInvokerJPopupMenuTest::p = nullptr;
bool SetInvokerJPopupMenuTest::isPopupVisible = false;

void SetInvokerJPopupMenuTest::init$() {
}

void SetInvokerJPopupMenuTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, nullptr);
	$assign(installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			{
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$init(SetInvokerJPopupMenuTest);
							$assignStatic(SetInvokerJPopupMenuTest::robot, $new($Robot));
							$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0)));
							$nc(SetInvokerJPopupMenuTest::robot)->waitForIdle();
							$nc(SetInvokerJPopupMenuTest::robot)->setAutoDelay(50);
							$nc(SetInvokerJPopupMenuTest::robot)->mouseMove($nc(SetInvokerJPopupMenuTest::p)->x + 15, $nc(SetInvokerJPopupMenuTest::p)->y + 15);
							$nc(SetInvokerJPopupMenuTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
							$nc(SetInvokerJPopupMenuTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
							$nc(SetInvokerJPopupMenuTest::robot)->waitForIdle();
							$nc(SetInvokerJPopupMenuTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
							$nc(SetInvokerJPopupMenuTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
						} catch ($UnsupportedLookAndFeelException&) {
							$var($UnsupportedLookAndFeelException, e, $catch());
							$init($System);
							$nc($System::out)->println($$str({"Note: LookAndFeel "_s, $($nc(LF)->getClassName()), " is not supported on this configuration"_s}));
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						$init(SetInvokerJPopupMenuTest);
						if (SetInvokerJPopupMenuTest::f != nullptr) {
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1)));
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2)));
				$init(SetInvokerJPopupMenuTest);
				if (SetInvokerJPopupMenuTest::isPopupVisible) {
					$throwNew($RuntimeException, "PopupMenu is not taken down after single button click"_s);
				}
			}
		}
	}
}

void SetInvokerJPopupMenuTest::postUp() {
	$init(SetInvokerJPopupMenuTest);
	$nc(SetInvokerJPopupMenuTest::popup)->setInvoker(SetInvokerJPopupMenuTest::jtb);
	$nc(SetInvokerJPopupMenuTest::popup)->setVisible(true);
}

void SetInvokerJPopupMenuTest::postDown() {
	$init(SetInvokerJPopupMenuTest);
	$nc(SetInvokerJPopupMenuTest::popup)->setVisible(false);
}

void SetInvokerJPopupMenuTest::lambda$main$2() {
	$init(SetInvokerJPopupMenuTest);
	SetInvokerJPopupMenuTest::isPopupVisible = $nc(SetInvokerJPopupMenuTest::popup)->isVisible();
}

void SetInvokerJPopupMenuTest::lambda$main$1() {
	$init(SetInvokerJPopupMenuTest);
	$nc(SetInvokerJPopupMenuTest::f)->dispose();
}

void SetInvokerJPopupMenuTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(SetInvokerJPopupMenuTest);
	$assignStatic(SetInvokerJPopupMenuTest::jtb, $new($SetInvokerJPopupMenuTest$MyButton, "Press Me"_s));
	$nc(SetInvokerJPopupMenuTest::jtb)->addActionListener($$new($SetInvokerJPopupMenuTest$1));
	$assignStatic(SetInvokerJPopupMenuTest::f, $new($JFrame));
	$nc(SetInvokerJPopupMenuTest::f)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(SetInvokerJPopupMenuTest::f)->setLocationRelativeTo(nullptr);
	$nc(SetInvokerJPopupMenuTest::f)->setSize(300, 400);
	$var($Container, c, $nc(SetInvokerJPopupMenuTest::f)->getContentPane());
	$nc(c)->setLayout($$new($FlowLayout));
	c->add(static_cast<$Component*>(SetInvokerJPopupMenuTest::jtb));
	$nc(SetInvokerJPopupMenuTest::f)->setVisible(true);
	$assignStatic(SetInvokerJPopupMenuTest::popup, $new($SetInvokerJPopupMenuTest$MyPopupMenu));
	$nc(SetInvokerJPopupMenuTest::popup)->add($$new($JMenuItem, "A"_s));
	$nc(SetInvokerJPopupMenuTest::popup)->add($$new($JMenuItem, "B"_s));
	$nc(SetInvokerJPopupMenuTest::popup)->add($$new($JMenuItem, "C"_s));
	$nc(SetInvokerJPopupMenuTest::popup)->setVisible(false);
	$assignStatic(SetInvokerJPopupMenuTest::p, $nc(SetInvokerJPopupMenuTest::jtb)->getLocationOnScreen());
}

SetInvokerJPopupMenuTest::SetInvokerJPopupMenuTest() {
}

$Class* SetInvokerJPopupMenuTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return SetInvokerJPopupMenuTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return SetInvokerJPopupMenuTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return SetInvokerJPopupMenuTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$loadClass(SetInvokerJPopupMenuTest, name, initialize, &_SetInvokerJPopupMenuTest_ClassInfo_, allocate$SetInvokerJPopupMenuTest);
	return class$;
}

$Class* SetInvokerJPopupMenuTest::class$ = nullptr;