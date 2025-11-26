#include <java/awt/image/BufferedImage$1.h>

#include <java/awt/image/BufferedImage.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _BufferedImage$1_FieldInfo_[] = {
	{"val$wrClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedImage$1, val$wrClass)},
	{"val$smClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedImage$1, val$smClass)},
	{"val$cmClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedImage$1, val$cmClass)},
	{}
};

$MethodInfo _BufferedImage$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(BufferedImage$1::*)($Class*,$Class*,$Class*)>(&BufferedImage$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BufferedImage$1_EnclosingMethodInfo_ = {
	"java.awt.image.BufferedImage",
	"isStandard",
	"(Ljava/awt/image/ColorModel;Ljava/awt/image/WritableRaster;)Z"
};

$InnerClassInfo _BufferedImage$1_InnerClassesInfo_[] = {
	{"java.awt.image.BufferedImage$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferedImage$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.image.BufferedImage$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BufferedImage$1_FieldInfo_,
	_BufferedImage$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_BufferedImage$1_EnclosingMethodInfo_,
	_BufferedImage$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.image.BufferedImage"
};

$Object* allocate$BufferedImage$1($Class* clazz) {
	return $of($alloc(BufferedImage$1));
}

void BufferedImage$1::init$($Class* val$cmClass, $Class* val$smClass, $Class* val$wrClass) {
	$set(this, val$cmClass, val$cmClass);
	$set(this, val$smClass, val$smClass);
	$set(this, val$wrClass, val$wrClass);
}

$Object* BufferedImage$1::run() {
	$beforeCallerSensitive();
	$var($ClassLoader, std, $System::class$->getClassLoader());
	bool var$1 = ($nc(this->val$cmClass)->getClassLoader() == std);
	bool var$0 = var$1 && ($nc(this->val$smClass)->getClassLoader() == std);
	return $of($Boolean::valueOf(var$0 && ($nc(this->val$wrClass)->getClassLoader() == std)));
}

BufferedImage$1::BufferedImage$1() {
}

$Class* BufferedImage$1::load$($String* name, bool initialize) {
	$loadClass(BufferedImage$1, name, initialize, &_BufferedImage$1_ClassInfo_, allocate$BufferedImage$1);
	return class$;
}

$Class* BufferedImage$1::class$ = nullptr;

		} // image
	} // awt
} // java