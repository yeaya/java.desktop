#include <WrongSelectionOnMouseOver.h>

#include <WrongSelectionOnMouseOver$1.h>
#include <WrongSelectionOnMouseOver$2.h>
#include <WrongSelectionOnMouseOver$3.h>
#include <java/awt/Component.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
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
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/MenuListener.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef SECONDS

using $WrongSelectionOnMouseOver$1 = ::WrongSelectionOnMouseOver$1;
using $WrongSelectionOnMouseOver$2 = ::WrongSelectionOnMouseOver$2;
using $WrongSelectionOnMouseOver$3 = ::WrongSelectionOnMouseOver$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $MenuListener = ::javax::swing::event::MenuListener;

class WrongSelectionOnMouseOver$$Lambda$lambda$test$0 : public $Runnable {
	$class(WrongSelectionOnMouseOver$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WrongSelectionOnMouseOver* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WrongSelectionOnMouseOver$$Lambda$lambda$test$0>());
	}
	WrongSelectionOnMouseOver* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WrongSelectionOnMouseOver$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WrongSelectionOnMouseOver$$Lambda$lambda$test$0, inst$)},
	{}
};
$MethodInfo WrongSelectionOnMouseOver$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, $PUBLIC, $method(static_cast<void(WrongSelectionOnMouseOver$$Lambda$lambda$test$0::*)(WrongSelectionOnMouseOver*)>(&WrongSelectionOnMouseOver$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WrongSelectionOnMouseOver$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"WrongSelectionOnMouseOver$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WrongSelectionOnMouseOver$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(WrongSelectionOnMouseOver$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WrongSelectionOnMouseOver$$Lambda$lambda$test$0::class$ = nullptr;

$FieldInfo _WrongSelectionOnMouseOver_FieldInfo_[] = {
	{"firstMenuSelected", "Ljava/util/concurrent/CountDownLatch;", nullptr, 0, $field(WrongSelectionOnMouseOver, firstMenuSelected)},
	{"secondMenuMouseEntered", "Ljava/util/concurrent/CountDownLatch;", nullptr, 0, $field(WrongSelectionOnMouseOver, secondMenuMouseEntered)},
	{"secondMenuSelected", "Ljava/util/concurrent/CountDownLatch;", nullptr, 0, $field(WrongSelectionOnMouseOver, secondMenuSelected)},
	{"m1", "Ljavax/swing/JMenu;", nullptr, 0, $field(WrongSelectionOnMouseOver, m1)},
	{"m2", "Ljavax/swing/JMenu;", nullptr, 0, $field(WrongSelectionOnMouseOver, m2)},
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PRIVATE, $field(WrongSelectionOnMouseOver, laf)},
	{"frame1", "Ljavax/swing/JFrame;", nullptr, 0, $field(WrongSelectionOnMouseOver, frame1)},
	{"frame2", "Ljavax/swing/JFrame;", nullptr, 0, $field(WrongSelectionOnMouseOver, frame2)},
	{"menu1location", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(WrongSelectionOnMouseOver, menu1location)},
	{"menu2location", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(WrongSelectionOnMouseOver, menu2location)},
	{}
};

$MethodInfo _WrongSelectionOnMouseOver_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(WrongSelectionOnMouseOver::*)($UIManager$LookAndFeelInfo*)>(&WrongSelectionOnMouseOver::init$)), "java.lang.Exception"},
	{"createUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(WrongSelectionOnMouseOver::*)()>(&WrongSelectionOnMouseOver::createUI)), "java.lang.Exception"},
	{"disposeUI", "()V", nullptr, $PUBLIC},
	{"lambda$test$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(WrongSelectionOnMouseOver::*)()>(&WrongSelectionOnMouseOver::lambda$test$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WrongSelectionOnMouseOver::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"test", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _WrongSelectionOnMouseOver_InnerClassesInfo_[] = {
	{"WrongSelectionOnMouseOver$3", nullptr, nullptr, 0},
	{"WrongSelectionOnMouseOver$2", nullptr, nullptr, 0},
	{"WrongSelectionOnMouseOver$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongSelectionOnMouseOver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WrongSelectionOnMouseOver",
	"java.lang.Object",
	"java.lang.Runnable",
	_WrongSelectionOnMouseOver_FieldInfo_,
	_WrongSelectionOnMouseOver_MethodInfo_,
	nullptr,
	nullptr,
	_WrongSelectionOnMouseOver_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WrongSelectionOnMouseOver$3,WrongSelectionOnMouseOver$2,WrongSelectionOnMouseOver$1"
};

$Object* allocate$WrongSelectionOnMouseOver($Class* clazz) {
	return $of($alloc(WrongSelectionOnMouseOver));
}

void WrongSelectionOnMouseOver::init$($UIManager$LookAndFeelInfo* laf) {
	$set(this, firstMenuSelected, $new($CountDownLatch, 1));
	$set(this, secondMenuMouseEntered, $new($CountDownLatch, 1));
	$set(this, secondMenuSelected, $new($CountDownLatch, 1));
	$set(this, laf, laf);
}

void WrongSelectionOnMouseOver::createUI() {
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println($$str({"Testing UI: "_s, this->laf}));
	$UIManager::setLookAndFeel($($nc(this->laf)->getClassName()));
	{
		$set(this, frame1, $new($JFrame, "Frame1"_s));
		$var($JMenuBar, mb, $new($JMenuBar));
		$set(this, m1, $new($JMenu, "File"_s));
		$var($JMenuItem, i1, $new($JMenuItem, "Save"_s));
		$var($JMenuItem, i2, $new($JMenuItem, "Load"_s));
		$nc(this->m1)->addMenuListener($$new($WrongSelectionOnMouseOver$1, this));
		$nc(this->frame1)->setJMenuBar(mb);
		mb->add(this->m1);
		$nc(this->m1)->add(i1);
		$nc(this->m1)->add(i2);
		$nc(this->frame1)->setLayout($$new($FlowLayout));
		$nc(this->frame1)->setBounds(200, 200, 200, 200);
		$nc(this->frame1)->setVisible(true);
	}
	{
		$set(this, frame2, $new($JFrame, "Frame2"_s));
		$var($JMenuBar, mb, $new($JMenuBar));
		$set(this, m2, $new($JMenu, "File"_s));
		$var($JMenuItem, i1, $new($JMenuItem, "Save"_s));
		$var($JMenuItem, i2, $new($JMenuItem, "Load"_s));
		$nc(this->m2)->addMouseListener($$new($WrongSelectionOnMouseOver$2, this));
		$nc(this->m2)->addMenuListener($$new($WrongSelectionOnMouseOver$3, this));
		$nc(this->frame2)->setJMenuBar(mb);
		mb->add(this->m2);
		$nc(this->m2)->add(i1);
		$nc(this->m2)->add(i2);
		$nc(this->frame2)->setLayout($$new($FlowLayout));
		$nc(this->frame2)->setBounds(450, 200, 200, 200);
		$nc(this->frame2)->setVisible(true);
	}
}

void WrongSelectionOnMouseOver::disposeUI() {
	$nc(this->frame1)->dispose();
	$nc(this->frame2)->dispose();
}

void WrongSelectionOnMouseOver::run() {
	try {
		if (this->frame1 == nullptr) {
			createUI();
		} else {
			disposeUI();
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void WrongSelectionOnMouseOver::test() {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(WrongSelectionOnMouseOver$$Lambda$lambda$test$0, this)));
	int32_t var$0 = $cast(int32_t, $nc(this->menu1location)->getX()) + 5;
	robot->mouseMove(var$0, $cast(int32_t, $nc(this->menu1location)->getY()) + 5);
	robot->mousePress($MouseEvent::BUTTON1_MASK);
	robot->mouseRelease($MouseEvent::BUTTON1_MASK);
	$init($TimeUnit);
	if (!$nc(this->firstMenuSelected)->await(5, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "Menu has not been selected."_s);
	}
	int32_t var$1 = $cast(int32_t, $nc(this->menu2location)->getX()) + 5;
	robot->mouseMove(var$1, $cast(int32_t, $nc(this->menu2location)->getY()) + 5);
	if (!$nc(this->secondMenuMouseEntered)->await(5, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "MouseEntered event missed for the second menu"_s);
	}
	if ($nc(this->secondMenuSelected)->await(1, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "The second menu has been selected"_s);
	}
}

void WrongSelectionOnMouseOver::main($StringArray* args) {
	$init(WrongSelectionOnMouseOver);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$var(WrongSelectionOnMouseOver, test, $new(WrongSelectionOnMouseOver, laf));
				$SwingUtilities::invokeAndWait(test);
				test->test();
				$SwingUtilities::invokeAndWait(test);
			}
		}
	}
	$init($System);
	$nc($System::out)->println("Test passed"_s);
}

void WrongSelectionOnMouseOver::lambda$test$0() {
	$set(this, menu1location, $nc(this->m1)->getLocationOnScreen());
	$set(this, menu2location, $nc(this->m2)->getLocationOnScreen());
}

WrongSelectionOnMouseOver::WrongSelectionOnMouseOver() {
}

$Class* WrongSelectionOnMouseOver::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WrongSelectionOnMouseOver$$Lambda$lambda$test$0::classInfo$.name)) {
			return WrongSelectionOnMouseOver$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$loadClass(WrongSelectionOnMouseOver, name, initialize, &_WrongSelectionOnMouseOver_ClassInfo_, allocate$WrongSelectionOnMouseOver);
	return class$;
}

$Class* WrongSelectionOnMouseOver::class$ = nullptr;