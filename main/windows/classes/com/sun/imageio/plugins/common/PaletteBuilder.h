#ifndef _com_sun_imageio_plugins_common_PaletteBuilder_h_
#define _com_sun_imageio_plugins_common_PaletteBuilder_h_
//$ class com.sun.imageio.plugins.common.PaletteBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAXLEVEL")
#undef MAXLEVEL

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {
					class PaletteBuilder$ColorNode;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class IndexColorModel;
			class Raster;
			class RenderedImage;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class PaletteBuilder : public ::java::lang::Object {
	$class(PaletteBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PaletteBuilder();
	void init$(::java::awt::image::RenderedImage* src);
	void init$(::java::awt::image::RenderedImage* src, int32_t size);
	virtual void buildPalette();
	static bool canCreatePalette(::javax::imageio::ImageTypeSpecifier* type);
	static bool canCreatePalette(::java::awt::image::RenderedImage* image);
	static ::java::awt::image::IndexColorModel* createIndexColorModel(::java::awt::image::RenderedImage* img);
	static ::java::awt::image::RenderedImage* createIndexedImage(::java::awt::image::RenderedImage* src);
	virtual int32_t findColorIndex(::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* aNode, ::java::awt::Color* aColor);
	virtual int32_t findPaletteEntry(::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* aNode, int32_t index, $bytes* red, $bytes* green, $bytes* blue);
	virtual ::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* freeTree(::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* aNode);
	virtual int32_t getBranchIndex(::java::awt::Color* aColor, int32_t aLevel);
	virtual ::java::awt::image::IndexColorModel* getIndexColorModel();
	virtual ::java::awt::image::RenderedImage* getIndexedImage();
	::java::awt::Color* getSrcColor(int32_t x, int32_t y);
	virtual ::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* insertNode(::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* aNode, ::java::awt::Color* aColor, int32_t aLevel);
	virtual void reduceTree();
	static const int32_t MAXLEVEL = 8;
	::java::awt::image::RenderedImage* src = nullptr;
	::java::awt::image::ColorModel* srcColorModel = nullptr;
	::java::awt::image::Raster* srcRaster = nullptr;
	int32_t requiredSize = 0;
	::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* root = nullptr;
	int32_t numNodes = 0;
	int32_t maxNodes = 0;
	int32_t currLevel = 0;
	int32_t currSize = 0;
	$Array<::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode>* reduceList = nullptr;
	$Array<::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode>* palette = nullptr;
	int32_t transparency = 0;
	::com::sun::imageio::plugins::common::PaletteBuilder$ColorNode* transColor = nullptr;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("MAXLEVEL")

#endif // _com_sun_imageio_plugins_common_PaletteBuilder_h_