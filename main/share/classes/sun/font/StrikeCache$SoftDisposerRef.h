#ifndef _sun_font_StrikeCache$SoftDisposerRef_h_
#define _sun_font_StrikeCache$SoftDisposerRef_h_
//$ class sun.font.StrikeCache$SoftDisposerRef
//$ extends java.lang.ref.SoftReference
//$ implements sun.font.StrikeCache$DisposableStrike

#include <java/lang/ref/SoftReference.h>
#include <sun/font/StrikeCache$DisposableStrike.h>

namespace sun {
	namespace font {
		class FontStrike;
		class FontStrikeDisposer;
	}
}

namespace sun {
	namespace font {

class StrikeCache$SoftDisposerRef : public ::java::lang::ref::SoftReference, public ::sun::font::StrikeCache$DisposableStrike {
	$class(StrikeCache$SoftDisposerRef, $NO_CLASS_INIT, ::java::lang::ref::SoftReference, ::sun::font::StrikeCache$DisposableStrike)
public:
	StrikeCache$SoftDisposerRef();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::font::FontStrike* strike);
	virtual ::sun::font::FontStrikeDisposer* getDisposer() override;
	virtual $String* toString() override;
	::sun::font::FontStrikeDisposer* disposer = nullptr;
};

	} // font
} // sun

#endif // _sun_font_StrikeCache$SoftDisposerRef_h_