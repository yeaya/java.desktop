#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $JPEGImageWriter$CallBackLock$State = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter$CallBackLock$State;
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

$FieldInfo _JPEGImageWriter$CallBackLock_FieldInfo_[] = {
	{"lockState", "Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter$CallBackLock$State;", nullptr, $PRIVATE, $field(JPEGImageWriter$CallBackLock, lockState)},
	{}
};

$MethodInfo _JPEGImageWriter$CallBackLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JPEGImageWriter$CallBackLock::*)()>(&JPEGImageWriter$CallBackLock::init$))},
	{"check", "()V", nullptr, 0},
	{"lock", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter$CallBackLock::*)()>(&JPEGImageWriter$CallBackLock::lock))},
	{"unlock", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageWriter$CallBackLock::*)()>(&JPEGImageWriter$CallBackLock::unlock))},
	{}
};

$InnerClassInfo _JPEGImageWriter$CallBackLock_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageWriter", "CallBackLock", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JPEGImageWriter$CallBackLock_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter$CallBackLock",
	"java.lang.Object",
	nullptr,
	_JPEGImageWriter$CallBackLock_FieldInfo_,
	_JPEGImageWriter$CallBackLock_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageWriter$CallBackLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageWriter"
};

$Object* allocate$JPEGImageWriter$CallBackLock($Class* clazz) {
	return $of($alloc(JPEGImageWriter$CallBackLock));
}

void JPEGImageWriter$CallBackLock::init$() {
	$init($JPEGImageWriter$CallBackLock$State);
	$set(this, lockState, $JPEGImageWriter$CallBackLock$State::Unlocked);
}

void JPEGImageWriter$CallBackLock::check() {
	$init($JPEGImageWriter$CallBackLock$State);
	if (this->lockState != $JPEGImageWriter$CallBackLock$State::Unlocked) {
		$throwNew($IllegalStateException, "Access to the writer is not allowed"_s);
	}
}

void JPEGImageWriter$CallBackLock::lock() {
	$init($JPEGImageWriter$CallBackLock$State);
	$set(this, lockState, $JPEGImageWriter$CallBackLock$State::Locked);
}

void JPEGImageWriter$CallBackLock::unlock() {
	$init($JPEGImageWriter$CallBackLock$State);
	$set(this, lockState, $JPEGImageWriter$CallBackLock$State::Unlocked);
}

JPEGImageWriter$CallBackLock::JPEGImageWriter$CallBackLock() {
}

$Class* JPEGImageWriter$CallBackLock::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriter$CallBackLock, name, initialize, &_JPEGImageWriter$CallBackLock_ClassInfo_, allocate$JPEGImageWriter$CallBackLock);
	return class$;
}

$Class* JPEGImageWriter$CallBackLock::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com