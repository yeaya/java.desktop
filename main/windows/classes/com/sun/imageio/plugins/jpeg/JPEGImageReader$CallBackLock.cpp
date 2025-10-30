#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageReader$CallBackLock$State = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageReader$CallBackLock_FieldInfo_[] = {
	{"lockState", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PRIVATE, $field(JPEGImageReader$CallBackLock, lockState)},
	{}
};

$MethodInfo _JPEGImageReader$CallBackLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JPEGImageReader$CallBackLock::*)()>(&JPEGImageReader$CallBackLock::init$))},
	{"check", "()V", nullptr, 0},
	{"lock", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader$CallBackLock::*)()>(&JPEGImageReader$CallBackLock::lock))},
	{"unlock", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageReader$CallBackLock::*)()>(&JPEGImageReader$CallBackLock::unlock))},
	{}
};

$InnerClassInfo _JPEGImageReader$CallBackLock_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "CallBackLock", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JPEGImageReader$CallBackLock_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock",
	"java.lang.Object",
	nullptr,
	_JPEGImageReader$CallBackLock_FieldInfo_,
	_JPEGImageReader$CallBackLock_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageReader$CallBackLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader"
};

$Object* allocate$JPEGImageReader$CallBackLock($Class* clazz) {
	return $of($alloc(JPEGImageReader$CallBackLock));
}

void JPEGImageReader$CallBackLock::init$() {
	$init($JPEGImageReader$CallBackLock$State);
	$set(this, lockState, $JPEGImageReader$CallBackLock$State::Unlocked);
}

void JPEGImageReader$CallBackLock::check() {
	$init($JPEGImageReader$CallBackLock$State);
	if (this->lockState != $JPEGImageReader$CallBackLock$State::Unlocked) {
		$throwNew($IllegalStateException, "Access to the reader is not allowed"_s);
	}
}

void JPEGImageReader$CallBackLock::lock() {
	$init($JPEGImageReader$CallBackLock$State);
	$set(this, lockState, $JPEGImageReader$CallBackLock$State::Locked);
}

void JPEGImageReader$CallBackLock::unlock() {
	$init($JPEGImageReader$CallBackLock$State);
	$set(this, lockState, $JPEGImageReader$CallBackLock$State::Unlocked);
}

JPEGImageReader$CallBackLock::JPEGImageReader$CallBackLock() {
}

$Class* JPEGImageReader$CallBackLock::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReader$CallBackLock, name, initialize, &_JPEGImageReader$CallBackLock_ClassInfo_, allocate$JPEGImageReader$CallBackLock);
	return class$;
}

$Class* JPEGImageReader$CallBackLock::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com