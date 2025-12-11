#include <javax/swing/ImageIcon$1.h>

#include <java/awt/Component.h>
#include <javax/swing/ImageIcon.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {

$MethodInfo _ImageIcon$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImageIcon$1::*)()>(&ImageIcon$1::init$))},
	{"run", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImageIcon$1_EnclosingMethodInfo_ = {
	"javax.swing.ImageIcon",
	nullptr,
	nullptr
};

$InnerClassInfo _ImageIcon$1_InnerClassesInfo_[] = {
	{"javax.swing.ImageIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageIcon$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ImageIcon$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ImageIcon$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Component;>;",
	&_ImageIcon$1_EnclosingMethodInfo_,
	_ImageIcon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ImageIcon"
};

$Object* allocate$ImageIcon$1($Class* clazz) {
	return $of($alloc(ImageIcon$1));
}

void ImageIcon$1::init$() {
}

$Object* ImageIcon$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Component, component, $ImageIcon::createNoPermsComponent());
		$nc($($AWTAccessor::getComponentAccessor()))->setAppContext(component, nullptr);
		return $of(component);
	} catch ($Throwable& e) {
		e->printStackTrace();
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

ImageIcon$1::ImageIcon$1() {
}

$Class* ImageIcon$1::load$($String* name, bool initialize) {
	$loadClass(ImageIcon$1, name, initialize, &_ImageIcon$1_ClassInfo_, allocate$ImageIcon$1);
	return class$;
}

$Class* ImageIcon$1::class$ = nullptr;

	} // swing
} // javax