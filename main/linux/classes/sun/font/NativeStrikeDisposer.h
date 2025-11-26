#ifndef _sun_font_NativeStrikeDisposer_h_
#define _sun_font_NativeStrikeDisposer_h_
//$ class sun.font.NativeStrikeDisposer
//$ extends sun.font.FontStrikeDisposer

#include <java/lang/Array.h>
#include <sun/font/FontStrikeDisposer.h>

namespace sun {
	namespace font {
		class Font2D;
		class FontStrikeDesc;
	}
}

namespace sun {
	namespace font {

class NativeStrikeDisposer : public ::sun::font::FontStrikeDisposer {
	$class(NativeStrikeDisposer, $NO_CLASS_INIT, ::sun::font::FontStrikeDisposer)
public:
	NativeStrikeDisposer();
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc, int64_t pContext, $ints* images);
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc, int64_t pContext, $longs* images);
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc, int64_t pContext);
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc);
	virtual void dispose() override;
	void freeNativeScalerContext(int64_t pContext);
	int64_t pNativeScalerContext = 0;
};

	} // font
} // sun

#endif // _sun_font_NativeStrikeDisposer_h_