#ifndef _java_awt_font_JavaAWTFontAccessImpl_h_
#define _java_awt_font_JavaAWTFontAccessImpl_h_
//$ class java.awt.font.JavaAWTFontAccessImpl
//$ extends jdk.internal.access.JavaAWTFontAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaAWTFontAccess.h>

namespace java {
	namespace awt {
		namespace font {

class JavaAWTFontAccessImpl : public ::jdk::internal::access::JavaAWTFontAccess {
	$class(JavaAWTFontAccessImpl, 0, ::jdk::internal::access::JavaAWTFontAccess)
public:
	JavaAWTFontAccessImpl();
	void init$();
	virtual $Object* getTextAttributeConstant($String* name) override;
	virtual void shape(Object$* shaper, $chars* text, int32_t start, int32_t count) override;
	static bool $assertionsDisabled;
};

		} // font
	} // awt
} // java

#endif // _java_awt_font_JavaAWTFontAccessImpl_h_