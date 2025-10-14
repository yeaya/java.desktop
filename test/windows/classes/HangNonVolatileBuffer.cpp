#include <HangNonVolatileBuffer.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class HangNonVolatileBuffer$$Lambda$lambda$main$0 : public $Runnable {
	$class(HangNonVolatileBuffer$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HangNonVolatileBuffer::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HangNonVolatileBuffer$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HangNonVolatileBuffer$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HangNonVolatileBuffer$$Lambda$lambda$main$0::*)()>(&HangNonVolatileBuffer$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HangNonVolatileBuffer$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HangNonVolatileBuffer$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(HangNonVolatileBuffer$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$0::class$ = nullptr;

class HangNonVolatileBuffer$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(HangNonVolatileBuffer$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HangNonVolatileBuffer::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HangNonVolatileBuffer$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HangNonVolatileBuffer$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HangNonVolatileBuffer$$Lambda$lambda$main$1$1::*)()>(&HangNonVolatileBuffer$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HangNonVolatileBuffer$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"HangNonVolatileBuffer$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(HangNonVolatileBuffer$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$1$1::class$ = nullptr;

class HangNonVolatileBuffer$$Lambda$dispose$2 : public $Runnable {
	$class(HangNonVolatileBuffer$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HangNonVolatileBuffer$$Lambda$dispose$2>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HangNonVolatileBuffer$$Lambda$dispose$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HangNonVolatileBuffer$$Lambda$dispose$2, inst$)},
	{}
};
$MethodInfo HangNonVolatileBuffer$$Lambda$dispose$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(HangNonVolatileBuffer$$Lambda$dispose$2::*)($Window*)>(&HangNonVolatileBuffer$$Lambda$dispose$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HangNonVolatileBuffer$$Lambda$dispose$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"HangNonVolatileBuffer$$Lambda$dispose$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* HangNonVolatileBuffer$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$loadClass(HangNonVolatileBuffer$$Lambda$dispose$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HangNonVolatileBuffer$$Lambda$dispose$2::class$ = nullptr;

$FieldInfo _HangNonVolatileBuffer_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HangNonVolatileBuffer, f)},
	{}
};

$MethodInfo _HangNonVolatileBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HangNonVolatileBuffer::*)()>(&HangNonVolatileBuffer::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HangNonVolatileBuffer::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HangNonVolatileBuffer::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HangNonVolatileBuffer::main)), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{}
};

$ClassInfo _HangNonVolatileBuffer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"HangNonVolatileBuffer",
	"java.lang.Object",
	nullptr,
	_HangNonVolatileBuffer_FieldInfo_,
	_HangNonVolatileBuffer_MethodInfo_
};

$Object* allocate$HangNonVolatileBuffer($Class* clazz) {
	return $of($alloc(HangNonVolatileBuffer));
}

$JFrame* HangNonVolatileBuffer::f = nullptr;

void HangNonVolatileBuffer::init$() {
}

void HangNonVolatileBuffer::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HangNonVolatileBuffer$$Lambda$lambda$main$0)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HangNonVolatileBuffer$$Lambda$lambda$main$1$1)));
	$Thread::sleep(1000);
	$init(HangNonVolatileBuffer);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HangNonVolatileBuffer$$Lambda$dispose$2, static_cast<$JFrame*>($nc(HangNonVolatileBuffer::f)))));
}

void HangNonVolatileBuffer::lambda$main$1() {
}

void HangNonVolatileBuffer::lambda$main$0() {
	$init(HangNonVolatileBuffer);
	$assignStatic(HangNonVolatileBuffer::f, $new($JFrame, "JFrame"_s));
	$nc(HangNonVolatileBuffer::f)->setSize(300, 300);
	$nc(HangNonVolatileBuffer::f)->setLocationRelativeTo(nullptr);
	$nc(HangNonVolatileBuffer::f)->setVisible(true);
}

HangNonVolatileBuffer::HangNonVolatileBuffer() {
}

$Class* HangNonVolatileBuffer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HangNonVolatileBuffer$$Lambda$lambda$main$0::classInfo$.name)) {
			return HangNonVolatileBuffer$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(HangNonVolatileBuffer$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return HangNonVolatileBuffer$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(HangNonVolatileBuffer$$Lambda$dispose$2::classInfo$.name)) {
			return HangNonVolatileBuffer$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$loadClass(HangNonVolatileBuffer, name, initialize, &_HangNonVolatileBuffer_ClassInfo_, allocate$HangNonVolatileBuffer);
	return class$;
}

$Class* HangNonVolatileBuffer::class$ = nullptr;