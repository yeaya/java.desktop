#ifndef _sun_java2d_pipe_hw_AccelGraphicsConfig_h_
#define _sun_java2d_pipe_hw_AccelGraphicsConfig_h_
//$ interface sun.java2d.pipe.hw.AccelGraphicsConfig
//$ extends sun.java2d.pipe.hw.BufferedContextProvider

#include <sun/java2d/pipe/hw/BufferedContextProvider.h>

namespace java {
	namespace awt {
		namespace image {
			class VolatileImage;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class ContextCapabilities;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class AccelGraphicsConfig : public ::sun::java2d::pipe::hw::BufferedContextProvider {
	$interface(AccelGraphicsConfig, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::BufferedContextProvider)
public:
	virtual ::java::awt::image::VolatileImage* createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) {return nullptr;}
	virtual ::sun::java2d::pipe::hw::ContextCapabilities* getContextCapabilities() {return nullptr;}
};

			} // hw
		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_hw_AccelGraphicsConfig_h_