#ifndef _java_awt_color_ICC_ProfileGray_h_
#define _java_awt_color_ICC_ProfileGray_h_
//$ class java.awt.color.ICC_ProfileGray
//$ extends java.awt.color.ICC_Profile

#include <java/awt/color/ICC_Profile.h>
#include <java/lang/Array.h>

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

class $export ICC_ProfileGray : public ::java::awt::color::ICC_Profile {
	$class(ICC_ProfileGray, $NO_CLASS_INIT, ::java::awt::color::ICC_Profile)
public:
	ICC_ProfileGray();
	using ::java::awt::color::ICC_Profile::getGamma;
	using ::java::awt::color::ICC_Profile::getTRC;
	void init$(::sun::java2d::cmm::Profile* p);
	void init$(::sun::java2d::cmm::ProfileDeferralInfo* pdi);
	virtual float getGamma();
	virtual $floats* getMediaWhitePoint() override;
	virtual $shorts* getTRC();
	static const int64_t serialVersionUID = (int64_t)0xF0642FF1F299A2A7;
};

		} // color
	} // awt
} // java

#endif // _java_awt_color_ICC_ProfileGray_h_