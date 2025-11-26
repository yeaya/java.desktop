#ifndef _sun_java2d_SurfaceData$PixelToPgramLoopConverter_h_
#define _sun_java2d_SurfaceData$PixelToPgramLoopConverter_h_
//$ class sun.java2d.SurfaceData$PixelToPgramLoopConverter
//$ extends sun.java2d.pipe.PixelToParallelogramConverter
//$ implements sun.java2d.pipe.LoopBasedPipe

#include <sun/java2d/pipe/LoopBasedPipe.h>
#include <sun/java2d/pipe/PixelToParallelogramConverter.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class ParallelogramPipe;
			class ShapeDrawPipe;
		}
	}
}

namespace sun {
	namespace java2d {

class SurfaceData$PixelToPgramLoopConverter : public ::sun::java2d::pipe::PixelToParallelogramConverter, public ::sun::java2d::pipe::LoopBasedPipe {
	$class(SurfaceData$PixelToPgramLoopConverter, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelToParallelogramConverter, ::sun::java2d::pipe::LoopBasedPipe)
public:
	SurfaceData$PixelToPgramLoopConverter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::pipe::ShapeDrawPipe* shapepipe, ::sun::java2d::pipe::ParallelogramPipe* pgrampipe, double minPenSize, double normPosition, bool adjustfill);
	virtual $String* toString() override;
};

	} // java2d
} // sun

#endif // _sun_java2d_SurfaceData$PixelToPgramLoopConverter_h_