#include <bug4870644.h>

#include <bug4870644$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
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
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER
#undef EXIT_ON_CLOSE
#undef NORTH
#undef SOUTH
#undef VK_CONTROL
#undef VK_DOWN
#undef VK_ENTER
#undef VK_F10

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4870644$1 = ::bug4870644$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4870644$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4870644$$Lambda$lambda$blockTillDisplayed$0>());
	}
	bug4870644* inst$ = nullptr;
	$JComponent* comp = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4870644$$Lambda$lambda$blockTillDisplayed$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$blockTillDisplayed$0, inst$)},
	{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$blockTillDisplayed$0, comp)},
	{}
};
$MethodInfo bug4870644$$Lambda$lambda$blockTillDisplayed$0::methodInfos[3] = {
	{"<init>", "(Lbug4870644;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4870644$$Lambda$lambda$blockTillDisplayed$0::*)(bug4870644*,$JComponent*)>(&bug4870644$$Lambda$lambda$blockTillDisplayed$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4870644$$Lambda$lambda$blockTillDisplayed$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4870644$$Lambda$lambda$blockTillDisplayed$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4870644$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$loadClass(bug4870644$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4870644$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class bug4870644$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4870644::lambda$main$1(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4870644$$Lambda$lambda$main$1$1>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4870644$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$main$1$1, laf)},
	{}
};
$MethodInfo bug4870644$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4870644$$Lambda$lambda$main$1$1::*)($UIManager$LookAndFeelInfo*)>(&bug4870644$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4870644$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4870644$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4870644$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4870644$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4870644$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug4870644$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4870644$$Lambda$lambda$new$2$2>());
	}
	bug4870644* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4870644$$Lambda$lambda$new$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$new$2$2, inst$)},
	{}
};
$MethodInfo bug4870644$$Lambda$lambda$new$2$2::methodInfos[3] = {
	{"<init>", "(Lbug4870644;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4870644$$Lambda$lambda$new$2$2::*)(bug4870644*)>(&bug4870644$$Lambda$lambda$new$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4870644$$Lambda$lambda$new$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4870644$$Lambda$lambda$new$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4870644$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$loadClass(bug4870644$$Lambda$lambda$new$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4870644$$Lambda$lambda$new$2$2::class$ = nullptr;

class bug4870644$$Lambda$lambda$new$3$3 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$new$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4870644$$Lambda$lambda$new$3$3>());
	}
	bug4870644* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4870644$$Lambda$lambda$new$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$new$3$3, inst$)},
	{}
};
$MethodInfo bug4870644$$Lambda$lambda$new$3$3::methodInfos[3] = {
	{"<init>", "(Lbug4870644;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4870644$$Lambda$lambda$new$3$3::*)(bug4870644*)>(&bug4870644$$Lambda$lambda$new$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4870644$$Lambda$lambda$new$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4870644$$Lambda$lambda$new$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4870644$$Lambda$lambda$new$3$3::load$($String* name, bool initialize) {
	$loadClass(bug4870644$$Lambda$lambda$new$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4870644$$Lambda$lambda$new$3$3::class$ = nullptr;

class bug4870644$$Lambda$lambda$new$4$4 : public $Runnable {
	$class(bug4870644$$Lambda$lambda$new$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4870644* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4870644$$Lambda$lambda$new$4$4>());
	}
	bug4870644* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4870644$$Lambda$lambda$new$4$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4870644$$Lambda$lambda$new$4$4, inst$)},
	{}
};
$MethodInfo bug4870644$$Lambda$lambda$new$4$4::methodInfos[3] = {
	{"<init>", "(Lbug4870644;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4870644$$Lambda$lambda$new$4$4::*)(bug4870644*)>(&bug4870644$$Lambda$lambda$new$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4870644$$Lambda$lambda$new$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4870644$$Lambda$lambda$new$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4870644$$Lambda$lambda$new$4$4::load$($String* name, bool initialize) {
	$loadClass(bug4870644$$Lambda$lambda$new$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4870644$$Lambda$lambda$new$4$4::class$ = nullptr;

$FieldInfo _bug4870644_FieldInfo_[] = {
	{"b1", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4870644, b1)},
	{"b2", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4870644, b2)},
	{"b3", "Ljavax/swing/JButton;", nullptr, 0, $field(bug4870644, b3)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, 0, $field(bug4870644, frame)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, 0, $field(bug4870644, menu)},
	{"popup", "Ljavax/swing/JPopupMenu;", nullptr, 0, $field(bug4870644, popup)},
	{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(bug4870644, robot)},
	{"passed", "Z", nullptr, $STATIC, $staticField(bug4870644, passed)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug4870644, p)},
	{"d", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $VOLATILE, $field(bug4870644, d)},
	{}
};

$MethodInfo _bug4870644_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4870644::*)()>(&bug4870644::init$)), "java.lang.Exception"},
	{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4870644::*)($JComponent*)>(&bug4870644::lambda$blockTillDisplayed$0))},
	{"lambda$main$1", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4870644::lambda$main$1))},
	{"lambda$new$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4870644::*)()>(&bug4870644::lambda$new$2))},
	{"lambda$new$3", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4870644::*)()>(&bug4870644::lambda$new$3))},
	{"lambda$new$4", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4870644::*)()>(&bug4870644::lambda$new$4))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4870644::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4870644::setLookAndFeel))},
	{}
};

