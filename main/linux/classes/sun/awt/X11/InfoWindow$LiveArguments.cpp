#include <sun/awt/X11/InfoWindow$LiveArguments.h>

#include <java/awt/Rectangle.h>
#include <sun/awt/X11/InfoWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _InfoWindow$LiveArguments_MethodInfo_[] = {
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDisposed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _InfoWindow$LiveArguments_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InfoWindow$LiveArguments_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.awt.X11.InfoWindow$LiveArguments",
	nullptr,
	nullptr,
	nullptr,
	_InfoWindow$LiveArguments_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$LiveArguments_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$LiveArguments($Class* clazz) {
	return $of($alloc(InfoWindow$LiveArguments));
}

$Class* InfoWindow$LiveArguments::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$LiveArguments, name, initialize, &_InfoWindow$LiveArguments_ClassInfo_, allocate$InfoWindow$LiveArguments);
	return class$;
}

$Class* InfoWindow$LiveArguments::class$ = nullptr;

		} // X11
	} // awt
} // sun