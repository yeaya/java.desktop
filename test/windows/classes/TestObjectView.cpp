#include <TestObjectView.h>

#include <TestObjectView$UserElement.h>
#include <TestObjectView$UserJComponent.h>
#include <TestObjectView$UserObjectView.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $TestObjectView$UserElement = ::TestObjectView$UserElement;
using $TestObjectView$UserJComponent = ::TestObjectView$UserJComponent;
using $TestObjectView$UserObjectView = ::TestObjectView$UserObjectView;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Element = ::javax::swing::text::Element;

class TestObjectView$$Lambda$testObjectView : public $Runnable {
	$class(TestObjectView$$Lambda$testObjectView, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestObjectView::testObjectView();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestObjectView$$Lambda$testObjectView>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestObjectView$$Lambda$testObjectView::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectView$$Lambda$testObjectView::*)()>(&TestObjectView$$Lambda$testObjectView::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestObjectView$$Lambda$testObjectView::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestObjectView$$Lambda$testObjectView",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestObjectView$$Lambda$testObjectView::load$($String* name, bool initialize) {
	$loadClass(TestObjectView$$Lambda$testObjectView, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestObjectView$$Lambda$testObjectView::class$ = nullptr;

$MethodInfo _TestObjectView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestObjectView::*)()>(&TestObjectView::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestObjectView::main)), "java.lang.Exception"},
	{"testObjectView", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestObjectView::testObjectView))},
	{}
};

$InnerClassInfo _TestObjectView_InnerClassesInfo_[] = {
	{"TestObjectView$UserElement", "TestObjectView", "UserElement", $PUBLIC | $STATIC},
	{"TestObjectView$UserObjectView", "TestObjectView", "UserObjectView", $PUBLIC | $STATIC},
	{"TestObjectView$UserJComponent", "TestObjectView", "UserJComponent", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestObjectView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestObjectView",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestObjectView_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestObjectView$UserElement,TestObjectView$UserElement$1,TestObjectView$UserObjectView,TestObjectView$UserJComponent"
};

$Object* allocate$TestObjectView($Class* clazz) {
	return $of($alloc(TestObjectView));
}

void TestObjectView::init$() {
}

void TestObjectView::main($StringArray* args) {
	$load(TestObjectView);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestObjectView$$Lambda$testObjectView)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestObjectView$$Lambda$testObjectView)));
}

void TestObjectView::testObjectView() {
	$var($TestObjectView$UserObjectView, objectView, $new($TestObjectView$UserObjectView, $$new($TestObjectView$UserElement)));
	$var($Component, comp, objectView->createComponent());
	if (!($instanceOf($TestObjectView$UserJComponent, comp))) {
		$throwNew($RuntimeException, "Component is not UserJComponent!"_s);
	}
}

TestObjectView::TestObjectView() {
}

$Class* TestObjectView::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestObjectView$$Lambda$testObjectView::classInfo$.name)) {
			return TestObjectView$$Lambda$testObjectView::load$(name, initialize);
		}
	}
	$loadClass(TestObjectView, name, initialize, &_TestObjectView_ClassInfo_, allocate$TestObjectView);
	return class$;
}

$Class* TestObjectView::class$ = nullptr;