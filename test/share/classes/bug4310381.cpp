#include <bug4310381.h>

#include <TestUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef MINUTES
#undef SECONDS
#undef TOP
#undef WRAP_TAB_LAYOUT

using $TestUI = ::TestUI;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4310381$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4310381$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4310381::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4310381$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4310381$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4310381$$Lambda$lambda$main$0::*)()>(&bug4310381$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4310381$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4310381$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4310381$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4310381$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4310381$$Lambda$lambda$main$0::class$ = nullptr;

class bug4310381$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4310381$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4310381::lambda$main$1(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4310381$$Lambda$lambda$main$1$1>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4310381$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4310381$$Lambda$lambda$main$1$1, laf)},
	{}
};
$MethodInfo bug4310381$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4310381$$Lambda$lambda$main$1$1::*)($UIManager$LookAndFeelInfo*)>(&bug4310381$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4310381$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4310381$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4310381$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4310381$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4310381$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug4310381$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(bug4310381$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4310381::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4310381$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4310381$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4310381$$Lambda$lambda$main$2$2::*)()>(&bug4310381$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4310381$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4310381$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4310381$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(bug4310381$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4310381$$Lambda$lambda$main$2$2::class$ = nullptr;

class bug4310381$$Lambda$lambda$disposeUI$3$3 : public $Runnable {
	$class(bug4310381$$Lambda$lambda$disposeUI$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4310381::lambda$disposeUI$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4310381$$Lambda$lambda$disposeUI$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4310381$$Lambda$lambda$disposeUI$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4310381$$Lambda$lambda$disposeUI$3$3::*)()>(&bug4310381$$Lambda$lambda$disposeUI$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4310381$$Lambda$lambda$disposeUI$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4310381$$Lambda$lambda$disposeUI$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4310381$$Lambda$lambda$disposeUI$3$3::load$($String* name, bool initialize) {
	$loadClass(bug4310381$$Lambda$lambda$disposeUI$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4310381$$Lambda$lambda$disposeUI$3$3::class$ = nullptr;

$FieldInfo _bug4310381_FieldInfo_[] = {
	{"test", "LTestUI;", nullptr, $PRIVATE | $STATIC, $staticField(bug4310381, test)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4310381, frame)},
	{"tab", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4310381, tab)},
	{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(bug4310381, panel)},
	{"testLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC, $staticField(bug4310381, testLatch)},
	{}
};

$MethodInfo _bug4310381_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4310381::*)()>(&bug4310381::init$))},
	{"createContentPane", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4310381::createContentPane))},
	{"disposeUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&bug4310381::disposeUI)), "java.lang.Exception"},
	{"init", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4310381::init))},
	{"lambda$disposeUI$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4310381::lambda$disposeUI$3))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4310381::lambda$main$0))},
	{"lambda$main$1", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4310381::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4310381::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4310381::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4310381::setLookAndFeel)), "java.lang.Exception"},
	{"showUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&bug4310381::showUI))},
	{}
};

$ClassInfo _bug4310381_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4310381",
	"java.lang.Object",
	nullptr,
	_bug4310381_FieldInfo_,
	_bug4310381_MethodInfo_
};

$Object* allocate$bug4310381($Class* clazz) {
	return $of($alloc(bug4310381));
}

$TestUI* bug4310381::test = nullptr;
$JFrame* bug4310381::frame = nullptr;
$JTabbedPane* bug4310381::tab = nullptr;
$JPanel* bug4310381::panel = nullptr;
$CountDownLatch* bug4310381::testLatch = nullptr;

void bug4310381::init$() {
}

void bug4310381::init() {
	$init(bug4310381);
	$assignStatic(bug4310381::frame, $new($JFrame));
	$assignStatic(bug4310381::tab, $new($JTabbedPane));
	$assignStatic(bug4310381::panel, $new($JPanel));
	createContentPane();
	$nc(bug4310381::tab)->setTabPlacement($JTabbedPane::TOP);
	$nc(bug4310381::tab)->setTabLayoutPolicy($JTabbedPane::WRAP_TAB_LAYOUT);
	$nc(bug4310381::frame)->setMinimumSize($$new($Dimension, 100, 200));
}

