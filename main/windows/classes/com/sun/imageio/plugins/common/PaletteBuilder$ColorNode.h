#ifndef _com_sun_imageio_plugins_common_PaletteBuilder$ColorNode_h_
#define _com_sun_imageio_plugins_common_PaletteBuilder$ColorNode_h_
//$ class com.sun.imageio.plugins.common.PaletteBuilder$ColorNode
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {
					class PaletteBuilder;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class PaletteBuilder$ColorNode : public ::java::lang::Object {
	$class(PaletteBuilder$ColorNode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PaletteBuilder$ColorNode();
	void init$(::com::sun::imageio::plugins::common::PaletteBuilder* this$0);
	virtual int32_t getLeafChildCount();
	virtual int32_t getRGB();
	::com::sun::imageio::plugins::common::PaletteBuilder* this$0 = nullptr;
	bool isLeaf = false;
	int32_t childCount = 0;
	$Array<::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode>* children = nullptr;
	int32_t colorCount = 0;
	int64_t red = 0;
	int64_t blue = 0;
	int64_t green = 0;
	int32_t paletteIndex = 0;
	int32_t level = 0;
	::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* nextReducible = nullptr;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_PaletteBuilder$ColorNode_h_