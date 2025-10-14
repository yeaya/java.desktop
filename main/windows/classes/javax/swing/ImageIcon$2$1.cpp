#include <javax/swing/ImageIcon$2$1.h>

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
#include <javax/swing/ImageIcon$2.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon$2 = ::javax::swing::ImageIcon$2;

namespace javax {
	namespace swing {

$FieldInfo _ImageIcon$2$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ImageIcon$2;", nullptr, $FINAL | $SYNTHETIC, $field(ImageIcon$2$1, this$0)},
	{}
};

$MethodInfo _ImageIcon$2$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/ImageIcon$2;)V", nullptr, 0, $method(static_cast<void(ImageIcon$2$1::*)($ImageIcon$2*)>(&ImageIcon$2$1::init$))},
	{}
};

$EnclosingMethodInfo _ImageIcon$2$1_EnclosingMethodInfo_ = {
	"javax.swing.ImageIcon$2",
	"run",
	"()Ljava/awt/Component;"
};

$InnerClassInfo _ImageIcon$2$1_InnerClassesInfo_[] = {
	{"javax.swing.ImageIcon$2", nullptr, nullptr, 0},
	{"javax.swing.ImageIcon$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageIcon$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ImageIcon$2$1",
	"java.awt.Component",
	nullptr,
	_ImageIcon$2$1_FieldInfo_,
	_ImageIcon$2$1_MethodInfo_,
	nullptr,
	&_ImageIcon$2$1_EnclosingMethodInfo_,
	_ImageIcon$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ImageIcon"
};

$Object* allocate$ImageIcon$2$1($Class* clazz) {
	return $of($alloc(ImageIcon$2$1));
}

void ImageIcon$2$1::init$($ImageIcon$2* this$0) {
	$set(this, this$0, this$0);
	$Component::init$();
}

ImageIcon$2$1::ImageIcon$2$1() {
}

$Class* ImageIcon$2$1::load$($String* name, bool initialize) {
	$loadClass(ImageIcon$2$1, name, initialize, &_ImageIcon$2$1_ClassInfo_, allocate$ImageIcon$2$1);
	return class$;
}

$Class* ImageIcon$2$1::class$ = nullptr;

	} // swing
} // javax