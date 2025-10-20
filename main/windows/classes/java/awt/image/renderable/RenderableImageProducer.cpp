#include <java/awt/image/renderable/RenderableImageProducer.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/renderable/RenderContext.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef COMPLETESCANLINES
#undef SINGLEFRAME
#undef SINGLEPASS
#undef STATICIMAGEDONE
#undef TOPDOWNLEFTRIGHT

using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $RenderContext = ::java::awt::image::renderable::RenderContext;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {
		namespace image {
			namespace renderable {

$FieldInfo _RenderableImageProducer_FieldInfo_[] = {
	{"rdblImage", "Ljava/awt/image/renderable/RenderableImage;", nullptr, 0, $field(RenderableImageProducer, rdblImage)},
	{"rc", "Ljava/awt/image/renderable/RenderContext;", nullptr, 0, $field(RenderableImageProducer, rc)},
	{"ics", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/image/ImageConsumer;>;", 0, $field(RenderableImageProducer, ics)},
	{}
};

$MethodInfo _RenderableImageProducer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/image/renderable/RenderableImage;Ljava/awt/image/renderable/RenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderableImageProducer::*)($RenderableImage*,$RenderContext*)>(&RenderableImageProducer::init$))},
	{"addConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"requestTopDownLeftRightResend", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"setRenderContext", "(Ljava/awt/image/renderable/RenderContext;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"startProduction", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RenderableImageProducer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.renderable.RenderableImageProducer",
	"java.lang.Object",
	"java.awt.image.ImageProducer,java.lang.Runnable",
	_RenderableImageProducer_FieldInfo_,
	_RenderableImageProducer_MethodInfo_
};

$Object* allocate$RenderableImageProducer($Class* clazz) {
	return $of($alloc(RenderableImageProducer));
}

int32_t RenderableImageProducer::hashCode() {
	 return this->$ImageProducer::hashCode();
}

bool RenderableImageProducer::equals(Object$* arg0) {
	 return this->$ImageProducer::equals(arg0);
}

$Object* RenderableImageProducer::clone() {
	 return this->$ImageProducer::clone();
}

$String* RenderableImageProducer::toString() {
	 return this->$ImageProducer::toString();
}

void RenderableImageProducer::finalize() {
	this->$ImageProducer::finalize();
}

void RenderableImageProducer::init$($RenderableImage* rdblImage, $RenderContext* rc) {
	$set(this, ics, $new($Vector));
	$set(this, rdblImage, rdblImage);
	$set(this, rc, rc);
}

void RenderableImageProducer::setRenderContext($RenderContext* rc) {
	$synchronized(this) {
		$set(this, rc, rc);
	}
}

void RenderableImageProducer::addConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		if (!$nc(this->ics)->contains(ic)) {
			$nc(this->ics)->addElement(ic);
		}
	}
}

bool RenderableImageProducer::isConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		return $nc(this->ics)->contains(ic);
	}
}

void RenderableImageProducer::removeConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		$nc(this->ics)->removeElement(ic);
	}
}

void RenderableImageProducer::startProduction($ImageConsumer* ic) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		addConsumer(ic);
		$var($String, name, "RenderableImageProducer Thread"_s);
		$var($Thread, thread, $new($Thread, nullptr, this, name, 0, false));
		thread->start();
	}
}

void RenderableImageProducer::requestTopDownLeftRightResend($ImageConsumer* ic) {
}

void RenderableImageProducer::run() {
	$useLocalCurrentObjectStackCache();
	$var($RenderedImage, rdrdImage, nullptr);
	if (this->rc != nullptr) {
		$assign(rdrdImage, $nc(this->rdblImage)->createRendering(this->rc));
	} else {
		$assign(rdrdImage, $nc(this->rdblImage)->createDefaultRendering());
	}
	$var($ColorModel, colorModel, $nc(rdrdImage)->getColorModel());
	$var($Raster, raster, rdrdImage->getData());
	$var($SampleModel, sampleModel, $nc(raster)->getSampleModel());
	$var($DataBuffer, dataBuffer, raster->getDataBuffer());
	if (colorModel == nullptr) {
		$assign(colorModel, $ColorModel::getRGBdefault());
	}
	int32_t minX = raster->getMinX();
	int32_t minY = raster->getMinY();
	int32_t width = raster->getWidth();
	int32_t height = raster->getHeight();
	$var($Enumeration, icList, nullptr);
	$var($ImageConsumer, ic, nullptr);
	$assign(icList, $nc(this->ics)->elements());
	while ($nc(icList)->hasMoreElements()) {
		$assign(ic, $cast($ImageConsumer, icList->nextElement()));
		$nc(ic)->setDimensions(width, height);
		ic->setHints((($ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES) | $ImageConsumer::SINGLEPASS) | $ImageConsumer::SINGLEFRAME);
	}
	$var($ints, pix, $new($ints, width));
	int32_t i = 0;
	int32_t j = 0;
	int32_t numBands = $nc(sampleModel)->getNumBands();
	$var($ints, tmpPixel, $new($ints, numBands));
	for (j = 0; j < height; ++j) {
		for (i = 0; i < width; ++i) {
			sampleModel->getPixel(i, j, tmpPixel, dataBuffer);
			pix->set(i, $nc(colorModel)->getDataElement(tmpPixel, 0));
		}
		$assign(icList, $nc(this->ics)->elements());
		while ($nc(icList)->hasMoreElements()) {
			$assign(ic, $cast($ImageConsumer, icList->nextElement()));
			$nc(ic)->setPixels(0, j, width, 1, colorModel, pix, 0, width);
		}
	}
	$assign(icList, $nc(this->ics)->elements());
	while ($nc(icList)->hasMoreElements()) {
		$assign(ic, $cast($ImageConsumer, icList->nextElement()));
		$nc(ic)->imageComplete($ImageConsumer::STATICIMAGEDONE);
	}
}

RenderableImageProducer::RenderableImageProducer() {
}

$Class* RenderableImageProducer::load$($String* name, bool initialize) {
	$loadClass(RenderableImageProducer, name, initialize, &_RenderableImageProducer_ClassInfo_, allocate$RenderableImageProducer);
	return class$;
}

$Class* RenderableImageProducer::class$ = nullptr;

			} // renderable
		} // image
	} // awt
} // java