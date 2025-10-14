#include <sun/swing/InteropProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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