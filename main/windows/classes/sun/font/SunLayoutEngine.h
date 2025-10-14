#ifndef _sun_font_SunLayoutEngine_h_
#define _sun_font_SunLayoutEngine_h_
//$ class sun.font.SunLayoutEngine
//$ extends sun.font.GlyphLayout$LayoutEngine
//$ implements sun.font.GlyphLayout$LayoutEngineFactory

#include <java/lang/Array.h>
#include <sun/font/GlyphLayout$LayoutEngine.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>

namespace java {
	namespace awt {
		namespace geom {
			class Point2D$Float;
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
namespace java {
	namespace util {
		class WeakHashMap;
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class FontStrike;
		class FontStrikeDesc;
		class GlyphLayout$GVData;
		class GlyphLayout$LayoutEngineKey;
		class TextRecord;
	}
}

namespace sun {
	namespace font {

class SunLayoutEngine : public ::sun::font::GlyphLayout$LayoutEngine, public ::sun::font::GlyphLayout$LayoutEngineFactory {
	$class(SunLayoutEngine, 0, ::sun::font::GlyphLayout$LayoutEngine, ::sun::font::GlyphLayout$LayoutEngineFactory)
public:
	SunLayoutEngine();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::sun::font::GlyphLayout$LayoutEngineKey* key);
	static int64_t createFace(::sun::font::Font2D* font, int64_t platformNativeFontPtr);
	static void disposeFace(int64_t facePtr);
	virtual ::sun::font::GlyphLayout$LayoutEngine* getEngine(::sun::font::Font2D* font, int32_t script, int32_t lang) override;
	virtual ::sun::font::GlyphLayout$LayoutEngine* getEngine(::sun::font::GlyphLayout$LayoutEngineKey* key) override;
	int64_t getFacePtr(::sun::font::Font2D* font2D);
	static ::sun::font::GlyphLayout$LayoutEngineFactory* instance();
	virtual void layout(::sun::font::FontStrikeDesc* desc, $floats* mat, float ptSize, int32_t gmask, int32_t baseIndex, ::sun::font::TextRecord* tr, int32_t typo_flags, ::java::awt::geom::Point2D$Float* pt, ::sun::font::GlyphLayout$GVData* data) override;
	static bool shape(::sun::font::Font2D* font, ::sun::font::FontStrike* strike, float ptSize, $floats* mat, int64_t pFace, $chars* chars, ::sun::font::GlyphLayout$GVData* data, int32_t script, int32_t offset, int32_t limit, int32_t baseIndex, ::java::awt::geom::Point2D$Float* pt, int32_t typo_flags, int32_t slot);
	virtual $String* toString() override;
	::sun::font::GlyphLayout$LayoutEngineKey* key = nullptr;
	static ::sun::font::GlyphLayout$LayoutEngineFactory* instance$;
	::java::lang::ref::SoftReference* cacheref = nullptr;
	static ::java::util::WeakHashMap* facePtr;
};

	} // font
} // sun

#endif // _sun_font_SunLayoutEngine_h_