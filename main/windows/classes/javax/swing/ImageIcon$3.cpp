#include <javax/swing/ImageIcon$3.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace javax {
	namespace swing {

$FieldInfo _ImageIcon$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ImageIcon;", nullptr, $FINAL | $SYNTHETIC, $field(ImageIcon$3, this$0)},
	{}
};

$MethodInfo _ImageIcon$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ImageIcon;)V", nullptr, 0, $method(static_cast<void(ImageIcon$3::*)($ImageIcon*)>(&ImageIcon$3::init$))},
	{}
};

$EnclosingMethodInfo _ImageIcon$3_EnclosingMethodInfo_ = {
	"javax.swing.ImageIcon",
	"getTracker",
	"()Ljava/awt/MediaTracker;"
};

$InnerClassInfo _ImageIcon$3_InnerClassesInfo_[] = {
	{"javax.swing.ImageIcon$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageIcon$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ImageIcon$3",
	"java.awt.Component",
	nullptr,
	_ImageIcon$3_FieldInfo_,
	_ImageIcon$3_MethodInfo_,
	nullptr,
	&_ImageIcon$3_EnclosingMethodInfo_,
	_ImageIcon$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ImageIcon"
};

$Object* allocate$ImageIcon$3($Class* clazz) {
	return $of($alloc(ImageIcon$3));
}

void ImageIcon$3::init$($ImageIcon* this$0) {
	$set(this, this$0, this$0);
	$Component::init$();
}

ImageIcon$3::ImageIcon$3() {
}

$Class* ImageIcon$3::load$($String* name, bool initialize) {
	$loadClass(ImageIcon$3, name, initialize, &_ImageIcon$3_ClassInfo_, allocate$ImageIcon$3);
	return class$;
}

$Class* ImageIcon$3::class$ = nullptr;

	} // swing
} // javax