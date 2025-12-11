#include <sun/awt/DisplayChangedListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _DisplayChangedListener_MethodInfo_[] = {
	{"displayChanged", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"paletteChanged", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DisplayChangedListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.DisplayChangedListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_DisplayChangedListener_MethodInfo_
};

$Object* allocate$DisplayChangedListener($Class* clazz) {
	return $of($alloc(DisplayChangedListener));
}

$Class* DisplayChangedListener::load$($String* name, bool initialize) {
	$loadClass(DisplayChangedListener, name, initialize, &_DisplayChangedListener_ClassInfo_, allocate$DisplayChangedListener);
	return class$;
}

$Class* DisplayChangedListener::class$ = nullptr;

	} // awt
} // sun