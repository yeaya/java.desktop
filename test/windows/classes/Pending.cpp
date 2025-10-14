#include <Pending.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _Pending_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Pending, passed)},
	{}
};

$MethodInfo _Pending_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Pending::*)()>(&Pending::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Pending::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Pending_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"Pending",
	"java.lang.Object",
	"java.lang.Runnable",
	_Pending_FieldInfo_,
	_Pending_MethodInfo_
};

$Object* allocate$Pending($Class* clazz) {
	return $of($alloc(Pending));
}

$volatile(bool) Pending::passed = false;

void Pending::init$() {
}

void Pending::main($StringArray* args) {
	$init(Pending);
	$SwingUtilities::invokeLater($$new(Pending));
	$Thread::sleep(10000);
	if (!Pending::passed) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void Pending::run() {
	$UIManager::put("foobar"_s, "Pending"_s);
	$UIManager::get("foobar"_s);
	Pending::passed = true;
}

Pending::Pending() {
}

$Class* Pending::load$($String* name, bool initialize) {
	$loadClass(Pending, name, initialize, &_Pending_ClassInfo_, allocate$Pending);
	return class$;
}

$Class* Pending::class$ = nullptr;