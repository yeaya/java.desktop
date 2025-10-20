#include <SetLayerNPE.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;

class SetLayerNPE$$Lambda$lambda$main$0 : public $Runnable {
	$class(SetLayerNPE$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetLayerNPE::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SetLayerNPE$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SetLayerNPE$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetLayerNPE$$Lambda$lambda$main$0::*)()>(&SetLayerNPE$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SetLayerNPE$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SetLayerNPE$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SetLayerNPE$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(SetLayerNPE$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SetLayerNPE$$Lambda$lambda$main$0::class$ = nullptr;

class SetLayerNPE$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SetLayerNPE$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SetLayerNPE::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SetLayerNPE$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SetLayerNPE$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetLayerNPE$$Lambda$lambda$main$1$1::*)()>(&SetLayerNPE$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SetLayerNPE$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SetLayerNPE$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SetLayerNPE$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(SetLayerNPE$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SetLayerNPE$$Lambda$lambda$main$1$1::class$ = nullptr;

$MethodInfo _SetLayerNPE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SetLayerNPE::*)()>(&SetLayerNPE::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SetLayerNPE::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SetLayerNPE::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SetLayerNPE::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SetLayerNPE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"SetLayerNPE",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SetLayerNPE_MethodInfo_
};

$Object* allocate$SetLayerNPE($Class* clazz) {
	return $of($alloc(SetLayerNPE));
}

void SetLayerNPE::init$() {
}

void SetLayerNPE::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(SetLayerNPE$$Lambda$lambda$main$0)));
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(SetLayerNPE$$Lambda$lambda$main$1$1)));
}

void SetLayerNPE::lambda$main$1() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JInternalFrame, jif, $new($JInternalFrame, "My Frame"_s));
		$$new($JDesktopPane)->add(static_cast<$Component*>(jif));
		jif->setLayer(($Integer*)nullptr);
		$throwNew($AssertionError, $of("expected NPE was not thrown"_s));
	} catch ($NullPointerException&) {
		$catch();
	}
}

void SetLayerNPE::lambda$main$0() {
	try {
		$$new($JInternalFrame, "My Frame"_s)->setLayer(($Integer*)nullptr);
		$throwNew($AssertionError, $of("expected NPE was not thrown"_s));
	} catch ($NullPointerException&) {
		$catch();
	}
}

SetLayerNPE::SetLayerNPE() {
}

$Class* SetLayerNPE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SetLayerNPE$$Lambda$lambda$main$0::classInfo$.name)) {
			return SetLayerNPE$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(SetLayerNPE$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return SetLayerNPE$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(SetLayerNPE, name, initialize, &_SetLayerNPE_ClassInfo_, allocate$SetLayerNPE);
	return class$;
}

$Class* SetLayerNPE::class$ = nullptr;