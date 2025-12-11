#include <bug7010561$1.h>

#include <bug7010561.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

#undef IS_SELECTED
#undef RETURN_VALUE
#undef TAB_PLACEMENT
#undef TYPE

using $bug7010561 = ::bug7010561;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;

$MethodInfo _bug7010561$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7010561$1::*)()>(&bug7010561$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7010561$1_EnclosingMethodInfo_ = {
	"bug7010561",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7010561$1_InnerClassesInfo_[] = {
	{"bug7010561$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7010561$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7010561$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7010561$1_MethodInfo_,
	nullptr,
	&_bug7010561$1_EnclosingMethodInfo_,
	_bug7010561$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7010561"
};

$Object* allocate$bug7010561$1($Class* clazz) {
	return $of($alloc(bug7010561$1));
}

void bug7010561$1::init$() {
}

void bug7010561$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($JTabbedPane, tabbedPane, $new($JTabbedPane));
	tabbedPane->addTab("Tab 1"_s, $$new($JLabel, "Tab 1"_s));
	tabbedPane->doLayout();
	$var($BasicTabbedPaneUI, basicTabbedPaneUI, $cast($BasicTabbedPaneUI, $cast($TabbedPaneUI, tabbedPane->getUI())));
	try {
		$load($BasicTabbedPaneUI);
		$init($Integer);
		$init($Boolean);
		$var($Method, method, $BasicTabbedPaneUI::class$->getDeclaredMethod("getTabLabelShiftY"_s, $$new($ClassArray, {
			$Integer::TYPE,
			$Integer::TYPE,
			$Boolean::TYPE
		})));
		$nc(method)->setAccessible(true);
		for (int32_t i = 0; i < 4; ++i) {
			$init($bug7010561);
			int32_t res = $nc(($cast($Integer, $(method->invoke(basicTabbedPaneUI, $$new($ObjectArray, {
				$($of($Integer::valueOf($nc($bug7010561::TAB_PLACEMENT)->get(i)))),
				$($of($Integer::valueOf(0))),
				$($of($Boolean::valueOf($nc($bug7010561::IS_SELECTED)->get(i))))
			}))))))->intValue();
			if (res != $nc($bug7010561::RETURN_VALUE)->get(i)) {
				$throwNew($RuntimeException, $$str({"Test bug7010561 failed on index "_s, $$str(i)}));
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc($System::out)->println("Test bug7010561 passed"_s);
}

bug7010561$1::bug7010561$1() {
}

$Class* bug7010561$1::load$($String* name, bool initialize) {
	$loadClass(bug7010561$1, name, initialize, &_bug7010561$1_ClassInfo_, allocate$bug7010561$1);
	return class$;
}

$Class* bug7010561$1::class$ = nullptr;