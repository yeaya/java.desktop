#include <DefaultTreeCellRendererBorderTest.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

class DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DefaultTreeCellRendererBorderTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::*)()>(&DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::class$ = nullptr;

class DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DefaultTreeCellRendererBorderTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::*)()>(&DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DefaultTreeCellRendererBorderTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::*)()>(&DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class DefaultTreeCellRendererBorderTest$$Lambda$dispose$3 : public $Runnable {
	$class(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultTreeCellRendererBorderTest$$Lambda$dispose$3>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, inst$)},
	{}
};
$MethodInfo DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::*)($Window*)>(&DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultTreeCellRendererBorderTest$$Lambda$dispose$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::class$ = nullptr;

$FieldInfo _DefaultTreeCellRendererBorderTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, frame)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, tree)},
	{"treeCellRenderer", "Ljavax/swing/tree/DefaultTreeCellRenderer;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, treeCellRenderer)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, robot)},
	{"margin1", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, margin1)},
	{"margin2", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(DefaultTreeCellRendererBorderTest, margin2)},
	{}
};

$MethodInfo _DefaultTreeCellRendererBorderTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellRendererBorderTest::*)()>(&DefaultTreeCellRendererBorderTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DefaultTreeCellRendererBorderTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DefaultTreeCellRendererBorderTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DefaultTreeCellRendererBorderTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultTreeCellRendererBorderTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DefaultTreeCellRendererBorderTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultTreeCellRendererBorderTest",
	"java.lang.Object",
	nullptr,
	_DefaultTreeCellRendererBorderTest_FieldInfo_,
	_DefaultTreeCellRendererBorderTest_MethodInfo_
};

$Object* allocate$DefaultTreeCellRendererBorderTest($Class* clazz) {
	return $of($alloc(DefaultTreeCellRendererBorderTest));
}

$JFrame* DefaultTreeCellRendererBorderTest::frame = nullptr;
$JTree* DefaultTreeCellRendererBorderTest::tree = nullptr;
$DefaultTreeCellRenderer* DefaultTreeCellRendererBorderTest::treeCellRenderer = nullptr;
$Robot* DefaultTreeCellRendererBorderTest::robot = nullptr;
$Insets* DefaultTreeCellRendererBorderTest::margin1 = nullptr;
$Insets* DefaultTreeCellRendererBorderTest::margin2 = nullptr;

void DefaultTreeCellRendererBorderTest::init$() {
}

void DefaultTreeCellRendererBorderTest::main($StringArray* args) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init(DefaultTreeCellRendererBorderTest);
			$assignStatic(DefaultTreeCellRendererBorderTest::robot, $new($Robot));
			$nc(DefaultTreeCellRendererBorderTest::robot)->setAutoDelay(50);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0)));
			$nc(DefaultTreeCellRendererBorderTest::robot)->waitForIdle();
			$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
			$UIManager::put("Tree.rendererMargins"_s, $$new($Insets, 2, 2, 2, 2));
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1)));
			$nc(DefaultTreeCellRendererBorderTest::robot)->waitForIdle();
			$UIManager::put("Tree.rendererMargins"_s, nullptr);
			$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2)));
			$nc(DefaultTreeCellRendererBorderTest::robot)->waitForIdle();
			if ($nc(DefaultTreeCellRendererBorderTest::margin1)->equals(DefaultTreeCellRendererBorderTest::margin2)) {
				$throwNew($RuntimeException, "Test Failed : NimbusLookAndFeel Border persists for MetalLookAndFeel"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(DefaultTreeCellRendererBorderTest);
			if (DefaultTreeCellRendererBorderTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3, static_cast<$JFrame*>($nc(DefaultTreeCellRendererBorderTest::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DefaultTreeCellRendererBorderTest::lambda$main$2() {
	$init(DefaultTreeCellRendererBorderTest);
	$SwingUtilities::updateComponentTreeUI(DefaultTreeCellRendererBorderTest::frame);
	$assignStatic(DefaultTreeCellRendererBorderTest::margin2, $nc(DefaultTreeCellRendererBorderTest::treeCellRenderer)->getInsets());
}

void DefaultTreeCellRendererBorderTest::lambda$main$1() {
	$init(DefaultTreeCellRendererBorderTest);
	$SwingUtilities::updateComponentTreeUI(DefaultTreeCellRendererBorderTest::frame);
	$assignStatic(DefaultTreeCellRendererBorderTest::margin1, $nc(DefaultTreeCellRendererBorderTest::treeCellRenderer)->getInsets());
}

void DefaultTreeCellRendererBorderTest::lambda$main$0() {
	$init(DefaultTreeCellRendererBorderTest);
	$assignStatic(DefaultTreeCellRendererBorderTest::frame, $new($JFrame));
	$assignStatic(DefaultTreeCellRendererBorderTest::tree, $new($JTree));
	$assignStatic(DefaultTreeCellRendererBorderTest::treeCellRenderer, $new($DefaultTreeCellRenderer));
	$nc(DefaultTreeCellRendererBorderTest::tree)->add(static_cast<$Component*>(DefaultTreeCellRendererBorderTest::treeCellRenderer));
	$nc(DefaultTreeCellRendererBorderTest::frame)->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setSize(300, 300);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setVisible(true);
	$nc(DefaultTreeCellRendererBorderTest::frame)->setLayout($$new($BorderLayout));
	$nc(DefaultTreeCellRendererBorderTest::tree)->setRootVisible(true);
	$nc(DefaultTreeCellRendererBorderTest::tree)->setShowsRootHandles(true);
	$init($BorderLayout);
	$nc(DefaultTreeCellRendererBorderTest::frame)->add(static_cast<$Component*>(DefaultTreeCellRendererBorderTest::tree), $of($BorderLayout::CENTER));
}

DefaultTreeCellRendererBorderTest::DefaultTreeCellRendererBorderTest() {
}

$Class* DefaultTreeCellRendererBorderTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return DefaultTreeCellRendererBorderTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::classInfo$.name)) {
			return DefaultTreeCellRendererBorderTest$$Lambda$dispose$3::load$(name, initialize);
		}
	}
	$loadClass(DefaultTreeCellRendererBorderTest, name, initialize, &_DefaultTreeCellRendererBorderTest_ClassInfo_, allocate$DefaultTreeCellRendererBorderTest);
	return class$;
}

$Class* DefaultTreeCellRendererBorderTest::class$ = nullptr;