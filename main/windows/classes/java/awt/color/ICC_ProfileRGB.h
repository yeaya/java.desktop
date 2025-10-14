#ifndef _java_awt_color_ICC_ProfileRGB_h_
#define _java_awt_color_ICC_ProfileRGB_h_
//$ class java.awt.color.ICC_ProfileRGB
//$ extends java.awt.color.ICC_Profile

#include <java/awt/color/ICC_Profile.h>
#include <java/lang/Array.h>

#pragma push_macro("BLUECOMPONENT")
#undef BLUECOMPONENT
#pragma push_macro("GREENCOMPONENT")
#undef GREENCOMPONENT
#pragma push_macro("REDCOMPONENT")
#undef REDCOMPONENT

namespace sun {
	namespace java2d {
		namespace cmm {
			class Profile;
			class ProfileDeferralInfo;
		}
	}
}

namespace java {
	namespace awt {
		namespace color {

class $export ICC_ProfileRGB : public ::java::awt::color::ICC_Profile {
	$class(ICC_ProfileRGB, $NO_CLASS_INIT, ::java::awt::color::ICC_Profile)
public:
	ICC_ProfileRGB();
	void init$(::sun::java2d::cmm::Profile* p);
	void init$(::sun::java2d::cmm::ProfileDeferralInfo* pdi);
	virtual float getGamma(int32_t component) override;
	virtual $Array<float, 2>* getMatrix();
	virtual $floats* getMediaWhitePoint() override;
	virtual $shorts* getTRC(int32_t component) override;
	static int32_t toTag(int32_t component);
	static const int64_t serialVersionUID = (int64_t)0x760811B99AC7A706;
	static const int32_t REDCOMPONENT = 0;
	static const int32_t GREENCOMPONENT = 1;
	static const int32_t BLUECOMPONENT = 2;
};

		} // color
	} // awt
} // java

#pragma pop_macro("BLUECOMPONENT")
#pragma pop_macro("GREENCOMPONENT")
#pragma pop_macro("REDCOMPONENT")

#endif // _java_awt_color_ICC_ProfileRGB_h_