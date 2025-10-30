#include <sun/swing/InteropProvider.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace swing {

$ClassInfo _InteropProvider_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.InteropProvider"
};

$Object* allocate$InteropProvider($Class* clazz) {
	return $of($alloc(InteropProvider));
}

$Class* InteropProvider::load$($String* name, bool initialize) {
	$loadClass(InteropProvider, name, initialize, &_InteropProvider_ClassInfo_, allocate$InteropProvider);
	return class$;
}

$Class* InteropProvider::class$ = nullptr;

	} // swing
} // sun