void bug4310381::main($StringArray* args) {
	$init(bug4310381);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug4310381::testLatch, $new($CountDownLatch, 1));
	$assignStatic(bug4310381::test, $new($TestUI, bug4310381::testLatch));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4310381$$Lambda$lambda$main$0)));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				setLookAndFeel(laf);
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4310381$$Lambda$lambda$main$1$1, laf)));
				$var($CountDownLatch, latch, $new($CountDownLatch, 1));
				$init($TimeUnit);
				if (!latch->await(10, $TimeUnit::SECONDS)) {
					$nc(bug4310381::frame)->setVisible(false);
				}
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4310381$$Lambda$lambda$main$2$2)));
			}
		}
	}
	$init($TimeUnit);
	bool status = $nc(bug4310381::testLatch)->await(1, $TimeUnit::MINUTES);
	if (!status) {
		$nc($System::out)->println("Test timed out."_s);
	}
	if ($nc(bug4310381::test)->testResult == false) {
		disposeUI();
		$throwNew($RuntimeException, "Test Failed."_s);
	}
}

void bug4310381::disposeUI() {
	$init(bug4310381);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4310381$$Lambda$lambda$disposeUI$3$3)));
}

void bug4310381::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(bug4310381);
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($ClassNotFoundException& e) {
		disposeUI();
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		disposeUI();
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException& e) {
		disposeUI();
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		disposeUI();
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4310381::showUI() {
	$init(bug4310381);
	$useLocalCurrentObjectStackCache();
	$nc($($nc(bug4310381::frame)->getContentPane()))->add(static_cast<$Component*>(bug4310381::tab));
	$nc(bug4310381::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(bug4310381::frame)->setLocationRelativeTo(nullptr);
	$nc(bug4310381::frame)->setPreferredSize($$new($Dimension, 100, 200));
	$nc(bug4310381::frame)->pack();
	$nc(bug4310381::frame)->setVisible(true);
}

void bug4310381::createContentPane() {
	$init(bug4310381);
	$useLocalCurrentObjectStackCache();
	$var($String, a2z, "abcdefghijklmnopqrstuvwxyz"_s);
	$nc(bug4310381::tab)->addTab($$str({"0"_s, a2z, a2z}), $$new($JLabel, $$str({$($nc(($($UIManager::getLookAndFeel())))->getName()), " Look and Feel"_s})));
	$nc(bug4310381::tab)->addTab($$str({"1"_s, a2z}), $$new($JLabel, $$str({"1"_s, a2z})));
	$nc(bug4310381::tab)->addTab($$str({"2"_s, a2z}), $$new($JLabel, $$str({"2"_s, a2z})));
	$nc(bug4310381::tab)->addTab("3"_s, $$new($JPanel));
}

void bug4310381::lambda$disposeUI$3() {
	$init(bug4310381);
	if (bug4310381::test != nullptr) {
		$nc(bug4310381::test)->disposeUI();
	}
}

void bug4310381::lambda$main$2() {
	$init(bug4310381);
	$nc(bug4310381::frame)->dispose();
}

void bug4310381::lambda$main$1($UIManager$LookAndFeelInfo* laf) {
	$init(bug4310381);
	init();
	$nc(bug4310381::frame)->setTitle($($nc(laf)->getClassName()));
	showUI();
}

void bug4310381::lambda$main$0() {
	$init(bug4310381);
	try {
		$nc(bug4310381::test)->createUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception while creating UI"_s);
	}
}

void clinit$bug4310381($Class* class$) {
	$assignStatic(bug4310381::test, nullptr);
	$assignStatic(bug4310381::frame, nullptr);
	$assignStatic(bug4310381::tab, nullptr);
	$assignStatic(bug4310381::panel, nullptr);
	$assignStatic(bug4310381::testLatch, nullptr);
}

bug4310381::bug4310381() {
}

$Class* bug4310381::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4310381$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4310381$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4310381$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug4310381$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug4310381$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return bug4310381$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(bug4310381$$Lambda$lambda$disposeUI$3$3::classInfo$.name)) {
			return bug4310381$$Lambda$lambda$disposeUI$3$3::load$(name, initialize);
		}
	}
	$loadClass(bug4310381, name, initialize, &_bug4310381_ClassInfo_, clinit$bug4310381, allocate$bug4310381);
	return class$;
}

$Class* bug4310381::class$ = nullptr;