#include <HeadlessJApplet.h>

#include <java/awt/HeadlessException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <jcpp.h>

using $HeadlessException = ::java::awt::HeadlessException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JApplet = ::javax::swing::JApplet;

$MethodInfo _HeadlessJApplet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJApplet::*)()>(&HeadlessJApplet::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJApplet::main))},
	{}
};

$ClassInfo _HeadlessJApplet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJApplet",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJApplet_MethodInfo_
};

$Object* allocate$HeadlessJApplet($Class* clazz) {
	return $of($alloc(HeadlessJApplet));
}

void HeadlessJApplet::init$() {
}

void HeadlessJApplet::main($StringArray* args) {
	bool exceptions = false;
	try {
		$new($JApplet);
	} catch ($HeadlessException&) {
		$var($HeadlessException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "HeadlessException did not occur when expected"_s);
	}
}

HeadlessJApplet::HeadlessJApplet() {
}

$Class* HeadlessJApplet::load$($String* name, bool initialize) {
	$loadClass(HeadlessJApplet, name, initialize, &_HeadlessJApplet_ClassInfo_, allocate$HeadlessJApplet);
	return class$;
}

$Class* HeadlessJApplet::class$ = nullptr;