$InnerClassInfo _bug4870644_InnerClassesInfo_[] = {
	{"bug4870644$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4870644_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4870644",
	"java.lang.Object",
	nullptr,
	_bug4870644_FieldInfo_,
	_bug4870644_MethodInfo_,
	nullptr,
	nullptr,
	_bug4870644_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4870644$1"
};

$Object* allocate$bug4870644($Class* clazz) {
	return $of($alloc(bug4870644));
}

$Robot* bug4870644::robot = nullptr;
bool bug4870644::passed = false;

void bug4870644::blockTillDisplayed($JComponent* comp) {
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4870644$$Lambda$lambda$blockTillDisplayed$0, this, comp)));
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException&) {
				$catch();
			}
		}
	}
}

void bug4870644::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(bug4870644);
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$init($System);
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4870644::main($StringArray* args) {
	$init(bug4870644);
	$assignStatic(bug4870644::robot, $new($Robot));
	$nc(bug4870644::robot)->setAutoDelay(100);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				try {
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4870644$$Lambda$lambda$main$1$1, laf)));
					$init($System);
					$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
					$new(bug4870644);
					$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
			}
		}
	}
}

void bug4870644::init$() {
	$set(this, p, nullptr);
	$set(this, d, nullptr);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4870644$$Lambda$lambda$new$2$2, this)));
	blockTillDisplayed(this->b1);
	$nc(bug4870644::robot)->waitForIdle();
	$nc(bug4870644::robot)->delay(500);
	$nc(bug4870644::robot)->mouseMove($nc(this->p)->x + $nc(this->d)->width - 1, $nc(this->p)->y + $nc(this->d)->height / 2);
	$nc(bug4870644::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug4870644::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	$nc(bug4870644::robot)->waitForIdle();
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_F10);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_F10);
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_DOWN);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_DOWN);
	$nc(bug4870644::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4870644$$Lambda$lambda$new$3$3, this)));
	blockTillDisplayed(this->popup);
	$nc(bug4870644::robot)->waitForIdle();
	$nc(bug4870644::robot)->mouseMove($nc(this->p)->x + $nc(this->d)->width - 1, $nc(this->p)->y + $nc(this->d)->height / 2);
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_CONTROL);
	$nc(bug4870644::robot)->keyPress($KeyEvent::VK_ENTER);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_ENTER);
	$nc(bug4870644::robot)->keyRelease($KeyEvent::VK_CONTROL);
	$nc(bug4870644::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4870644$$Lambda$lambda$new$4$4, this)));
	if (!bug4870644::passed) {
		$var($String, cause, "Default button reacted on \"ctrl ENTER\" while menu is active."_s);
		$throwNew($RuntimeException, cause);
	}
}

void bug4870644::lambda$new$4() {
	$nc(this->frame)->dispose();
}

void bug4870644::lambda$new$3() {
	$set(this, popup, $nc(this->menu)->getPopupMenu());
}

void bug4870644::lambda$new$2() {
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$set(this, menu, $new($JMenu, "Menu"_s));
	menuBar->add(this->menu);
	$var($JMenuItem, menuItem, $new($JMenuItem, "Item"_s));
	$nc(this->menu)->add(menuItem);
	$nc(this->menu)->add($$new($JMenuItem, "Item 2"_s));
	$set(this, frame, $new($JFrame, "test"_s));
	$nc(this->frame)->setJMenuBar(menuBar);
	$set(this, b1, $new($JButton, "One"_s));
	$set(this, b2, $new($JButton, "Two"_s));
	$set(this, b3, $new($JButton, "Default"_s));
	$nc(this->b3)->addActionListener($$new($bug4870644$1, this));
	$init($BorderLayout);
	$nc($($nc(this->frame)->getContentPane()))->add(static_cast<$Component*>(this->b1), $of($BorderLayout::NORTH));
	$nc($($nc(this->frame)->getContentPane()))->add(static_cast<$Component*>(this->b2), $of($BorderLayout::CENTER));
	$nc($($nc(this->frame)->getContentPane()))->add(static_cast<$Component*>(this->b3), $of($BorderLayout::SOUTH));
	$nc($($nc(this->frame)->getRootPane()))->setDefaultButton(this->b3);
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
}

void bug4870644::lambda$main$1($UIManager$LookAndFeelInfo* laf) {
	$init(bug4870644);
	setLookAndFeel(laf);
}

void bug4870644::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
	$set(this, d, comp->getSize());
}

void clinit$bug4870644($Class* class$) {
	bug4870644::passed = true;
}

bug4870644::bug4870644() {
}

$Class* bug4870644::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4870644$$Lambda$lambda$blockTillDisplayed$0::classInfo$.name)) {
			return bug4870644$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals(bug4870644$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug4870644$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug4870644$$Lambda$lambda$new$2$2::classInfo$.name)) {
			return bug4870644$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals(bug4870644$$Lambda$lambda$new$3$3::classInfo$.name)) {
			return bug4870644$$Lambda$lambda$new$3$3::load$(name, initialize);
		}
		if (name->equals(bug4870644$$Lambda$lambda$new$4$4::classInfo$.name)) {
			return bug4870644$$Lambda$lambda$new$4$4::load$(name, initialize);
		}
	}
	$loadClass(bug4870644, name, initialize, &_bug4870644_ClassInfo_, clinit$bug4870644, allocate$bug4870644);
	return class$;
}

$Class* bug4870644::class$ = nullptr;