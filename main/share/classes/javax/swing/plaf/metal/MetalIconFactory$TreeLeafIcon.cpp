#include <javax/swing/plaf/metal/MetalIconFactory$TreeLeafIcon.h>

#include <javax/swing/plaf/metal/MetalIconFactory$FileIcon16.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalIconFactory$FileIcon16 = ::javax::swing::plaf::metal::MetalIconFactory$FileIcon16;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$TreeLeafIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$TreeLeafIcon::*)()>(&MetalIconFactory$TreeLeafIcon::init$))},
	{"getAdditionalHeight", "()I", nullptr, $PUBLIC},
	{"getShift", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$TreeLeafIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeLeafIcon", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FileIcon16", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$TreeLeafIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon",
	"javax.swing.plaf.metal.MetalIconFactory$FileIcon16",
	nullptr,
	nullptr,
	_MetalIconFactory$TreeLeafIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$TreeLeafIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$TreeLeafIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$TreeLeafIcon));
}

void MetalIconFactory$TreeLeafIcon::init$() {
	$MetalIconFactory$FileIcon16::init$();
}

int32_t MetalIconFactory$TreeLeafIcon::getShift() {
	return 2;
}

int32_t MetalIconFactory$TreeLeafIcon::getAdditionalHeight() {
	return 4;
}

MetalIconFactory$TreeLeafIcon::MetalIconFactory$TreeLeafIcon() {
}

$Class* MetalIconFactory$TreeLeafIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$TreeLeafIcon, name, initialize, &_MetalIconFactory$TreeLeafIcon_ClassInfo_, allocate$MetalIconFactory$TreeLeafIcon);
	return class$;
}

$Class* MetalIconFactory$TreeLeafIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax