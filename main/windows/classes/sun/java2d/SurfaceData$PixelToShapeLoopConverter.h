#ifndef _sun_java2d_SurfaceData$PixelToShapeLoopConverter_h_
#define _sun_java2d_SurfaceData$PixelToShapeLoopConverter_h_
//$ class sun.java2d.SurfaceData$PixelToShapeLoopConverter
//$ extends sun.java2d.pipe.PixelToShapeConverter
//$ implements sun.java2d.pipe.LoopBasedPipe

#include <sun/java2d/pipe/LoopBasedPipe.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>

namespace sun {
	namespace java2d {
		namespace pipe {
			class ShapeDrawPipe;
		}
	}
}

namespace sun {
	namespace java2d {

class SurfaceData$PixelToShapeLoopConverter : public ::sun::java2d::pipe::PixelToShapeConverter, public ::sun::java2d::pipe::LoopBasedPipe {
	$class(SurfaceData$PixelToShapeLoopConverter, $NO_CLASS_INIT, ::sun::java2d::pipe::PixelToShapeConverter, ::sun::java2d::pipe::LoopBasedPipe)
public:
	SurfaceData$PixelToShapeLoopConverter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::pipe::ShapeDrawPipe* pipe);
	virtual $String* toString() override;
};

	} // java2d
} // sun

#endif // _sun_java2d_SurfaceData$PixelToShapeLoopConverter_h_