#include <java/awt/image/FilteredImageSource.h>

#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/util/Hashtable.h>
#include <jcpp.h>

using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _FilteredImageSource_FieldInfo_[] = {
	{"src", "Ljava/awt/image/ImageProducer;", nullptr, 0, $field(FilteredImageSource, src)},
	{"filter", "Ljava/awt/image/ImageFilter;", nullptr, 0, $field(FilteredImageSource, filter)},
	{"proxies", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/image/ImageConsumer;Ljava/awt/image/ImageFilter;>;", $PRIVATE, $field(FilteredImageSource, proxies)},
	{}
};

$MethodInfo _FilteredImageSource_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/ImageProducer;Ljava/awt/image/ImageFilter;)V", nullptr, $PUBLIC, $method(static_cast<void(FilteredImageSource::*)($ImageProducer*,$ImageFilter*)>(&FilteredImageSource::init$))},
	{"addConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"requestTopDownLeftRightResend", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"startProduction", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _FilteredImageSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.FilteredImageSource",
	"java.lang.Object",
	"java.awt.image.ImageProducer",
	_FilteredImageSource_FieldInfo_,
	_FilteredImageSource_MethodInfo_
};

$Object* allocate$FilteredImageSource($Class* clazz) {
	return $of($alloc(FilteredImageSource));
}

void FilteredImageSource::init$($ImageProducer* orig, $ImageFilter* imgf) {
	$set(this, src, orig);
	$set(this, filter, imgf);
}

void FilteredImageSource::addConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		if (this->proxies == nullptr) {
			$set(this, proxies, $new($Hashtable));
		}
		if (!$nc(this->proxies)->containsKey(ic)) {
			$var($ImageFilter, imgf, $nc(this->filter)->getFilterInstance(ic));
			$nc(this->proxies)->put(ic, imgf);
			$nc(this->src)->addConsumer(imgf);
		}
	}
}

bool FilteredImageSource::isConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		return (this->proxies != nullptr && $nc(this->proxies)->containsKey(ic));
	}
}

void FilteredImageSource::removeConsumer($ImageConsumer* ic) {
	$synchronized(this) {
		if (this->proxies != nullptr) {
			$var($ImageFilter, imgf, $cast($ImageFilter, $nc(this->proxies)->get(ic)));
			if (imgf != nullptr) {
				$nc(this->src)->removeConsumer(imgf);
				$nc(this->proxies)->remove(ic);
				if ($nc(this->proxies)->isEmpty()) {
					$set(this, proxies, nullptr);
				}
			}
		}
	}
}

void FilteredImageSource::startProduction($ImageConsumer* ic) {
	$synchronized(this) {
		if (this->proxies == nullptr) {
			$set(this, proxies, $new($Hashtable));
		}
		$var($ImageFilter, imgf, $cast($ImageFilter, $nc(this->proxies)->get(ic)));
		if (imgf == nullptr) {
			$assign(imgf, $nc(this->filter)->getFilterInstance(ic));
			$nc(this->proxies)->put(ic, imgf);
		}
		$nc(this->src)->startProduction(imgf);
	}
}

void FilteredImageSource::requestTopDownLeftRightResend($ImageConsumer* ic) {
	$synchronized(this) {
		if (this->proxies != nullptr) {
			$var($ImageFilter, imgf, $cast($ImageFilter, $nc(this->proxies)->get(ic)));
			if (imgf != nullptr) {
				imgf->resendTopDownLeftRight(this->src);
			}
		}
	}
}

FilteredImageSource::FilteredImageSource() {
}

$Class* FilteredImageSource::load$($String* name, bool initialize) {
	$loadClass(FilteredImageSource, name, initialize, &_FilteredImageSource_ClassInfo_, allocate$FilteredImageSource);
	return class$;
}

$Class* FilteredImageSource::class$ = nullptr;

		} // image
	} // awt
} // java