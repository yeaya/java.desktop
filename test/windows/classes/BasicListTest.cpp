#include <BasicListTest.h>

#include <BasicListTest$1.h>
#include <MyList.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
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
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER
#undef EXIT_ON_CLOSE
#undef VK_PAGE_DOWN

using $BasicListTest$1 = ::BasicListTest$1;
using $MyList = ::MyList;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
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
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;

class BasicListTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(BasicListTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		BasicListTest::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicListTest$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BasicListTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(BasicListTest$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo BasicListTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicListTest$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&BasicListTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicListTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"BasicListTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* BasicListTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(BasicListTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicListTest$$Lambda$lambda$main$0::class$ = nullptr;

class BasicListTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(BasicListTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		BasicListTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicListTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicListTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicListTest$$Lambda$lambda$main$1$1::*)()>(&BasicListTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicListTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"BasicListTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* BasicListTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(BasicListTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicListTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class BasicListTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(BasicListTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		BasicListTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BasicListTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BasicListTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicListTest$$Lambda$lambda$main$2$2::*)()>(&BasicListTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BasicListTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"BasicListTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* BasicListTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(BasicListTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BasicListTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$FieldInfo _BasicListTest_FieldInfo_[] = {
	{"jScrollPane1", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, jScrollPane1)},
	{"list1", "LMyList;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, list1)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, p)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, f)},
	{}
};

$MethodInfo _BasicListTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicListTest::*)()>(&BasicListTest::init$))},
	{"initComponents", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&BasicListTest::initComponents))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&BasicListTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&BasicListTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&BasicListTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BasicListTest::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&BasicListTest::setLookAndFeel))},
	{}
};

$InnerClassInfo _BasicListTest_InnerClassesInfo_[] = {
	{"BasicListTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicListTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BasicListTest",
	"java.lang.Object",
	nullptr,
	_BasicListTest_FieldInfo_,
	_BasicListTest_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"BasicListTest$1"
};

$Object* allocate$BasicListTest($Class* clazz) {
	return $of($alloc(BasicListTest));
}

$JScrollPane* BasicListTest::jScrollPane1 = nullptr;
$MyList* BasicListTest::list1 = nullptr;
$Point* BasicListTest::p = nullptr;
$JFrame* BasicListTest::f = nullptr;

void BasicListTest::init$() {
}

void BasicListTest::initComponents() {
	$init(BasicListTest);
	$assignStatic(BasicListTest::f, $new($JFrame));
	$assignStatic(BasicListTest::jScrollPane1, $new($JScrollPane));
	$assignStatic(BasicListTest::list1, $new($MyList));
	$nc(BasicListTest::f)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc(BasicListTest::list1)->setModel($$new($BasicListTest$1));
	$nc(BasicListTest::jScrollPane1)->setViewportView(BasicListTest::list1);
	$init($BorderLayout);
	$nc($($nc(BasicListTest::f)->getContentPane()))->add(static_cast<$Component*>(BasicListTest::jScrollPane1), $of($BorderLayout::CENTER));
	$nc(BasicListTest::f)->pack();
	$nc(BasicListTest::f)->setVisible(true);
	$assignStatic(BasicListTest::p, $nc(BasicListTest::list1)->getLocationOnScreen());
}

void BasicListTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
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

void BasicListTest::main($StringArray* args) {
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				try {
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(BasicListTest$$Lambda$lambda$main$0, laf)));
					$init($System);
					$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(BasicListTest$$Lambda$lambda$main$1$1)));
					$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
				$var($Robot, robot, $new($Robot));
				robot->setAutoDelay(200);
				$init(BasicListTest);
				robot->mouseMove($nc(BasicListTest::p)->x, $nc(BasicListTest::p)->y);
				robot->waitForIdle();
				robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
				robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
				robot->waitForIdle();
				robot->keyPress($KeyEvent::VK_PAGE_DOWN);
				robot->keyRelease($KeyEvent::VK_PAGE_DOWN);
				try {
					$Thread::sleep(1000);
				} catch ($InterruptedException&) {
					$catch();
				}
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(BasicListTest$$Lambda$lambda$main$2$2)));
			}
		}
	}
}

void BasicListTest::lambda$main$2() {
	$init(BasicListTest);
	$nc(BasicListTest::f)->dispose();
}

void BasicListTest::lambda$main$1() {
	initComponents();
}

void BasicListTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

BasicListTest::BasicListTest() {
}

$Class* BasicListTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BasicListTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return BasicListTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(BasicListTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return BasicListTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(BasicListTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return BasicListTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$loadClass(BasicListTest, name, initialize, &_BasicListTest_ClassInfo_, allocate$BasicListTest);
	return class$;
}

$Class* BasicListTest::class$ = nullptr;