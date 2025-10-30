#include <bug4300666.h>

#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $EventQueue = ::java::awt::EventQueue;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Hashtable = ::java::util::Hashtable;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4300666$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4300666$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4300666::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4300666$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4300666$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4300666$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo bug4300666$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4300666$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&bug4300666$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4300666$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4300666$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4300666$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4300666$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4300666$$Lambda$lambda$main$0::class$ = nullptr;

class bug4300666$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4300666$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4300666::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4300666$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4300666$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4300666$$Lambda$lambda$main$1$1::*)()>(&bug4300666$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4300666$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4300666$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4300666$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4300666$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4300666$$Lambda$lambda$main$1$1::class$ = nullptr;

$MethodInfo _bug4300666_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4300666::*)()>(&bug4300666::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4300666::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4300666::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4300666::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4300666::setLookAndFeel))},
	{}
};

$ClassInfo _bug4300666_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"bug4300666",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4300666_MethodInfo_
};

$Object* allocate$bug4300666($Class* clazz) {
	return $of($alloc(bug4300666));
}

void bug4300666::init$() {
}

void bug4300666::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug4300666$$Lambda$lambda$main$0, laf)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug4300666$$Lambda$lambda$main$1$1)));
			}
		}
	}
}

void bug4300666::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4300666::lambda$main$1() {
	$var($UIDefaults, d, $UIManager::getDefaults());
	$nc(d)->toString();
}

void bug4300666::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4300666::bug4300666() {
}

$Class* bug4300666::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4300666$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4300666$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4300666$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug4300666$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(bug4300666, name, initialize, &_bug4300666_ClassInfo_, allocate$bug4300666);
	return class$;
}

$Class* bug4300666::class$ = nullptr;