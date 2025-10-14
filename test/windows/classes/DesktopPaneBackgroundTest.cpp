#include <DesktopPaneBackgroundTest.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Toolkit = ::java::awt::Toolkit;
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
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class DesktopPaneBackgroundTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(DesktopPaneBackgroundTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DesktopPaneBackgroundTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DesktopPaneBackgroundTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DesktopPaneBackgroundTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DesktopPaneBackgroundTest$$Lambda$lambda$main$0::*)()>(&DesktopPaneBackgroundTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DesktopPaneBackgroundTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DesktopPaneBackgroundTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DesktopPaneBackgroundTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(DesktopPaneBackgroundTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DesktopPaneBackgroundTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _DesktopPaneBackgroundTest_FieldInfo_[] = {
	{"defaultBackgroudColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(DesktopPaneBackgroundTest, defaultBackgroudColor)},
	{}
};

$MethodInfo _DesktopPaneBackgroundTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DesktopPaneBackgroundTest::*)()>(&DesktopPaneBackgroundTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DesktopPaneBackgroundTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DesktopPaneBackgroundTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DesktopPaneBackgroundTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DesktopPaneBackgroundTest",
	"java.lang.Object",
	nullptr,
	_DesktopPaneBackgroundTest_FieldInfo_,
	_DesktopPaneBackgroundTest_MethodInfo_
};

$Object* allocate$DesktopPaneBackgroundTest($Class* clazz) {
	return $of($alloc(DesktopPaneBackgroundTest));
}

$Color* DesktopPaneBackgroundTest::defaultBackgroudColor = nullptr;

void DesktopPaneBackgroundTest::init$() {
}

void DesktopPaneBackgroundTest::main($StringArray* args) {
	$init(DesktopPaneBackgroundTest);
	$assignStatic(DesktopPaneBackgroundTest::defaultBackgroudColor, $cast($Color, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("win.mdi.backgroundColor"_s)));
	$var($StringArray, lookAndFeel, $new($StringArray, {
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s,
		"com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel"_s
	}));
	{
		$var($StringArray, arr$, lookAndFeel);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, laf, arr$->get(i$));
			{
				$UIManager::setLookAndFeel(laf);
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DesktopPaneBackgroundTest$$Lambda$lambda$main$0)));
			}
		}
	}
}

void DesktopPaneBackgroundTest::lambda$main$0() {
	$var($JDesktopPane, desktopPane, $new($JDesktopPane));
	$var($Color, background, desktopPane->getBackground());
	$init(DesktopPaneBackgroundTest);
	if (!$nc(background)->equals(DesktopPaneBackgroundTest::defaultBackgroudColor)) {
		$throwNew($RuntimeException, "Invalid JDesktopPane Background Color for WLAF"_s);
	}
}

DesktopPaneBackgroundTest::DesktopPaneBackgroundTest() {
}

$Class* DesktopPaneBackgroundTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DesktopPaneBackgroundTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return DesktopPaneBackgroundTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(DesktopPaneBackgroundTest, name, initialize, &_DesktopPaneBackgroundTest_ClassInfo_, allocate$DesktopPaneBackgroundTest);
	return class$;
}

$Class* DesktopPaneBackgroundTest::class$ = nullptr;