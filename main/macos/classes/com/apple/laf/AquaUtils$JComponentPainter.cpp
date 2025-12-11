#include <com/apple/laf/AquaUtils$JComponentPainter.h>

#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$JComponentPainter_MethodInfo_[] = {
	{"paint", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaUtils$JComponentPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$JComponentPainter", "com.apple.laf.AquaUtils", "JComponentPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$JComponentPainter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaUtils$JComponentPainter",
	nullptr,
	nullptr,
	nullptr,
	_AquaUtils$JComponentPainter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtils$JComponentPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$JComponentPainter($Class* clazz) {
	return $of($alloc(AquaUtils$JComponentPainter));
}

$Class* AquaUtils$JComponentPainter::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$JComponentPainter, name, initialize, &_AquaUtils$JComponentPainter_ClassInfo_, allocate$AquaUtils$JComponentPainter);
	return class$;
}

$Class* AquaUtils$JComponentPainter::class$ = nullptr;

		} // laf
	} // apple
} // com