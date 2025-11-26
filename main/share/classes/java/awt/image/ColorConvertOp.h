#ifndef _java_awt_image_ColorConvertOp_h_
#define _java_awt_image_ColorConvertOp_h_
//$ class java.awt.image.ColorConvertOp
//$ extends java.awt.image.BufferedImageOp
//$ implements java.awt.image.RasterOp

#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/RasterOp.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class RenderingHints;
	}
}
namespace java {
	namespace awt {
		namespace color {
			class ColorSpace;
			class ICC_Profile;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class ColorModel;
			class Raster;
			class WritableRaster;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace cmm {
			class ColorTransform;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export ColorConvertOp : public ::java::awt::image::BufferedImageOp, public ::java::awt::image::RasterOp {
	$class(ColorConvertOp, $NO_CLASS_INIT, ::java::awt::image::BufferedImageOp, ::java::awt::image::RasterOp)
public:
	ColorConvertOp();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::RenderingHints* hints);
	void init$(::java::awt::color::ColorSpace* cspace, ::java::awt::RenderingHints* hints);
	void init$(::java::awt::color::ColorSpace* srcCspace, ::java::awt::color::ColorSpace* dstCspace, ::java::awt::RenderingHints* hints);
	void init$($Array<::java::awt::color::ICC_Profile>* profiles, ::java::awt::RenderingHints* hints);
	::java::awt::image::BufferedImage* ICCBIFilter(::java::awt::image::BufferedImage* src, ::java::awt::color::ColorSpace* srcColorSpace, ::java::awt::image::BufferedImage* dest, ::java::awt::color::ColorSpace* destColorSpace);
	virtual ::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM) override;
	::java::awt::image::BufferedImage* createCompatibleDestImage(::java::awt::image::BufferedImage* src, ::java::awt::image::ColorModel* destCM, ::java::awt::color::ColorSpace* destCS);
	virtual ::java::awt::image::WritableRaster* createCompatibleDestRaster(::java::awt::image::Raster* src) override;
	virtual ::java::awt::image::BufferedImage* filter(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dest) override;
	virtual ::java::awt::image::WritableRaster* filter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dest) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::BufferedImage* src) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D(::java::awt::image::Raster* src) override;
	$Array<::java::awt::color::ICC_Profile>* getICC_Profiles();
	void getMinMaxValsFromColorSpaces(::java::awt::color::ColorSpace* srcCspace, ::java::awt::color::ColorSpace* dstCspace);
	void getMinMaxValsFromProfiles(::java::awt::color::ICC_Profile* srcProfile, ::java::awt::color::ICC_Profile* dstProfile);
	virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
	virtual ::java::awt::RenderingHints* getRenderingHints() override;
	int32_t getRenderingIntent(::java::awt::color::ICC_Profile* profile);
	::java::awt::image::BufferedImage* nonICCBIFilter(::java::awt::image::BufferedImage* src, ::java::awt::color::ColorSpace* srcColorSpace, ::java::awt::image::BufferedImage* dst, ::java::awt::color::ColorSpace* dstColorSpace);
	::java::awt::image::WritableRaster* nonICCRasterFilter(::java::awt::image::Raster* src, ::java::awt::image::WritableRaster* dst);
	void setMinMax(int32_t type, int32_t nc, $floats* minVals, $floats* maxVals);
	virtual $String* toString() override;
	void updateBITransform(::java::awt::color::ICC_Profile* srcProfile, ::java::awt::color::ICC_Profile* destProfile);
	$Array<::java::awt::color::ICC_Profile>* profileList = nullptr;
	$Array<::java::awt::color::ColorSpace>* CSList = nullptr;
	::sun::java2d::cmm::ColorTransform* thisTransform = nullptr;
	::sun::java2d::cmm::ColorTransform* thisRasterTransform = nullptr;
	::java::awt::color::ICC_Profile* thisSrcProfile = nullptr;
	::java::awt::color::ICC_Profile* thisDestProfile = nullptr;
	::java::awt::RenderingHints* hints = nullptr;
	bool gotProfiles = false;
	$floats* srcMinVals = nullptr;
	$floats* srcMaxVals = nullptr;
	$floats* dstMinVals = nullptr;
	$floats* dstMaxVals = nullptr;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_ColorConvertOp_h_