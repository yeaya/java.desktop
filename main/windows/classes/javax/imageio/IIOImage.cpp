#include <javax/imageio/IIOImage.h>

#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;

namespace javax {
	namespace imageio {

$FieldInfo _IIOImage_FieldInfo_[] = {
	{"image", "Ljava/awt/image/RenderedImage;", nullptr, $PROTECTED, $field(IIOImage, image)},
	{"raster", "Ljava/awt/image/Raster;", nullptr, $PROTECTED, $field(IIOImage, raster)},
	{"thumbnails", "Ljava/util/List;", "Ljava/util/List<+Ljava/awt/image/BufferedImage;>;", $PROTECTED, $field(IIOImage, thumbnails)},
	{"metadata", "Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PROTECTED, $field(IIOImage, metadata)},
	{}
};

$MethodInfo _IIOImage_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/RenderedImage;Ljava/util/List;Ljavax/imageio/metadata/IIOMetadata;)V", "(Ljava/awt/image/RenderedImage;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljavax/imageio/metadata/IIOMetadata;)V", $PUBLIC, $method(static_cast<void(IIOImage::*)($RenderedImage*,$List*,$IIOMetadata*)>(&IIOImage::init$))},
	{"<init>", "(Ljava/awt/image/Raster;Ljava/util/List;Ljavax/imageio/metadata/IIOMetadata;)V", "(Ljava/awt/image/Raster;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljavax/imageio/metadata/IIOMetadata;)V", $PUBLIC, $method(static_cast<void(IIOImage::*)($Raster*,$List*,$IIOMetadata*)>(&IIOImage::init$))},
	{"getMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getNumThumbnails", "()I", nullptr, $PUBLIC},
	{"getRaster", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getRenderedImage", "()Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC},
	{"getThumbnail", "(I)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getThumbnails", "()Ljava/util/List;", "()Ljava/util/List<+Ljava/awt/image/BufferedImage;>;", $PUBLIC},
	{"hasRaster", "()Z", nullptr, $PUBLIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{"setRaster", "(Ljava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setRenderedImage", "(Ljava/awt/image/RenderedImage;)V", nullptr, $PUBLIC},
	{"setThumbnails", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/awt/image/BufferedImage;>;)V", $PUBLIC},
	{}
};

$ClassInfo _IIOImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.IIOImage",
	"java.lang.Object",
	nullptr,
	_IIOImage_FieldInfo_,
	_IIOImage_MethodInfo_
};

$Object* allocate$IIOImage($Class* clazz) {
	return $of($alloc(IIOImage));
}

void IIOImage::init$($RenderedImage* image, $List* thumbnails, $IIOMetadata* metadata) {
	$set(this, thumbnails, nullptr);
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	$set(this, image, image);
	$set(this, raster, nullptr);
	$set(this, thumbnails, thumbnails);
	$set(this, metadata, metadata);
}

void IIOImage::init$($Raster* raster, $List* thumbnails, $IIOMetadata* metadata) {
	$set(this, thumbnails, nullptr);
	if (raster == nullptr) {
		$throwNew($IllegalArgumentException, "raster == null!"_s);
	}
	$set(this, raster, raster);
	$set(this, image, nullptr);
	$set(this, thumbnails, thumbnails);
	$set(this, metadata, metadata);
}

$RenderedImage* IIOImage::getRenderedImage() {
	$synchronized(this) {
		return this->image;
	}
}

void IIOImage::setRenderedImage($RenderedImage* image) {
	$synchronized(this) {
		if (image == nullptr) {
			$throwNew($IllegalArgumentException, "image == null!"_s);
		}
		$set(this, image, image);
		$set(this, raster, nullptr);
	}
}

bool IIOImage::hasRaster() {
	$synchronized(this) {
		return (this->raster != nullptr);
	}
}

$Raster* IIOImage::getRaster() {
	$synchronized(this) {
		return this->raster;
	}
}

void IIOImage::setRaster($Raster* raster) {
	$synchronized(this) {
		if (raster == nullptr) {
			$throwNew($IllegalArgumentException, "raster == null!"_s);
		}
		$set(this, raster, raster);
		$set(this, image, nullptr);
	}
}

int32_t IIOImage::getNumThumbnails() {
	return this->thumbnails == nullptr ? 0 : $nc(this->thumbnails)->size();
}

$BufferedImage* IIOImage::getThumbnail(int32_t index) {
	if (this->thumbnails == nullptr) {
		$throwNew($IndexOutOfBoundsException, "No thumbnails available!"_s);
	}
	return $cast($BufferedImage, $nc(this->thumbnails)->get(index));
}

$List* IIOImage::getThumbnails() {
	return this->thumbnails;
}

void IIOImage::setThumbnails($List* thumbnails) {
	$set(this, thumbnails, thumbnails);
}

$IIOMetadata* IIOImage::getMetadata() {
	return this->metadata;
}

void IIOImage::setMetadata($IIOMetadata* metadata) {
	$set(this, metadata, metadata);
}

IIOImage::IIOImage() {
}

$Class* IIOImage::load$($String* name, bool initialize) {
	$loadClass(IIOImage, name, initialize, &_IIOImage_ClassInfo_, allocate$IIOImage);
	return class$;
}

$Class* IIOImage::class$ = nullptr;

	} // imageio
} // javax