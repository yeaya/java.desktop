#ifndef _sun_awt_X11_XMenuBarPeer$MappingData_h_
#define _sun_awt_X11_XMenuBarPeer$MappingData_h_
//$ class sun.awt.X11.XMenuBarPeer$MappingData
//$ extends sun.awt.X11.XBaseMenuWindow$MappingData

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XMenuItemPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMenuBarPeer$MappingData : public ::sun::awt::X11::XBaseMenuWindow$MappingData {
	$class(XMenuBarPeer$MappingData, $NO_CLASS_INIT, ::sun::awt::X11::XBaseMenuWindow$MappingData)
public:
	XMenuBarPeer$MappingData();
	void init$($Array<::sun::awt::X11::XMenuItemPeer>* items, int32_t desiredHeight);
	void init$();
	virtual int32_t getDesiredHeight();
	int32_t desiredHeight = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMenuBarPeer$MappingData_h_