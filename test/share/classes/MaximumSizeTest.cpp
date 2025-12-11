#include <MaximumSizeTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class MaximumSizeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(MaximumSizeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MaximumSizeTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MaximumSizeTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MaximumSizeTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaximumSizeTest$$Lambda$lambda$main$0::*)()>(&MaximumSizeTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MaximumSizeTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MaximumSizeTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MaximumSizeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(MaximumSizeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MaximumSizeTest$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _MaximumSizeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MaximumSizeTest::*)()>(&MaximumSizeTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MaximumSizeTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MaximumSizeTest::main))},
	{}
};

$ClassInfo _MaximumSizeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MaximumSizeTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MaximumSizeTest_MethodInfo_
};

$Object* allocate$MaximumSizeTest($Class* clazz) {
	return $of($alloc(MaximumSizeTest));
}

void MaximumSizeTest::init$() {
}

void MaximumSizeTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MaximumSizeTest$$Lambda$lambda$main$0)));
	} catch ($InterruptedException& e) {
		$nc($System::out)->println($($of(e->getCause())));
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($InvocationTargetException& e) {
		$nc($System::out)->println($($of(e->getCause())));
		$throwNew($RuntimeException, $(e->getMessage()));
	}
}

void MaximumSizeTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, r, $new($JRootPane));
	$nc($(r->getContentPane()))->add(static_cast<$Component*>($$new($JLabel, "foo"_s)));
	$nc($System::out)->println($$str({"Min Size: "_s, $(r->getMinimumSize())}));
	$nc($System::out)->println($$str({"Preferred Size: "_s, $(r->getPreferredSize())}));
	$var($Dimension, d, r->getMaximumSize());
	if ($nc(d)->width == 0 || $nc(d)->height == 0) {
		$throwNew($RuntimeException, $$str({"Maximum size is wrongly reported: "_s, d}));
	}
	$nc($System::out)->println($$str({"Max size: "_s, d}));
}

MaximumSizeTest::MaximumSizeTest() {
}

$Class* MaximumSizeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MaximumSizeTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return MaximumSizeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(MaximumSizeTest, name, initialize, &_MaximumSizeTest_ClassInfo_, allocate$MaximumSizeTest);
	return class$;
}

$Class* MaximumSizeTest::class$ = nullptr;