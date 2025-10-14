#include <sun/print/BackgroundLookupListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/PrintService.h>
#include <jcpp.h>

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

$MethodInfo _BackgroundLookupListener_MethodInfo_[] = {
	{"notifyServices", "([Ljavax/print/PrintService;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _BackgroundLookupListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.print.BackgroundLookupListener",
	nullptr,
	nullptr,
	nullptr,
	_BackgroundLookupListener_MethodInfo_
};

$Object* allocate$BackgroundLookupListener($Class* clazz) {
	return $of($alloc(BackgroundLookupListener));
}

$Class* BackgroundLookupListener::load$($String* name, bool initialize) {
	$loadClass(BackgroundLookupListener, name, initialize, &_BackgroundLookupListener_ClassInfo_, allocate$BackgroundLookupListener);
	return class$;
}

$Class* BackgroundLookupListener::class$ = nullptr;

	} // print
} // sun