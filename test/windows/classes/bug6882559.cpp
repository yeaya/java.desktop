#include <bug6882559.h>

#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6882559$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6882559$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6882559::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6882559$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6882559$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6882559$$Lambda$lambda$main$0::*)()>(&bug6882559$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6882559$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6882559$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6882559$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6882559$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6882559$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _bug6882559_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6882559::*)()>(&bug6882559::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6882559::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6882559::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6882559_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6882559",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6882559_MethodInfo_
};

$Object* allocate$bug6882559($Class* clazz) {
	return $of($alloc(bug6882559));
}

void bug6882559::init$() {
}

void bug6882559::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6882559$$Lambda$lambda$main$0)));
}

void bug6882559::lambda$main$0() {
	$($Thread::currentThread())->setContextClassLoader(nullptr);
	$new($JEditorPane, "text/plain"_s, ""_s);
}

bug6882559::bug6882559() {
}

$Class* bug6882559::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6882559$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6882559$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6882559, name, initialize, &_bug6882559_ClassInfo_, allocate$bug6882559);
	return class$;
}

$Class* bug6882559::class$ = nullptr;