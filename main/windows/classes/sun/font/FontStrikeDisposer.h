#ifndef _sun_font_FontStrikeDisposer_h_
#define _sun_font_FontStrikeDisposer_h_
//$ class sun.font.FontStrikeDisposer
//$ extends sun.java2d.DisposerRecord
//$ implements sun.java2d.Disposer$PollDisposable

#include <java/lang/Array.h>
#include <sun/java2d/Disposer$PollDisposable.h>
#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class FontStrikeDesc;
	}
}

namespace sun {
	namespace font {

class FontStrikeDisposer : public ::sun::java2d::DisposerRecord, public ::sun::java2d::Disposer$PollDisposable {
	$class(FontStrikeDisposer, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord, ::sun::java2d::Disposer$PollDisposable)
public:
	FontStrikeDisposer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc, int64_t pContext, $ints* images);
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc, int64_t pContext, $longs* images);
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc, int64_t pContext);
	void init$(::sun::font::Font2D* font2D, ::sun::font::FontStrikeDesc* desc);
	virtual void dispose() override;
	virtual $String* toString() override;
	::java::util::concurrent::ConcurrentHashMap* strikeCache = nullptr;
	::sun::font::FontStrikeDesc* desc = nullptr;
	$longs* longGlyphImages = nullptr;
	$ints* intGlyphImages = nullptr;
	$Array<int32_t, 2>* segIntGlyphImages = nullptr;
	$Array<int64_t, 2>* segLongGlyphImages = nullptr;
	int64_t pScalerContext = 0;
	bool disposed = false;
	bool comp = false;
};

	} // font
} // sun

#endif // _sun_font_FontStrikeDisposer_h_