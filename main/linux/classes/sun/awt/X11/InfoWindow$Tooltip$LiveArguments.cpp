#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>

#include <sun/awt/X11/InfoWindow$Tooltip.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoWindow$LiveArguments = ::sun::awt::X11::InfoWindow$LiveArguments;
using $InfoWindow$Tooltip = ::sun::awt::X11::InfoWindow$Tooltip;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _InfoWindow$Tooltip$LiveArguments_MethodInfo_[] = {
	{"getTooltipString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _InfoWindow$Tooltip$LiveArguments_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$LiveArguments", "sun.awt.X11.InfoWindow$Tooltip", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InfoWindow$Tooltip$LiveArguments_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.InfoWindow$Tooltip$LiveArguments",
	nullptr,
	"sun.awt.X11.InfoWindow$LiveArguments",
	nullptr,
	_InfoWindow$Tooltip$LiveArguments_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$Tooltip$LiveArguments_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Tooltip$LiveArguments($Class* clazz) {
	return $of($alloc(InfoWindow$Tooltip$LiveArguments));
}

$Class* InfoWindow$Tooltip$LiveArguments::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Tooltip$LiveArguments, name, initialize, &_InfoWindow$Tooltip$LiveArguments_ClassInfo_, allocate$InfoWindow$Tooltip$LiveArguments);
	return class$;
}

$Class* InfoWindow$Tooltip$LiveArguments::class$ = nullptr;

		} // X11
	} // awt
} // sun