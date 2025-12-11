#include <JSpinnerButtonFocusTest.h>

#include <JSpinnerButtonFocusTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef LF
#undef MINUTES
#undef NORTH
#undef SOUTH

using $JSpinnerButtonFocusTest$1 = ::JSpinnerButtonFocusTest$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class JSpinnerButtonFocusTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JSpinnerButtonFocusTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JSpinnerButtonFocusTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JSpinnerButtonFocusTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSpinnerButtonFocusTest$$Lambda$lambda$main$0::*)()>(&JSpinnerButtonFocusTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JSpinnerButtonFocusTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JSpinnerButtonFocusTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(JSpinnerButtonFocusTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$0::class$ = nullptr;

class JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JSpinnerButtonFocusTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::*)()>(&JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JSpinnerButtonFocusTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::*)()>(&JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class JSpinnerButtonFocusTest$$Lambda$dispose$3 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$dispose$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JSpinnerButtonFocusTest$$Lambda$dispose$3>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JSpinnerButtonFocusTest$$Lambda$dispose$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JSpinnerButtonFocusTest$$Lambda$dispose$3, inst$)},
	{}
};
$MethodInfo JSpinnerButtonFocusTest$$Lambda$dispose$3::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(JSpinnerButtonFocusTest$$Lambda$dispose$3::*)($Window*)>(&JSpinnerButtonFocusTest$$Lambda$dispose$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JSpinnerButtonFocusTest$$Lambda$dispose$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"JSpinnerButtonFocusTest$$Lambda$dispose$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JSpinnerButtonFocusTest$$Lambda$dispose$3::load$($String* name, bool initialize) {
	$loadClass(JSpinnerButtonFocusTest$$Lambda$dispose$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$dispose$3::class$ = nullptr;

$FieldInfo _JSpinnerButtonFocusTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, frame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, robot)},
	{"spinner1", "Ljavax/swing/JSpinner;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, spinner1)},
	{"spinner2", "Ljavax/swing/JSpinner;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, spinner2)},
	{"editor1", "Ljavax/swing/JSpinner$DefaultEditor;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, editor1)},
	{"editor2", "Ljavax/swing/JSpinner$DefaultEditor;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, editor2)},
	{"isJTextFieldFocused", "Z", nullptr, $STATIC | $VOLATILE, $staticField(JSpinnerButtonFocusTest, isJTextFieldFocused)},
	{"latch1", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC | $VOLATILE, $staticField(JSpinnerButtonFocusTest, latch1)},
	{}
};

$MethodInfo _JSpinnerButtonFocusTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSpinnerButtonFocusTest::*)()>(&JSpinnerButtonFocusTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JSpinnerButtonFocusTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JSpinnerButtonFocusTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JSpinnerButtonFocusTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JSpinnerButtonFocusTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JSpinnerButtonFocusTest_InnerClassesInfo_[] = {
	{"JSpinnerButtonFocusTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JSpinnerButtonFocusTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JSpinnerButtonFocusTest",
	"java.lang.Object",
	nullptr,
	_JSpinnerButtonFocusTest_FieldInfo_,
	_JSpinnerButtonFocusTest_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinnerButtonFocusTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JSpinnerButtonFocusTest$1"
};

$Object* allocate$JSpinnerButtonFocusTest($Class* clazz) {
	return $of($alloc(JSpinnerButtonFocusTest));
}

$JFrame* JSpinnerButtonFocusTest::frame = nullptr;
$Robot* JSpinnerButtonFocusTest::robot = nullptr;
$JSpinner* JSpinnerButtonFocusTest::spinner1 = nullptr;
$JSpinner* JSpinnerButtonFocusTest::spinner2 = nullptr;
$JSpinner$DefaultEditor* JSpinnerButtonFocusTest::editor1 = nullptr;
$JSpinner$DefaultEditor* JSpinnerButtonFocusTest::editor2 = nullptr;
$volatile(bool) JSpinnerButtonFocusTest::isJTextFieldFocused = false;
$volatile($CountDownLatch*) JSpinnerButtonFocusTest::latch1 = nullptr;

void JSpinnerButtonFocusTest::init$() {
}

void JSpinnerButtonFocusTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			{
				$init(JSpinnerButtonFocusTest);
				$assignStatic(JSpinnerButtonFocusTest::latch1, $new($CountDownLatch, 1));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
						$assignStatic(JSpinnerButtonFocusTest::robot, $new($Robot));
						$nc(JSpinnerButtonFocusTest::robot)->setAutoDelay(50);
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JSpinnerButtonFocusTest$$Lambda$lambda$main$0)));
						$nc(JSpinnerButtonFocusTest::robot)->waitForIdle();
						$nc($($nc(JSpinnerButtonFocusTest::editor1)->getTextField()))->addFocusListener($$new($JSpinnerButtonFocusTest$1));
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1)));
						$init($TimeUnit);
						if (!$nc(JSpinnerButtonFocusTest::latch1)->await(15, $TimeUnit::MINUTES)) {
							$throwNew($RuntimeException, $$str({$($nc(LF)->getClassName()), ": Timeout waiting for editor1 to gain focus."_s}));
						}
						$nc(JSpinnerButtonFocusTest::robot)->waitForIdle();
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2)));
						if (!JSpinnerButtonFocusTest::isJTextFieldFocused) {
							$throwNew($RuntimeException, $$str({$($nc(LF)->getClassName()), ": Spinner\'s Text Field doesn\'t have focus "_s}));
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (JSpinnerButtonFocusTest::frame != nullptr) {
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JSpinnerButtonFocusTest$$Lambda$dispose$3, static_cast<$JFrame*>($nc(JSpinnerButtonFocusTest::frame)))));
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

