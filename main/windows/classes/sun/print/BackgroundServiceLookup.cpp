#include <sun/print/BackgroundServiceLookup.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/print/BackgroundLookupListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BackgroundLookupListener = ::sun::print::BackgroundLookupListener;

namespace sun {
	namespace print {

$MethodInfo _BackgroundServiceLookup_MethodInfo_[] = {
	{"getServicesInbackground", "(Lsun/print/BackgroundLookupListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BackgroundServiceLookup_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.print.BackgroundServiceLookup",
	nullptr,
	nullptr,
	nullptr,
	_BackgroundServiceLookup_MethodInfo_
};

$Object* allocate$BackgroundServiceLookup($Class* clazz) {
	return $of($alloc(BackgroundServiceLookup));
}

$Class* BackgroundServiceLookup::load$($String* name, bool initialize) {
	$loadClass(BackgroundServiceLookup, name, initialize, &_BackgroundServiceLookup_ClassInfo_, allocate$BackgroundServiceLookup);
	return class$;
}

$Class* BackgroundServiceLookup::class$ = nullptr;

	} // print
} // sun