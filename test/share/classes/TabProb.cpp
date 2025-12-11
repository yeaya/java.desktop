#include <TabProb.h>

#include <TabProb$1.h>
#include <TabProb$FixLayout.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef TOP

using $TabProb$1 = ::TabProb$1;
using $TabProb$FixLayout = ::TabProb$FixLayout;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class TabProb$$Lambda$lambda$test$0 : public $Runnable {
	$class(TabProb$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TabProb::lambda$test$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TabProb$$Lambda$lambda$test$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TabProb$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TabProb$$Lambda$lambda$test$0::*)()>(&TabProb$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TabProb$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TabProb$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TabProb$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(TabProb$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TabProb$$Lambda$lambda$test$0::class$ = nullptr;

class TabProb$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(TabProb$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TabProb::lambda$test$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TabProb$$Lambda$lambda$test$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TabProb$$Lambda$lambda$test$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TabProb$$Lambda$lambda$test$1$1::*)()>(&TabProb$$Lambda$lambda$test$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TabProb$$Lambda$lambda$test$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TabProb$$Lambda$lambda$test$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TabProb$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$loadClass(TabProb$$Lambda$lambda$test$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TabProb$$Lambda$lambda$test$1$1::class$ = nullptr;

$FieldInfo _TabProb_FieldInfo_[] = {
	{"tb1", "LTabProb;", nullptr, $STATIC, $staticField(TabProb, tb1)},
	{"tb2", "LTabProb;", nullptr, $STATIC, $staticField(TabProb, tb2)},
	{}
};

$MethodInfo _TabProb_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TabProb::*)(int32_t)>(&TabProb::init$))},
	{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TabProb::lambda$test$0))},
	{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TabProb::lambda$test$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TabProb::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&TabProb::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TabProb_InnerClassesInfo_[] = {
	{"TabProb$FixLayout", "TabProb", "FixLayout", 0},
	{"TabProb$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TabProb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TabProb",
	"javax.swing.JFrame",
	nullptr,
	_TabProb_FieldInfo_,
	_TabProb_MethodInfo_,
	nullptr,
	nullptr,
	_TabProb_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TabProb$FixLayout,TabProb$1"
};

$Object* allocate$TabProb($Class* clazz) {
	return $of($alloc(TabProb));
}

TabProb* TabProb::tb1 = nullptr;
TabProb* TabProb::tb2 = nullptr;

void TabProb::init$(int32_t layoutPolicy) {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	$var($JTabbedPane, tabpanel, $new($JTabbedPane));
	tabpanel->setTabPlacement($JTabbedPane::TOP);
	tabpanel->setTabLayoutPolicy(layoutPolicy);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($TabProb$FixLayout, this))));
	$var($JLabel, label, $new($JLabel, "Label"_s));
	$init($Color);
	label->setBorder($($BorderFactory::createLineBorder($Color::green, 3)));
	panel->add(static_cast<$Component*>(label));
	tabpanel->add("TEST"_s, static_cast<$Component*>(panel));
	$init($BorderLayout);
	add(static_cast<$Component*>(tabpanel), $of($BorderLayout::CENTER));
	setUndecorated(true);
	setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
}

void TabProb::main($StringArray* args) {
	$init(TabProb);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
				test();
				$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
			}
		}
	}
}

void TabProb::test() {
	$init(TabProb);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($TabProb$1));
	double tb1height = $nc($($nc(TabProb::tb1)->getPreferredSize()))->getHeight();
	double tb2height = $nc($($nc(TabProb::tb2)->getPreferredSize()))->getHeight();
	$nc($System::out)->println(tb1height);
	$nc($System::out)->println(tb2height);
	robot->waitForIdle();
	robot->delay(2000);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TabProb$$Lambda$lambda$test$0)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TabProb$$Lambda$lambda$test$1$1)));
	if (tb1height != tb2height) {
		$throwNew($RuntimeException, "JTabbedPane preferred size calculation is wrong for SCROLL_TAB_LAYOUT"_s);
	}
}

void TabProb::lambda$test$1() {
	$init(TabProb);
	$nc(TabProb::tb2)->dispose();
}

void TabProb::lambda$test$0() {
	$init(TabProb);
	$nc(TabProb::tb1)->dispose();
}

TabProb::TabProb() {
}

$Class* TabProb::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TabProb$$Lambda$lambda$test$0::classInfo$.name)) {
			return TabProb$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals(TabProb$$Lambda$lambda$test$1$1::classInfo$.name)) {
			return TabProb$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
	}
	$loadClass(TabProb, name, initialize, &_TabProb_ClassInfo_, allocate$TabProb);
	return class$;
}

$Class* TabProb::class$ = nullptr;