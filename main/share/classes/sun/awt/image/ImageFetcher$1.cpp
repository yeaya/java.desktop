#include <sun/awt/image/ImageFetcher$1.h>

#include <java/lang/Error.h>
#include <java/lang/ThreadGroup.h>
#include <sun/awt/image/FetcherInfo.h>
#include <sun/awt/image/ImageFetcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $FetcherInfo = ::sun::awt::image::FetcherInfo;
using $ImageFetcher = ::sun::awt::image::ImageFetcher;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageFetcher$1_FieldInfo_[] = {
	{"val$fetcherGroup", "Ljava/lang/ThreadGroup;", nullptr, $FINAL | $SYNTHETIC, $field(ImageFetcher$1, val$fetcherGroup)},
	{"val$info", "Lsun/awt/image/FetcherInfo;", nullptr, $FINAL | $SYNTHETIC, $field(ImageFetcher$1, val$info)},
	{}
};

$MethodInfo _ImageFetcher$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/FetcherInfo;Ljava/lang/ThreadGroup;)V", "()V", 0, $method(static_cast<void(ImageFetcher$1::*)($FetcherInfo*,$ThreadGroup*)>(&ImageFetcher$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImageFetcher$1_EnclosingMethodInfo_ = {
	"sun.awt.image.ImageFetcher",
	"createFetchers",
	"(Lsun/awt/image/FetcherInfo;)V"
};

$InnerClassInfo _ImageFetcher$1_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageFetcher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageFetcher$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImageFetcher$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ImageFetcher$1_FieldInfo_,
	_ImageFetcher$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ImageFetcher$1_EnclosingMethodInfo_,
	_ImageFetcher$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageFetcher"
};

$Object* allocate$ImageFetcher$1($Class* clazz) {
	return $of($alloc(ImageFetcher$1));
}

void ImageFetcher$1::init$($FetcherInfo* val$info, $ThreadGroup* val$fetcherGroup) {
	$set(this, val$info, val$info);
	$set(this, val$fetcherGroup, val$fetcherGroup);
}

$Object* ImageFetcher$1::run() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc($nc(this->val$info)->fetchers)->length; ++i) {
		if ($nc($nc(this->val$info)->fetchers)->get(i) == nullptr) {
			$var($ImageFetcher, f, $new($ImageFetcher, this->val$fetcherGroup, i));
			try {
				f->start();
				$nc($nc(this->val$info)->fetchers)->set(i, f);
				++$nc(this->val$info)->numFetchers;
				break;
			} catch ($Error& e) {
			}
		}
	}
	return $of(nullptr);
}

ImageFetcher$1::ImageFetcher$1() {
}

$Class* ImageFetcher$1::load$($String* name, bool initialize) {
	$loadClass(ImageFetcher$1, name, initialize, &_ImageFetcher$1_ClassInfo_, allocate$ImageFetcher$1);
	return class$;
}

$Class* ImageFetcher$1::class$ = nullptr;

		} // image
	} // awt
} // sun