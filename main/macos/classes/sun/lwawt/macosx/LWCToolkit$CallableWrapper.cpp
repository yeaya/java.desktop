#include <sun/lwawt/macosx/LWCToolkit$CallableWrapper.h>

#include <java/util/concurrent/Callable.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _LWCToolkit$CallableWrapper_FieldInfo_[] = {
	{"callable", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<TT;>;", $FINAL, $field(LWCToolkit$CallableWrapper, callable)},
	{"object", "Ljava/lang/Object;", "TT;", 0, $field(LWCToolkit$CallableWrapper, object)},
	{"e", "Ljava/lang/Exception;", nullptr, 0, $field(LWCToolkit$CallableWrapper, e)},
	{}
};

$MethodInfo _LWCToolkit$CallableWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<TT;>;)V", 0, $method(static_cast<void(LWCToolkit$CallableWrapper::*)($Callable*)>(&LWCToolkit$CallableWrapper::init$))},
	{"getResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(static_cast<$Object*(LWCToolkit$CallableWrapper::*)()>(&LWCToolkit$CallableWrapper::getResult)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWCToolkit$CallableWrapper_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$CallableWrapper", "sun.lwawt.macosx.LWCToolkit", "CallableWrapper", $STATIC | $FINAL},
	{}
};

$ClassInfo _LWCToolkit$CallableWrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit$CallableWrapper",
	"java.lang.Object",
	"java.lang.Runnable",
	_LWCToolkit$CallableWrapper_FieldInfo_,
	_LWCToolkit$CallableWrapper_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;",
	nullptr,
	_LWCToolkit$CallableWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit"
};

$Object* allocate$LWCToolkit$CallableWrapper($Class* clazz) {
	return $of($alloc(LWCToolkit$CallableWrapper));
}

void LWCToolkit$CallableWrapper::init$($Callable* callable) {
	$set(this, callable, callable);
}

void LWCToolkit$CallableWrapper::run() {
	try {
		$set(this, object, $nc(this->callable)->call());
	} catch ($Exception& e) {
		$set(this, e, e);
	}
}

$Object* LWCToolkit$CallableWrapper::getResult() {
	if (this->e != nullptr) {
		$throw(this->e);
	}
	return $of(this->object);
}

LWCToolkit$CallableWrapper::LWCToolkit$CallableWrapper() {
}

$Class* LWCToolkit$CallableWrapper::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$CallableWrapper, name, initialize, &_LWCToolkit$CallableWrapper_ClassInfo_, allocate$LWCToolkit$CallableWrapper);
	return class$;
}

$Class* LWCToolkit$CallableWrapper::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun