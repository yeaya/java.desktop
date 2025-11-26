#include <sun/awt/X11/InfoWindow$Balloon$LiveArguments.h>

#include <sun/awt/X11/InfoWindow$Balloon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$Balloon = ::sun::awt::X11::InfoWindow$Balloon;
using $InfoWindow$LiveArguments = ::sun::awt::X11::InfoWindow$LiveArguments;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _InfoWindow$Balloon$LiveArguments_MethodInfo_[] = {
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _InfoWindow$Balloon$LiveArguments_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Balloon$LiveArguments", "sun.awt.X11.InfoWindow$Balloon", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InfoWindow$Balloon$LiveArguments_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.InfoWindow$Balloon$LiveArguments",
	nullptr,
	"sun.awt.X11.InfoWindow$LiveArguments",
	nullptr,
	_InfoWindow$Balloon$LiveArguments_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$Balloon$LiveArguments_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Balloon$LiveArguments($Class* clazz) {
	return $of($alloc(InfoWindow$Balloon$LiveArguments));
}

$Class* InfoWindow$Balloon$LiveArguments::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Balloon$LiveArguments, name, initialize, &_InfoWindow$Balloon$LiveArguments_ClassInfo_, allocate$InfoWindow$Balloon$LiveArguments);
	return class$;
}

$Class* InfoWindow$Balloon$LiveArguments::class$ = nullptr;

		} // X11
	} // awt
} // sun