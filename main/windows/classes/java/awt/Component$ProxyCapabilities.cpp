#include <java/awt/Component$ProxyCapabilities.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/ImageCapabilities.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <jcpp.h>

#undef BACKGROUND
#undef COPIED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;

namespace java {
	namespace awt {

$FieldInfo _Component$ProxyCapabilities_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$ProxyCapabilities, this$0)},
	{"orig", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(Component$ProxyCapabilities, orig)},
	{}
};

$MethodInfo _Component$ProxyCapabilities_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/awt/BufferCapabilities;)V", nullptr, $PRIVATE, $method(static_cast<void(Component$ProxyCapabilities::*)($Component*,$BufferCapabilities*)>(&Component$ProxyCapabilities::init$))},
	{}
};

$InnerClassInfo _Component$ProxyCapabilities_InnerClassesInfo_[] = {
	{"java.awt.Component$ProxyCapabilities", "java.awt.Component", "ProxyCapabilities", $PRIVATE},
	{}
};

$ClassInfo _Component$ProxyCapabilities_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$ProxyCapabilities",
	"sun.java2d.pipe.hw.ExtendedBufferCapabilities",
	nullptr,
	_Component$ProxyCapabilities_FieldInfo_,
	_Component$ProxyCapabilities_MethodInfo_,
	nullptr,
	nullptr,
	_Component$ProxyCapabilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$ProxyCapabilities($Class* clazz) {
	return $of($alloc(Component$ProxyCapabilities));
}

void Component$ProxyCapabilities::init$($Component* this$0, $BufferCapabilities* orig) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($ImageCapabilities, var$0, $nc(orig)->getFrontBufferCapabilities());
	$var($ImageCapabilities, var$1, orig->getBackBufferCapabilities());
	$init($BufferCapabilities$FlipContents);
	$ExtendedBufferCapabilities::init$(var$0, var$1, orig->getFlipContents() == $BufferCapabilities$FlipContents::BACKGROUND ? $BufferCapabilities$FlipContents::BACKGROUND : $BufferCapabilities$FlipContents::COPIED);
	$set(this, orig, orig);
}

Component$ProxyCapabilities::Component$ProxyCapabilities() {
}

$Class* Component$ProxyCapabilities::load$($String* name, bool initialize) {
	$loadClass(Component$ProxyCapabilities, name, initialize, &_Component$ProxyCapabilities_ClassInfo_, allocate$Component$ProxyCapabilities);
	return class$;
}

$Class* Component$ProxyCapabilities::class$ = nullptr;

	} // awt
} // java