#include <AllSwingComponentsBaselineTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
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
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
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
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

class AllSwingComponentsBaselineTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AllSwingComponentsBaselineTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AllSwingComponentsBaselineTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::*)()>(&AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"AllSwingComponentsBaselineTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _AllSwingComponentsBaselineTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AllSwingComponentsBaselineTest::*)()>(&AllSwingComponentsBaselineTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&AllSwingComponentsBaselineTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AllSwingComponentsBaselineTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&AllSwingComponentsBaselineTest::test))},
	{}
};

$ClassInfo _AllSwingComponentsBaselineTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AllSwingComponentsBaselineTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AllSwingComponentsBaselineTest_MethodInfo_
};

$Object* allocate$AllSwingComponentsBaselineTest($Class* clazz) {
	return $of($alloc(AllSwingComponentsBaselineTest));
}

void AllSwingComponentsBaselineTest::init$() {
}

void AllSwingComponentsBaselineTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$init($System);
				$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0)));
				$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
			}
		}
	}
}

void AllSwingComponentsBaselineTest::test() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(frame, $new($JFrame));
			$var($JButton, b, $new($JButton, "test"_s));
			$var($FlowLayout, layout, $new($FlowLayout));
			layout->setAlignOnBaseline(true);
			$nc($(frame->getContentPane()))->setLayout(layout);
			$nc($(frame->getContentPane()))->add(static_cast<$Component*>(b));
			$var($BasicButtonUI, bbUI, $cast($BasicButtonUI, $UIManager::getUI(b)));
			$var($JComponent, var$1, static_cast<$JComponent*>(b));
			int32_t var$2 = b->getHeight();
			$nc(bbUI)->getBaseline(var$1, var$2, b->getWidth());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (frame != nullptr) {
				frame->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AllSwingComponentsBaselineTest::lambda$main$0() {
	test();
}

AllSwingComponentsBaselineTest::AllSwingComponentsBaselineTest() {
}

$Class* AllSwingComponentsBaselineTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(AllSwingComponentsBaselineTest, name, initialize, &_AllSwingComponentsBaselineTest_ClassInfo_, allocate$AllSwingComponentsBaselineTest);
	return class$;
}

$Class* AllSwingComponentsBaselineTest::class$ = nullptr;