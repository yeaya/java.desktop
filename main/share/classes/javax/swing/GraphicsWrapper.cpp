#include <javax/swing/GraphicsWrapper.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _GraphicsWrapper_MethodInfo_[] = {
	{"getClipHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getClipWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getClipX", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getClipY", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isClipIntersecting", "(Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"subGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GraphicsWrapper_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.GraphicsWrapper",
	nullptr,
	nullptr,
	nullptr,
	_GraphicsWrapper_MethodInfo_
};

$Object* allocate$GraphicsWrapper($Class* clazz) {
	return $of($alloc(GraphicsWrapper));
}

$Class* GraphicsWrapper::load$($String* name, bool initialize) {
	$loadClass(GraphicsWrapper, name, initialize, &_GraphicsWrapper_ClassInfo_, allocate$GraphicsWrapper);
	return class$;
}

$Class* GraphicsWrapper::class$ = nullptr;

	} // swing
} // javax