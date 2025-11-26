#ifndef _sun_awt_X11_XBaseMenuWindow$MappingData_h_
#define _sun_awt_X11_XBaseMenuWindow$MappingData_h_
//$ class sun.awt.X11.XBaseMenuWindow$MappingData
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

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

class XBaseMenuWindow$MappingData : public ::java::lang::Cloneable {
	$class(XBaseMenuWindow$MappingData, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XBaseMenuWindow$MappingData();
	void init$($Array<::sun::awt::X11::XMenuItemPeer>* items);
	void init$();
	virtual $Object* clone() override;
	virtual $Array<::sun::awt::X11::XMenuItemPeer>* getItems();
	$Array<::sun::awt::X11::XMenuItemPeer>* items = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XBaseMenuWindow$MappingData_h_