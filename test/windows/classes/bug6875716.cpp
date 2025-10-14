#include <bug6875716.h>

#include <bug6875716$1.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $bug6875716$1 = ::bug6875716$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _bug6875716_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6875716::*)()>(&bug6875716::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6875716::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6875716_InnerClassesInfo_[] = {
	{"bug6875716$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6875716_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6875716",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6875716_MethodInfo_,
	nullptr,
	nullptr,
	_bug6875716_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6875716$1"
};

$Object* allocate$bug6875716($Class* clazz) {
	return $of($alloc(bug6875716));
}

void bug6875716::init$() {
}

void bug6875716::main($StringArray* args) {
	$var($JLayer, layer, $new($JLayer, $$new($bug6875716$1)));
	layer->setGlassPane(nullptr);
	try {
		layer->remove(($Component*)nullptr);
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		return;
	}
	$throwNew($RuntimeException, "Test failed"_s);
}

bug6875716::bug6875716() {
}

$Class* bug6875716::load$($String* name, bool initialize) {
	$loadClass(bug6875716, name, initialize, &_bug6875716_ClassInfo_, allocate$bug6875716);
	return class$;
}

$Class* bug6875716::class$ = nullptr;