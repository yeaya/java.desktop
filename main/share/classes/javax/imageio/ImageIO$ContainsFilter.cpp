#include <javax/imageio/ImageIO$ContainsFilter.h>

#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageIO.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $ImageIO = ::javax::imageio::ImageIO;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$ContainsFilter_FieldInfo_[] = {
	{"method", "Ljava/lang/reflect/Method;", nullptr, 0, $field(ImageIO$ContainsFilter, method)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$ContainsFilter, name)},
	{}
};

$MethodInfo _ImageIO$ContainsFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageIO$ContainsFilter::*)($Method*,$String*)>(&ImageIO$ContainsFilter::init$))},
	{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$ContainsFilter_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$ContainsFilter", "javax.imageio.ImageIO", "ContainsFilter", $STATIC},
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImageIO$ContainsFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$ContainsFilter",
	"java.lang.Object",
	"javax.imageio.spi.ServiceRegistry$Filter",
	_ImageIO$ContainsFilter_FieldInfo_,
	_ImageIO$ContainsFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ImageIO$ContainsFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$ContainsFilter($Class* clazz) {
	return $of($alloc(ImageIO$ContainsFilter));
}

void ImageIO$ContainsFilter::init$($Method* method, $String* name) {
	$set(this, method, method);
	$set(this, name, name);
}

bool ImageIO$ContainsFilter::filter(Object$* elt) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $ImageIO::contains($cast($StringArray, $($nc(this->method)->invoke(elt, $$new($ObjectArray, 0)))), this->name);
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

ImageIO$ContainsFilter::ImageIO$ContainsFilter() {
}

$Class* ImageIO$ContainsFilter::load$($String* name, bool initialize) {
	$loadClass(ImageIO$ContainsFilter, name, initialize, &_ImageIO$ContainsFilter_ClassInfo_, allocate$ImageIO$ContainsFilter);
	return class$;
}

$Class* ImageIO$ContainsFilter::class$ = nullptr;

	} // imageio
} // javax