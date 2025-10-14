#ifndef _sun_font_StandardGlyphVector$GlyphTransformInfo_h_
#define _sun_font_StandardGlyphVector$GlyphTransformInfo_h_
//$ class sun.font.StandardGlyphVector$GlyphTransformInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}
namespace sun {
	namespace font {
		class StandardGlyphVector;
		class StandardGlyphVector$GlyphStrike;
	}
}

namespace sun {
	namespace font {

class StandardGlyphVector$GlyphTransformInfo : public ::java::lang::Object {
	$class(StandardGlyphVector$GlyphTransformInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StandardGlyphVector$GlyphTransformInfo();
	using ::java::lang::Object::equals;
	void init$(::sun::font::StandardGlyphVector* sgv);
	void init$(::sun::font::StandardGlyphVector* sgv, ::sun::font::StandardGlyphVector$GlyphTransformInfo* rhs);
	bool equals(::sun::font::StandardGlyphVector$GlyphTransformInfo* rhs);
	$Array<::sun::font::StandardGlyphVector$GlyphStrike>* getAllStrikes();
	::java::awt::geom::AffineTransform* getGlyphTransform(int32_t ix);
	::java::awt::Rectangle* getGlyphsPixelBounds(::java::awt::geom::AffineTransform* tx, float x, float y, int32_t start, int32_t count);
	::sun::font::StandardGlyphVector$GlyphStrike* getStrike(int32_t glyphIndex);
	$Array<::sun::font::StandardGlyphVector$GlyphStrike>* getStrikeArray();
	::sun::font::StandardGlyphVector$GlyphStrike* getStrikeAtIndex($Array<::sun::font::StandardGlyphVector$GlyphStrike>* strikes, int32_t strikeIndex);
	void setGlyphTransform(int32_t glyphIndex, ::java::awt::geom::AffineTransform* newTX);
	$Object* setupGlyphImages($longs* images, $floats* positions, ::java::awt::geom::AffineTransform* tx);
	int32_t transformCount();
	::sun::font::StandardGlyphVector* sgv = nullptr;
	$ints* indices = nullptr;
	$doubles* transforms = nullptr;
	::java::lang::ref::SoftReference* strikesRef = nullptr;
	bool haveAllStrikes = false;
};

	} // font
} // sun

#endif // _sun_font_StandardGlyphVector$GlyphTransformInfo_h_