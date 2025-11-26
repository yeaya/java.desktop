#ifndef _sun_awt_X11_XMenuWindow$MappingData_h_
#define _sun_awt_X11_XMenuWindow$MappingData_h_
//$ class sun.awt.X11.XMenuWindow$MappingData
//$ extends sun.awt.X11.XBaseMenuWindow$MappingData

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseMenuWindow$MappingData.h>

namespace java {
	namespace awt {
		class Dimension;
		class Rectangle;
	}
}
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

class XMenuWindow$MappingData : public ::sun::awt::X11::XBaseMenuWindow$MappingData {
	$class(XMenuWindow$MappingData, $NO_CLASS_INIT, ::sun::awt::X11::XBaseMenuWindow$MappingData)
public:
	XMenuWindow$MappingData();
	void init$($Array<::sun::awt::X11::XMenuItemPeer>* items, ::java::awt::Rectangle* captionRect, ::java::awt::Dimension* desiredSize, int32_t leftMarkWidth, int32_t shortcutOrigin, int32_t rightMarkOrigin);
	void init$();
	virtual ::java::awt::Rectangle* getCaptionRect();
	virtual ::java::awt::Dimension* getDesiredSize();
	virtual int32_t getLeftMarkWidth();
	virtual int32_t getRightMarkOrigin();
	virtual int32_t getShortcutOrigin();
	::java::awt::Rectangle* captionRect = nullptr;
	::java::awt::Dimension* desiredSize = nullptr;
	int32_t leftMarkWidth = 0;
	int32_t shortcutOrigin = 0;
	int32_t rightMarkOrigin = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMenuWindow$MappingData_h_