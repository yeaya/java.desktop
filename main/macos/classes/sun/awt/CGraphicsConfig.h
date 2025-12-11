#ifndef _sun_awt_CGraphicsConfig_h_
#define _sun_awt_CGraphicsConfig_h_
//$ class sun.awt.CGraphicsConfig
//$ extends java.awt.GraphicsConfiguration
//$ implements sun.lwawt.LWGraphicsConfig

#include <java/awt/GraphicsConfiguration.h>
#include <sun/lwawt/LWGraphicsConfig.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace awt {
		class CGraphicsDevice;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CFRetainedResource;
		}
	}
}

namespace sun {
	namespace awt {

class $export CGraphicsConfig : public ::java::awt::GraphicsConfiguration, public ::sun::lwawt::LWGraphicsConfig {
	$class(CGraphicsConfig, $NO_CLASS_INIT, ::java::awt::GraphicsConfiguration, ::sun::lwawt::LWGraphicsConfig)
public:
	CGraphicsConfig();
	using ::java::awt::GraphicsConfiguration::getColorModel;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::awt::CGraphicsDevice* device);
	virtual ::sun::java2d::SurfaceData* createSurfaceData(::sun::lwawt::macosx::CFRetainedResource* layer) {return nullptr;}
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::geom::AffineTransform* getDefaultTransform() override;
	virtual ::java::awt::GraphicsDevice* getDevice() override;
	virtual ::java::awt::geom::AffineTransform* getNormalizingTransform() override;
	virtual bool isTranslucencyCapable() override;
	virtual $String* toString() override;
	::sun::awt::CGraphicsDevice* device = nullptr;
	::java::awt::image::ColorModel* colorModel = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_CGraphicsConfig_h_