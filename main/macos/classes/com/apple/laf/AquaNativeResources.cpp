#include <com/apple/laf/AquaNativeResources.h>

#include <com/apple/laf/AquaNativeResources$1.h>
#include <com/apple/laf/AquaNativeResources$2.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AquaNativeResources$1 = ::com::apple::laf::AquaNativeResources$1;
using $AquaNativeResources$2 = ::com::apple::laf::AquaNativeResources$2;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaNativeResources_FieldInfo_[] = {
	{"sBackgroundColor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/awt/Color;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaNativeResources, sBackgroundColor)},
	{}
};

$MethodInfo _AquaNativeResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaNativeResources::*)()>(&AquaNativeResources::init$))},
	{"getRadioButtonSizerImage", "()Ljava/awt/image/BufferedImage;", nullptr, $STATIC, $method(static_cast<$BufferedImage*(*)()>(&AquaNativeResources::getRadioButtonSizerImage))},
	{"getWindowBackgroundColor", "()J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&AquaNativeResources::getWindowBackgroundColor))},
	{"getWindowBackgroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)()>(&AquaNativeResources::getWindowBackgroundColorUIResource))},
	{}
};

#define _METHOD_INDEX_getWindowBackgroundColor 2

$InnerClassInfo _AquaNativeResources_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaNativeResources$CColorPaintUIResource", "com.apple.laf.AquaNativeResources", "CColorPaintUIResource", $STATIC},
	{"com.apple.laf.AquaNativeResources$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaNativeResources$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaNativeResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaNativeResources",
	"java.lang.Object",
	nullptr,
	_AquaNativeResources_FieldInfo_,
	_AquaNativeResources_MethodInfo_,
	nullptr,
	nullptr,
	_AquaNativeResources_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaNativeResources$CColorPaintUIResource,com.apple.laf.AquaNativeResources$2,com.apple.laf.AquaNativeResources$1"
};

$Object* allocate$AquaNativeResources($Class* clazz) {
	return $of($alloc(AquaNativeResources));
}

$AquaUtils$RecyclableSingleton* AquaNativeResources::sBackgroundColor = nullptr;

void AquaNativeResources::init$() {
}

int64_t AquaNativeResources::getWindowBackgroundColor() {
	$init(AquaNativeResources);
	int64_t $ret = 0;
	$prepareNativeStatic(AquaNativeResources, getWindowBackgroundColor, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$Color* AquaNativeResources::getWindowBackgroundColorUIResource() {
	$init(AquaNativeResources);
	return $cast($Color, $nc(AquaNativeResources::sBackgroundColor)->get());
}

$BufferedImage* AquaNativeResources::getRadioButtonSizerImage() {
	$init(AquaNativeResources);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, img, $new($BufferedImage, 20, 20, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics, g, img->getGraphics());
	$init($Color);
	$nc(g)->setColor($Color::pink);
	g->fillRect(0, 0, 20, 20);
	g->dispose();
	return img;
}

void clinit$AquaNativeResources($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AquaNativeResources$1)));
	}
	$assignStatic(AquaNativeResources::sBackgroundColor, $new($AquaNativeResources$2));
}

AquaNativeResources::AquaNativeResources() {
}

$Class* AquaNativeResources::load$($String* name, bool initialize) {
	$loadClass(AquaNativeResources, name, initialize, &_AquaNativeResources_ClassInfo_, clinit$AquaNativeResources, allocate$AquaNativeResources);
	return class$;
}

$Class* AquaNativeResources::class$ = nullptr;

		} // laf
	} // apple
} // com