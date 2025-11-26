#include <sun/java2d/pipe/hw/BufferedContextProvider.h>

#include <sun/java2d/pipe/BufferedContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$MethodInfo _BufferedContextProvider_MethodInfo_[] = {
	{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BufferedContextProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.hw.BufferedContextProvider",
	nullptr,
	nullptr,
	nullptr,
	_BufferedContextProvider_MethodInfo_
};

$Object* allocate$BufferedContextProvider($Class* clazz) {
	return $of($alloc(BufferedContextProvider));
}

$Class* BufferedContextProvider::load$($String* name, bool initialize) {
	$loadClass(BufferedContextProvider, name, initialize, &_BufferedContextProvider_ClassInfo_, allocate$BufferedContextProvider);
	return class$;
}

$Class* BufferedContextProvider::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun