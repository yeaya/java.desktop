#include <com/apple/laf/AquaInternalFrameDockIconUI$ScaledImageLabel.h>

#include <com/apple/laf/AquaInternalFrameDockIconUI.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef CENTER
#undef SCALE_SMOOTH
#undef TYPE_INT_ARGB_PRE

using $AquaInternalFrameDockIconUI = ::com::apple::laf::AquaInternalFrameDockIconUI;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLabel = ::javax::swing::JLabel;
using $SwingConstants = ::javax::swing::SwingConstants;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameDockIconUI$ScaledImageLabel_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameDockIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameDockIconUI$ScaledImageLabel, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameDockIconUI$ScaledImageLabel_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameDockIconUI;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameDockIconUI$ScaledImageLabel::*)($AquaInternalFrameDockIconUI*)>(&AquaInternalFrameDockIconUI$ScaledImageLabel::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"mouseInIcon", "(Ljava/awt/event/MouseEvent;)Z", nullptr, 0, $method(static_cast<bool(AquaInternalFrameDockIconUI$ScaledImageLabel::*)($MouseEvent*)>(&AquaInternalFrameDockIconUI$ScaledImageLabel::mouseInIcon))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"updateIcon", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameDockIconUI$ScaledImageLabel::*)()>(&AquaInternalFrameDockIconUI$ScaledImageLabel::updateIcon))},
	{}
};

$InnerClassInfo _AquaInternalFrameDockIconUI$ScaledImageLabel_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameDockIconUI$ScaledImageLabel", "com.apple.laf.AquaInternalFrameDockIconUI", "ScaledImageLabel", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _AquaInternalFrameDockIconUI$ScaledImageLabel_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameDockIconUI$ScaledImageLabel",
	"javax.swing.JLabel",
	nullptr,
	_AquaInternalFrameDockIconUI$ScaledImageLabel_FieldInfo_,
	_AquaInternalFrameDockIconUI$ScaledImageLabel_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameDockIconUI$ScaledImageLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameDockIconUI"
};

$Object* allocate$AquaInternalFrameDockIconUI$ScaledImageLabel($Class* clazz) {
	return $of($alloc(AquaInternalFrameDockIconUI$ScaledImageLabel));
}

void AquaInternalFrameDockIconUI$ScaledImageLabel::init$($AquaInternalFrameDockIconUI* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$(nullptr, nullptr, $SwingConstants::CENTER);
}

void AquaInternalFrameDockIconUI$ScaledImageLabel::updateIcon() {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(this->this$0->fFrame)->getWidth();
	int32_t height = $nc(this->this$0->fFrame)->getHeight();
	if (width <= 0 || height <= 0) {
		width = 128;
		height = 128;
	}
	$var($Image, fImage, $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics, g, fImage->getGraphics());
	$nc(this->this$0->fFrame)->paint(g);
	$nc(g)->dispose();
	float var$0 = (float)$nc(this->this$0->fDesktopIcon)->getWidth();
	float scale = var$0 / (float)$Math::max(width, height) * 0.89f;
	setIcon($$new($ImageIcon, $(fImage->getScaledInstance($cast(int32_t, (width * scale)), -1, $Image::SCALE_SMOOTH))));
}

void AquaInternalFrameDockIconUI$ScaledImageLabel::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (getIcon() == nullptr) {
		updateIcon();
	}
	$nc(g)->translate(0, 2);
	if (!this->this$0->fTrackingIcon) {
		$JLabel::paint(g);
		return;
	}
	$var($ImageIcon, prev, $cast($ImageIcon, getIcon()));
	$var($ImageIcon, pressedIcon, $new($ImageIcon, $($AquaUtils::generateSelectedDarkImage($($nc(prev)->getImage())))));
	setIcon(pressedIcon);
	$JLabel::paint(g);
	setIcon(prev);
}

bool AquaInternalFrameDockIconUI$ScaledImageLabel::mouseInIcon($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	return $nc($(getBounds()))->contains(var$0, e->getY());
}

$Dimension* AquaInternalFrameDockIconUI$ScaledImageLabel::getPreferredSize() {
	return $new($Dimension, 64, 64);
}

AquaInternalFrameDockIconUI$ScaledImageLabel::AquaInternalFrameDockIconUI$ScaledImageLabel() {
}

$Class* AquaInternalFrameDockIconUI$ScaledImageLabel::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameDockIconUI$ScaledImageLabel, name, initialize, &_AquaInternalFrameDockIconUI$ScaledImageLabel_ClassInfo_, allocate$AquaInternalFrameDockIconUI$ScaledImageLabel);
	return class$;
}

$Class* AquaInternalFrameDockIconUI$ScaledImageLabel::class$ = nullptr;

		} // laf
	} // apple
} // com