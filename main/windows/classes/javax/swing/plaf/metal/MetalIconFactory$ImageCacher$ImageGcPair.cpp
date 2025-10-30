#include <javax/swing/plaf/metal/MetalIconFactory$ImageCacher$ImageGcPair.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <javax/swing/plaf/metal/MetalIconFactory$ImageCacher.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalIconFactory$ImageCacher = ::javax::swing::plaf::metal::MetalIconFactory$ImageCacher;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$ImageCacher$ImageGcPair_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalIconFactory$ImageCacher;", nullptr, $FINAL | $SYNTHETIC, $field(MetalIconFactory$ImageCacher$ImageGcPair, this$0)},
	{"image", "Ljava/awt/Image;", nullptr, 0, $field(MetalIconFactory$ImageCacher$ImageGcPair, image)},
	{"gc", "Ljava/awt/GraphicsConfiguration;", nullptr, 0, $field(MetalIconFactory$ImageCacher$ImageGcPair, gc)},
	{}
};

$MethodInfo _MetalIconFactory$ImageCacher$ImageGcPair_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalIconFactory$ImageCacher;Ljava/awt/Image;Ljava/awt/GraphicsConfiguration;)V", nullptr, 0, $method(static_cast<void(MetalIconFactory$ImageCacher$ImageGcPair::*)($MetalIconFactory$ImageCacher*,$Image*,$GraphicsConfiguration*)>(&MetalIconFactory$ImageCacher$ImageGcPair::init$))},
	{"hasSameConfiguration", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _MetalIconFactory$ImageCacher$ImageGcPair_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$ImageCacher", "javax.swing.plaf.metal.MetalIconFactory", "ImageCacher", $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$ImageCacher$ImageGcPair", "javax.swing.plaf.metal.MetalIconFactory$ImageCacher", "ImageGcPair", 0},
	{}
};

$ClassInfo _MetalIconFactory$ImageCacher$ImageGcPair_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$ImageCacher$ImageGcPair",
	"java.lang.Object",
	nullptr,
	_MetalIconFactory$ImageCacher$ImageGcPair_FieldInfo_,
	_MetalIconFactory$ImageCacher$ImageGcPair_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$ImageCacher$ImageGcPair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$ImageCacher$ImageGcPair($Class* clazz) {
	return $of($alloc(MetalIconFactory$ImageCacher$ImageGcPair));
}

void MetalIconFactory$ImageCacher$ImageGcPair::init$($MetalIconFactory$ImageCacher* this$0, $Image* image, $GraphicsConfiguration* gc) {
	$set(this, this$0, this$0);
	$set(this, image, image);
	$set(this, gc, gc);
}

bool MetalIconFactory$ImageCacher$ImageGcPair::hasSameConfiguration($GraphicsConfiguration* newGC) {
	return ((newGC != nullptr) && ($of(newGC)->equals(this->gc))) || ((newGC == nullptr) && (this->gc == nullptr));
}

MetalIconFactory$ImageCacher$ImageGcPair::MetalIconFactory$ImageCacher$ImageGcPair() {
}

$Class* MetalIconFactory$ImageCacher$ImageGcPair::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$ImageCacher$ImageGcPair, name, initialize, &_MetalIconFactory$ImageCacher$ImageGcPair_ClassInfo_, allocate$MetalIconFactory$ImageCacher$ImageGcPair);
	return class$;
}

$Class* MetalIconFactory$ImageCacher$ImageGcPair::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax