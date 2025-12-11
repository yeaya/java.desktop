#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>

#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

#undef KEY_RENDERING
#undef VALUE_RENDER_QUALITY

using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $RenderingHints = ::java::awt::RenderingHints;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$ScalingJRSUIIcon_FieldInfo_[] = {
	{"width", "I", nullptr, $FINAL, $field(AquaIcon$ScalingJRSUIIcon, width)},
	{"height", "I", nullptr, $FINAL, $field(AquaIcon$ScalingJRSUIIcon, height)},
	{}
};

$MethodInfo _AquaIcon$ScalingJRSUIIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$ScalingJRSUIIcon::*)(int32_t,int32_t)>(&AquaIcon$ScalingJRSUIIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;)V", $PUBLIC | $ABSTRACT},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaIcon$ScalingJRSUIIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$ScalingJRSUIIcon", "com.apple.laf.AquaIcon", "ScalingJRSUIIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$ScalingJRSUIIcon_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaIcon$ScalingJRSUIIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource",
	_AquaIcon$ScalingJRSUIIcon_FieldInfo_,
	_AquaIcon$ScalingJRSUIIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$ScalingJRSUIIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$ScalingJRSUIIcon($Class* clazz) {
	return $of($alloc(AquaIcon$ScalingJRSUIIcon));
}

int32_t AquaIcon$ScalingJRSUIIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool AquaIcon$ScalingJRSUIIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* AquaIcon$ScalingJRSUIIcon::clone() {
	 return this->$Icon::clone();
}

$String* AquaIcon$ScalingJRSUIIcon::toString() {
	 return this->$Icon::toString();
}

void AquaIcon$ScalingJRSUIIcon::finalize() {
	this->$Icon::finalize();
}

void AquaIcon$ScalingJRSUIIcon::init$(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

void AquaIcon$ScalingJRSUIIcon::paintIcon($Component* c, $Graphics* g$renamed, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, g$renamed);
	if ($GraphicsEnvironment::isHeadless()) {
		return;
	}
	$assign(g, $nc(g)->create());
	if ($instanceOf($Graphics2D, g)) {
		$init($RenderingHints);
		$nc(($cast($Graphics2D, g)))->setRenderingHint($RenderingHints::KEY_RENDERING, $RenderingHints::VALUE_RENDER_QUALITY);
	}
	$var($AquaPainter, painter, $AquaPainter::create($($JRSUIState::getInstance())));
	initIconPainter(painter);
	g->clipRect(x, y, this->width, this->height);
	$nc(painter)->paint(g, c, x, y, this->width, this->height);
	g->dispose();
}

int32_t AquaIcon$ScalingJRSUIIcon::getIconWidth() {
	return this->width;
}

int32_t AquaIcon$ScalingJRSUIIcon::getIconHeight() {
	return this->height;
}

AquaIcon$ScalingJRSUIIcon::AquaIcon$ScalingJRSUIIcon() {
}

$Class* AquaIcon$ScalingJRSUIIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$ScalingJRSUIIcon, name, initialize, &_AquaIcon$ScalingJRSUIIcon_ClassInfo_, allocate$AquaIcon$ScalingJRSUIIcon);
	return class$;
}

$Class* AquaIcon$ScalingJRSUIIcon::class$ = nullptr;

		} // laf
	} // apple
} // com