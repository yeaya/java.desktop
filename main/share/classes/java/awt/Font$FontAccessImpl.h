#ifndef _java_awt_Font$FontAccessImpl_h_
#define _java_awt_Font$FontAccessImpl_h_
//$ class java.awt.Font$FontAccessImpl
//$ extends sun.font.FontAccess

#include <sun/font/FontAccess.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class FontPeer;
		}
	}
}
namespace sun {
	namespace font {
		class Font2D;
		class Font2DHandle;
	}
}

namespace java {
	namespace awt {

class Font$FontAccessImpl : public ::sun::font::FontAccess {
	$class(Font$FontAccessImpl, $NO_CLASS_INIT, ::sun::font::FontAccess)
public:
	Font$FontAccessImpl();
	void init$();
	virtual ::sun::font::Font2D* getFont2D(::java::awt::Font* font) override;
	virtual ::java::awt::peer::FontPeer* getFontPeer(::java::awt::Font* font) override;
	virtual bool isCreatedFont(::java::awt::Font* font) override;
	virtual void setCreatedFont(::java::awt::Font* font) override;
	virtual void setFont2D(::java::awt::Font* font, ::sun::font::Font2DHandle* handle) override;
};

	} // awt
} // java

#endif // _java_awt_Font$FontAccessImpl_h_