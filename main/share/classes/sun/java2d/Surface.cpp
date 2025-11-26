#include <sun/java2d/Surface.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace java2d {

$ClassInfo _Surface_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.Surface"
};

$Object* allocate$Surface($Class* clazz) {
	return $of($alloc(Surface));
}

$Class* Surface::load$($String* name, bool initialize) {
	$loadClass(Surface, name, initialize, &_Surface_ClassInfo_, allocate$Surface);
	return class$;
}

$Class* Surface::class$ = nullptr;

	} // java2d
} // sun