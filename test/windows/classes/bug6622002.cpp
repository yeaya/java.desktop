#include <bug6622002.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;

$MethodInfo _bug6622002_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6622002::*)()>(&bug6622002::init$))},
	{"createPrivateValue", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)()>(&bug6622002::createPrivateValue))},
	{"createPublicValue", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)()>(&bug6622002::createPublicValue))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6622002::main))},
	{}
};

$ClassInfo _bug6622002_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6622002",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6622002_MethodInfo_
};

$Object* allocate$bug6622002($Class* clazz) {
	return $of($alloc(bug6622002));
}

void bug6622002::init$() {
}

void bug6622002::main($StringArray* args) {
	$load(bug6622002);
	$beforeCallerSensitive();
	if (createPrivateValue() == nullptr) {
		$throwNew($RuntimeException, "The private value unexpectedly wasn\'t created"_s);
	}
	if (createPublicValue() == nullptr) {
		$throwNew($RuntimeException, "The public value unexpectedly wasn\'t created"_s);
	}
	$System::setSecurityManager($$new($SecurityManager));
	if (createPrivateValue() != nullptr) {
		$throwNew($RuntimeException, "The private value was unexpectedly created"_s);
	}
	if (createPublicValue() == nullptr) {
		$throwNew($RuntimeException, "The public value unexpectedly wasn\'t created"_s);
	}
}

$Object* bug6622002::createPrivateValue() {
	return $of($$new($UIDefaults$ProxyLazyValue, "javax.swing.MultiUIDefaults"_s)->createValue(nullptr));
}

$Object* bug6622002::createPublicValue() {
	return $of($$new($UIDefaults$ProxyLazyValue, "javax.swing.UIDefaults"_s)->createValue(nullptr));
}

bug6622002::bug6622002() {
}

$Class* bug6622002::load$($String* name, bool initialize) {
	$loadClass(bug6622002, name, initialize, &_bug6622002_ClassInfo_, allocate$bug6622002);
	return class$;
}

$Class* bug6622002::class$ = nullptr;