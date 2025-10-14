#ifndef _javax_imageio_IIOParam_h_
#define _javax_imageio_IIOParam_h_
//$ class javax.imageio.IIOParam
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace imageio {
		class IIOParamController;
		class ImageTypeSpecifier;
	}
}

namespace javax {
	namespace imageio {

class $import IIOParam : public ::java::lang::Object {
	$class(IIOParam, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOParam();
	void init$();
	virtual bool activateController();
	virtual ::javax::imageio::IIOParamController* getController();
	virtual ::javax::imageio::IIOParamController* getDefaultController();
	virtual ::java::awt::Point* getDestinationOffset();
	virtual ::javax::imageio::ImageTypeSpecifier* getDestinationType();
	virtual $ints* getSourceBands();
	virtual ::java::awt::Rectangle* getSourceRegion();
	virtual int32_t getSourceXSubsampling();
	virtual int32_t getSourceYSubsampling();
	virtual int32_t getSubsamplingXOffset();
	virtual int32_t getSubsamplingYOffset();
	virtual bool hasController();
	virtual void setController(::javax::imageio::IIOParamController* controller);
	virtual void setDestinationOffset(::java::awt::Point* destinationOffset);
	virtual void setDestinationType(::javax::imageio::ImageTypeSpecifier* destinationType);
	virtual void setSourceBands($ints* sourceBands);
	virtual void setSourceRegion(::java::awt::Rectangle* sourceRegion);
	virtual void setSourceSubsampling(int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t subsamplingXOffset, int32_t subsamplingYOffset);
	::java::awt::Rectangle* sourceRegion = nullptr;
	int32_t sourceXSubsampling = 0;
	int32_t sourceYSubsampling = 0;
	int32_t subsamplingXOffset = 0;
	int32_t subsamplingYOffset = 0;
	$ints* sourceBands = nullptr;
	::javax::imageio::ImageTypeSpecifier* destinationType = nullptr;
	::java::awt::Point* destinationOffset = nullptr;
	::javax::imageio::IIOParamController* defaultController = nullptr;
	::javax::imageio::IIOParamController* controller = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_IIOParam_h_