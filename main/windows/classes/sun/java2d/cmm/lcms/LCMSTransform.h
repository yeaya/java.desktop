#ifndef _sun_java2d_cmm_lcms_LCMSTransform_h_
#define _sun_java2d_cmm_lcms_LCMSTransform_h_
//$ class sun.java2d.cmm.lcms.LCMSTransform
//$ extends sun.java2d.cmm.ColorTransform

#include <java/lang/Array.h>
#include <sun/java2d/cmm/ColorTransform.h>

#pragma push_macro("ID")
#undef ID

namespace java {
	namespace awt {
		namespace color {
			class ICC_Profile;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
			class WritableRaster;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {
				class LCMSImageLayout;
				class LCMSProfile;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

class LCMSTransform : public ::sun::java2d::cmm::ColorTransform {
	$class(LCMSTransform, $NO_CLASS_INIT, ::sun::java2d::cmm::ColorTransform)
public:
	LCMSTransform();
	void init$(::java::awt::color::ICC_Profile* profile, int32_t renderType, int32_t transformType);
	void init$($Array<::sun::java2d::cmm::ColorTransform>* transforms);
	virtual void colorConvert(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst) override;
	virtual void colorConvert(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst, $floats* srcMinVal, $floats* srcMaxVal, $floats* dstMinVal, $floats* dstMaxVal) override;
	virtual void colorConvert(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst) override;
	virtual $shorts* colorConvert($shorts* src, $shorts* dst) override;
	virtual $bytes* colorConvert($bytes* src, $bytes* dst) override;
	void doTransform(::sun::java2d::cmm::lcms::LCMSImageLayout* in, ::sun::java2d::cmm::lcms::LCMSImageLayout* out);
	virtual int32_t getNumInComponents() override;
	virtual int32_t getNumOutComponents() override;
	static bool isLCMSSupport(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst);
	int64_t ID = 0;
	int32_t inFormatter = 0;
	bool isInIntPacked = false;
	int32_t outFormatter = 0;
	bool isOutIntPacked = false;
	$Array<::java::awt::color::ICC_Profile>* profiles = nullptr;
	$Array<::sun::java2d::cmm::lcms::LCMSProfile>* lcmsProfiles = nullptr;
	int32_t renderType = 0;
	int32_t transformType = 0;
	int32_t numInComponents = 0;
	int32_t numOutComponents = 0;
	$Object* disposerReferent = nullptr;
};

			} // lcms
		} // cmm
	} // java2d
} // sun

#pragma pop_macro("ID")

#endif // _sun_java2d_cmm_lcms_LCMSTransform_h_