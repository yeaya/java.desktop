#include <sun/java2d/BackBufferCapsProvider.h>

#include <java/awt/BufferCapabilities.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$MethodInfo _BackBufferCapsProvider_MethodInfo_[] = {
	{"getBackBufferCaps", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BackBufferCapsProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.BackBufferCapsProvider",
	nullptr,
	nullptr,
	nullptr,
	_BackBufferCapsProvider_MethodInfo_
};

$Object* allocate$BackBufferCapsProvider($Class* clazz) {
	return $of($alloc(BackBufferCapsProvider));
}

$Class* BackBufferCapsProvider::load$($String* name, bool initialize) {
	$loadClass(BackBufferCapsProvider, name, initialize, &_BackBufferCapsProvider_ClassInfo_, allocate$BackBufferCapsProvider);
	return class$;
}

$Class* BackBufferCapsProvider::class$ = nullptr;

	} // java2d
} // sun