#ifndef _com_sun_java_swing_plaf_gtk_GTKStyle$GTKStockIconInfo_h_
#define _com_sun_java_swing_plaf_gtk_GTKStyle$GTKStockIconInfo_h_
//$ class com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIconInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ICON_SIZE_KEY")
#undef ICON_SIZE_KEY
#pragma push_macro("ICON_TYPE_MAP")
#undef ICON_TYPE_MAP

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKStyle$GTKStockIconInfo : public ::java::lang::Object {
	$class(GTKStyle$GTKStockIconInfo, 0, ::java::lang::Object)
public:
	GTKStyle$GTKStockIconInfo();
	void init$();
	static ::java::awt::Dimension* getIconSize(int32_t type);
	static $Array<::java::awt::Dimension>* getIconSizesMap();
	static int32_t getIconType($String* size);
	static void initIconTypeMap();
	static void setIconSize(int32_t type, int32_t w, int32_t h);
	static ::java::util::Map* ICON_TYPE_MAP;
	static $Object* ICON_SIZE_KEY;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ICON_SIZE_KEY")
#pragma pop_macro("ICON_TYPE_MAP")

#endif // _com_sun_java_swing_plaf_gtk_GTKStyle$GTKStockIconInfo_h_