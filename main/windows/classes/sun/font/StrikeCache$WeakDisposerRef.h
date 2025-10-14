#ifndef _sun_font_StrikeCache$WeakDisposerRef_h_
#define _sun_font_StrikeCache$WeakDisposerRef_h_
//$ class sun.font.StrikeCache$WeakDisposerRef
//$ extends java.lang.ref.WeakReference
//$ implements sun.font.StrikeCache$DisposableStrike

#include <java/lang/ref/WeakReference.h>
#include <sun/font/StrikeCache$DisposableStrike.h>

namespace sun {
	namespace font {
		class FontStrike;
		class FontStrikeDisposer;
	}
}

namespace sun {
	namespace font {

class StrikeCache$WeakDisposerRef : public ::java::lang::ref::WeakReference, public ::sun::font::StrikeCache$DisposableStrike {
	$class(StrikeCache$WeakDisposerRef, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::sun::font::StrikeCache$DisposableStrike)
public:
	StrikeCache$WeakDisposerRef();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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

#endif // _sun_font_StrikeCache$WeakDisposerRef_h_