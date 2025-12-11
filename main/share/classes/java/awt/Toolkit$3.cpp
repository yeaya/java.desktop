#include <java/awt/Toolkit$3.h>

#include <java/awt/Toolkit.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace awt {

$MethodInfo _Toolkit$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Toolkit$3::*)()>(&Toolkit$3::init$))},
	{"setPlatformResources", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Toolkit$3_EnclosingMethodInfo_ = {
	"java.awt.Toolkit",
	"initStatic",
	"()V"
};

$InnerClassInfo _Toolkit$3_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$3", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$ToolkitAccessor", "sun.awt.AWTAccessor", "ToolkitAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Toolkit$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$3",
	"java.lang.Object",
	"sun.awt.AWTAccessor$ToolkitAccessor",
	nullptr,
	_Toolkit$3_MethodInfo_,
	nullptr,
	&_Toolkit$3_EnclosingMethodInfo_,
	_Toolkit$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$3($Class* clazz) {
	return $of($alloc(Toolkit$3));
}

void Toolkit$3::init$() {
}

void Toolkit$3::setPlatformResources($ResourceBundle* bundle) {
	$Toolkit::setPlatformResources(bundle);
}

Toolkit$3::Toolkit$3() {
}

$Class* Toolkit$3::load$($String* name, bool initialize) {
	$loadClass(Toolkit$3, name, initialize, &_Toolkit$3_ClassInfo_, allocate$Toolkit$3);
	return class$;
}

$Class* Toolkit$3::class$ = nullptr;

	} // awt
} // java