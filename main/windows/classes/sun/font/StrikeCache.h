#ifndef _sun_font_StrikeCache_h_
#define _sun_font_StrikeCache_h_
//$ class sun.font.StrikeCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MINSTRIKES")
#undef MINSTRIKES

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace font {
		class FontStrike;
		class FontStrikeDisposer;
		class GlyphDisposedListener;
	}
}

namespace sun {
	namespace font {

class StrikeCache : public ::java::lang::Object {
	$class(StrikeCache, 0, ::java::lang::Object)
public:
	StrikeCache();
	void init$();
	static void addGlyphDisposedListener(::sun::font::GlyphDisposedListener* listener);
	static void disposeStrike(::sun::font::FontStrikeDisposer* disposer);
	static void doDispose(::sun::font::FontStrikeDisposer* disposer);
	static void freeCachedIntMemory($ints* glyphPtrs, int64_t pContext);
	static void freeCachedLongMemory($longs* glyphPtrs, int64_t pContext);
	static void freeIntMemory($ints* glyphPtrs, int64_t pContext);
	static void freeIntPointer(int32_t ptr);
	static void freeLongMemory($longs* glyphPtrs, int64_t pContext);
	static void freeLongPointer(int64_t ptr);
	static void getGlyphCacheDescription($longs* infoArray);
	static ::java::lang::ref::Reference* getStrikeRef(::sun::font::FontStrike* strike);
	static ::java::lang::ref::Reference* getStrikeRef(::sun::font::FontStrike* strike, bool weak);
	static bool longAddresses();
	static void notifyDisposeListeners(::java::util::ArrayList* glyphs);
	static void refStrike(::sun::font::FontStrike* strike);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static ::java::lang::ref::ReferenceQueue* refQueue;
	static ::java::util::ArrayList* disposeListeners;
	static int32_t MINSTRIKES;
	static int32_t recentStrikeIndex;
	static $Array<::sun::font::FontStrike>* recentStrikes;
	static bool cacheRefTypeWeak;
	static int32_t nativeAddressSize;
	static int32_t glyphInfoSize;
	static int32_t xAdvanceOffset;
	static int32_t yAdvanceOffset;
	static int32_t boundsOffset;
	static int32_t widthOffset;
	static int32_t heightOffset;
	static int32_t rowBytesOffset;
	static int32_t topLeftXOffset;
	static int32_t topLeftYOffset;
	static int32_t pixelDataOffset;
	static int32_t cacheCellOffset;
	static int32_t managedOffset;
	static int64_t invisibleGlyphPtr;
};

	} // font
} // sun

#pragma pop_macro("MINSTRIKES")

#endif // _sun_font_StrikeCache_h_