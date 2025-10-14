#include <javax/swing/ImageIcon$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ImageIcon$2$1.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImageIcon = ::javax::swing::ImageIcon;
using $ImageIcon$2$1 = ::javax::swing::ImageIcon$2$1;

namespace javax {
	namespace swing {

$MethodInfo _ImageIcon$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImageIcon$2::*)()>(&ImageIcon$2::init$))},
	{"run", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImageIcon$2_EnclosingMethodInfo_ = {
	"javax.swing.ImageIcon",
	"createNoPermsComponent",
	"()Ljava/awt/Component;"
};

$InnerClassInfo _ImageIcon$2_InnerClassesInfo_[] = {
	{"javax.swing.ImageIcon$2", nullptr, nullptr, 0},
	{"javax.swing.ImageIcon$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageIcon$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ImageIcon$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ImageIcon$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Component;>;",
	&_ImageIcon$2_EnclosingMethodInfo_,
	_ImageIcon$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ImageIcon"
};

$Object* allocate$ImageIcon$2($Class* clazz) {
	return $of($alloc(ImageIcon$2));
}

void ImageIcon$2::init$() {
}

$Object* ImageIcon$2::run() {
	return $of($new($ImageIcon$2$1, this));
}

ImageIcon$2::ImageIcon$2() {
}

$Class* ImageIcon$2::load$($String* name, bool initialize) {
	$loadClass(ImageIcon$2, name, initialize, &_ImageIcon$2_ClassInfo_, allocate$ImageIcon$2);
	return class$;
}

$Class* ImageIcon$2::class$ = nullptr;

	} // swing
} // javax