void JSpinnerButtonFocusTest::lambda$main$2() {
	$init(JSpinnerButtonFocusTest);
	JSpinnerButtonFocusTest::isJTextFieldFocused = $nc($($nc(JSpinnerButtonFocusTest::editor2)->getTextField()))->isFocusOwner();
}

void JSpinnerButtonFocusTest::lambda$main$1() {
	$init(JSpinnerButtonFocusTest);
	$nc($($nc(JSpinnerButtonFocusTest::editor1)->getTextField()))->requestFocusInWindow();
}

void JSpinnerButtonFocusTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(JSpinnerButtonFocusTest);
	$assignStatic(JSpinnerButtonFocusTest::frame, $new($JFrame));
	$assignStatic(JSpinnerButtonFocusTest::spinner1, $new($JSpinner));
	$assignStatic(JSpinnerButtonFocusTest::spinner2, $new($JSpinner));
	$nc(JSpinnerButtonFocusTest::frame)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc($($nc(JSpinnerButtonFocusTest::frame)->getContentPane()))->add(static_cast<$Component*>(JSpinnerButtonFocusTest::spinner1), $of($BorderLayout::NORTH));
	$nc($($nc(JSpinnerButtonFocusTest::frame)->getContentPane()))->add(static_cast<$Component*>(JSpinnerButtonFocusTest::spinner2), $of($BorderLayout::SOUTH));
	$assignStatic(JSpinnerButtonFocusTest::editor1, $cast($JSpinner$DefaultEditor, $nc(JSpinnerButtonFocusTest::spinner1)->getEditor()));
	$nc(JSpinnerButtonFocusTest::editor1)->setFocusable(false);
	$nc(JSpinnerButtonFocusTest::spinner1)->setFocusable(false);
	$assignStatic(JSpinnerButtonFocusTest::editor2, $cast($JSpinner$DefaultEditor, $nc(JSpinnerButtonFocusTest::spinner2)->getEditor()));
	$nc(JSpinnerButtonFocusTest::editor2)->setFocusable(false);
	$nc(JSpinnerButtonFocusTest::spinner2)->setFocusable(false);
	$nc(JSpinnerButtonFocusTest::frame)->setFocusTraversalPolicy($$new($ContainerOrderFocusTraversalPolicy));
	$nc(JSpinnerButtonFocusTest::frame)->setFocusTraversalPolicyProvider(true);
	$nc(JSpinnerButtonFocusTest::frame)->setAlwaysOnTop(true);
	$nc(JSpinnerButtonFocusTest::frame)->pack();
	$nc(JSpinnerButtonFocusTest::frame)->setVisible(true);
}

JSpinnerButtonFocusTest::JSpinnerButtonFocusTest() {
}

$Class* JSpinnerButtonFocusTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JSpinnerButtonFocusTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return JSpinnerButtonFocusTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(JSpinnerButtonFocusTest$$Lambda$dispose$3::classInfo$.name)) {
			return JSpinnerButtonFocusTest$$Lambda$dispose$3::load$(name, initialize);
		}
	}
	$loadClass(JSpinnerButtonFocusTest, name, initialize, &_JSpinnerButtonFocusTest_ClassInfo_, allocate$JSpinnerButtonFocusTest);
	return class$;
}

$Class* JSpinnerButtonFocusTest::class$ = nullptr;