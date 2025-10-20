#include <CheckCommonUseCases.h>

#include <CheckCommonUseCases$1.h>
#include <java/awt/EventQueue.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
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
#include <java/util/Arrays.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $CheckCommonUseCases$1 = ::CheckCommonUseCases$1;
using $EventQueue = ::java::awt::EventQueue;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $Arrays = ::java::util::Arrays;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $JPasswordField = ::javax::swing::JPasswordField;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class CheckCommonUseCases$$Lambda$lambda$main$0 : public $Runnable {
	$class(CheckCommonUseCases$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		CheckCommonUseCases::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CheckCommonUseCases$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CheckCommonUseCases$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckCommonUseCases$$Lambda$lambda$main$0::*)()>(&CheckCommonUseCases$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CheckCommonUseCases$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"CheckCommonUseCases$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* CheckCommonUseCases$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(CheckCommonUseCases$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CheckCommonUseCases$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _CheckCommonUseCases_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CheckCommonUseCases::*)()>(&CheckCommonUseCases::init$))},
	{"checkDifferentTextLength", "(Ljavax/swing/JPasswordField;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JPasswordField*)>(&CheckCommonUseCases::checkDifferentTextLength))},
	{"countListeners", "(Ljavax/swing/JPasswordField;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JPasswordField*)>(&CheckCommonUseCases::countListeners))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&CheckCommonUseCases::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CheckCommonUseCases::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CheckCommonUseCases_InnerClassesInfo_[] = {
	{"CheckCommonUseCases$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CheckCommonUseCases_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"CheckCommonUseCases",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CheckCommonUseCases_MethodInfo_,
	nullptr,
	nullptr,
	_CheckCommonUseCases_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CheckCommonUseCases$1"
};

$Object* allocate$CheckCommonUseCases($Class* clazz) {
	return $of($alloc(CheckCommonUseCases));
}

void CheckCommonUseCases::init$() {
}

void CheckCommonUseCases::main($StringArray* args) {
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(CheckCommonUseCases$$Lambda$lambda$main$0)));
}

void CheckCommonUseCases::countListeners($JPasswordField* pf) {
	$useLocalCurrentObjectStackCache();
	$var($AtomicInteger, insert, $new($AtomicInteger));
	$var($AtomicInteger, update, $new($AtomicInteger));
	$var($AtomicInteger, remove, $new($AtomicInteger));
	$nc($($nc(pf)->getDocument()))->addDocumentListener($$new($CheckCommonUseCases$1, insert, remove, update));
	pf->setText("aaa"_s);
	bool var$1 = remove->get() != 0;
	bool var$0 = var$1 || update->get() != 0;
	if (var$0 || insert->get() > 1) {
		$init($System);
		$nc($System::err)->println($$str({"remove = "_s, remove}));
		$nc($System::err)->println($$str({"update = "_s, update}));
		$nc($System::err)->println($$str({"insert = "_s, insert}));
		$throwNew($RuntimeException, "Unexpected number of listeners"_s);
	}
	insert->set(0);
	update->set(0);
	remove->set(0);
	pf->setText("bbb"_s);
	bool var$3 = remove->get() > 1;
	bool var$2 = var$3 || update->get() > 1;
	if (var$2 || insert->get() > 1) {
		$init($System);
		$nc($System::err)->println($$str({"remove = "_s, remove}));
		$nc($System::err)->println($$str({"update = "_s, update}));
		$nc($System::err)->println($$str({"insert = "_s, insert}));
		$throwNew($RuntimeException, "Unexpected number of listeners"_s);
	}
	insert->set(0);
	update->set(0);
	remove->set(0);
	pf->setText(""_s);
	bool var$5 = remove->get() > 1;
	bool var$4 = var$5 || update->get() > 0;
	if (var$4 || insert->get() > 0) {
		$init($System);
		$nc($System::err)->println($$str({"remove = "_s, remove}));
		$nc($System::err)->println($$str({"update = "_s, update}));
		$nc($System::err)->println($$str({"insert = "_s, insert}));
		$throwNew($RuntimeException, "Unexpected number of listeners"_s);
	}
}

void CheckCommonUseCases::checkDifferentTextLength($JPasswordField* pf) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 100; ++i) {
		$var($String, expected, $nc(($$str({""_s, $$str(i)})))->repeat(i));
		$nc(pf)->setText(expected);
		$var($String, actual, $Arrays::toString($(pf->getPassword())));
		if ($nc(actual)->equals(expected)) {
			$init($System);
			$nc($System::err)->println($$str({"Expected: "_s, expected}));
			$nc($System::err)->println($$str({"Actual: "_s, actual}));
			$throwNew($RuntimeException);
		}
	}
	for (int32_t i = 99; i >= 0; --i) {
		$var($String, expected, $nc(($$str({""_s, $$str(i)})))->repeat(i));
		$nc(pf)->setText(expected);
		$var($String, actual, $Arrays::toString($(pf->getPassword())));
		if ($nc(actual)->equals(expected)) {
			$init($System);
			$nc($System::err)->println($$str({"Expected: "_s, expected}));
			$nc($System::err)->println($$str({"Actual: "_s, actual}));
			$throwNew($RuntimeException);
		}
	}
}

void CheckCommonUseCases::lambda$main$0() {
	$var($JPasswordField, pf, $new($JPasswordField));
	checkDifferentTextLength(pf);
	countListeners(pf);
}

CheckCommonUseCases::CheckCommonUseCases() {
}

$Class* CheckCommonUseCases::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CheckCommonUseCases$$Lambda$lambda$main$0::classInfo$.name)) {
			return CheckCommonUseCases$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(CheckCommonUseCases, name, initialize, &_CheckCommonUseCases_ClassInfo_, allocate$CheckCommonUseCases);
	return class$;
}

$Class* CheckCommonUseCases::class$ = nullptr;