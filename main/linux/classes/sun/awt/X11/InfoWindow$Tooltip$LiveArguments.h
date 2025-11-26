#ifndef _sun_awt_X11_InfoWindow$Tooltip$LiveArguments_h_
#define _sun_awt_X11_InfoWindow$Tooltip$LiveArguments_h_
//$ interface sun.awt.X11.InfoWindow$Tooltip$LiveArguments
//$ extends sun.awt.X11.InfoWindow$LiveArguments

#include <sun/awt/X11/InfoWindow$LiveArguments.h>

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Tooltip$LiveArguments : public ::sun::awt::X11::InfoWindow$LiveArguments {
	$interface(InfoWindow$Tooltip$LiveArguments, $NO_CLASS_INIT, ::sun::awt::X11::InfoWindow$LiveArguments)
public:
	virtual $String* getTooltipString() {return nullptr;}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Tooltip$LiveArguments_h_