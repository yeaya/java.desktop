#ifndef _sun_swing_SwingUtilities2$LSBCacheEntry_h_
#define _sun_swing_SwingUtilities2$LSBCacheEntry_h_
//$ class sun.swing.SwingUtilities2$LSBCacheEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Byte.h>

#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("UNSET")
#undef UNSET

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
		}
	}
}

namespace sun {
	namespace swing {

class SwingUtilities2$LSBCacheEntry : public ::java::lang::Object {
	$class(SwingUtilities2$LSBCacheEntry, 0, ::java::lang::Object)
public:
	SwingUtilities2$LSBCacheEntry();
	void init$(::java::awt::font::FontRenderContext* frc, ::java::awt::Font* font);
	virtual bool equals(Object$* entry) override;
	virtual int32_t getLeftSideBearing(char16_t aChar);
	virtual int32_t hashCode() override;
	virtual void reset(::java::awt::font::FontRenderContext* frc, ::java::awt::Font* font);
	static bool $assertionsDisabled;
	static const int8_t UNSET = ::java::lang::Byte::MAX_VALUE;
	static $chars* oneChar;
	$bytes* lsbCache = nullptr;
	::java::awt::Font* font = nullptr;
	::java::awt::font::FontRenderContext* frc = nullptr;
};

	} // swing
} // sun

#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("UNSET")

#endif // _sun_swing_SwingUtilities2$LSBCacheEntry_h_