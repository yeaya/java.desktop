#include <javax/swing/plaf/metal/MetalIconFactory$TreeFolderIcon.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FolderIcon16.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalIconFactory$FolderIcon16 = ::javax::swing::plaf::metal::MetalIconFactory$FolderIcon16;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$TreeFolderIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$TreeFolderIcon::*)()>(&MetalIconFactory$TreeFolderIcon::init$))},
	{"getAdditionalHeight", "()I", nullptr, $PUBLIC},
	{"getShift", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$TreeFolderIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeFolderIcon", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FolderIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FolderIcon16", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$TreeFolderIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon",
	"javax.swing.plaf.metal.MetalIconFactory$FolderIcon16",
	nullptr,
	nullptr,
	_MetalIconFactory$TreeFolderIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$TreeFolderIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$TreeFolderIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$TreeFolderIcon));
}

void MetalIconFactory$TreeFolderIcon::init$() {
	$MetalIconFactory$FolderIcon16::init$();
}

int32_t MetalIconFactory$TreeFolderIcon::getShift() {
	return -1;
}

int32_t MetalIconFactory$TreeFolderIcon::getAdditionalHeight() {
	return 2;
}

MetalIconFactory$TreeFolderIcon::MetalIconFactory$TreeFolderIcon() {
}

$Class* MetalIconFactory$TreeFolderIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$TreeFolderIcon, name, initialize, &_MetalIconFactory$TreeFolderIcon_ClassInfo_, allocate$MetalIconFactory$TreeFolderIcon);
	return class$;
}

$Class* MetalIconFactory$TreeFolderIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax