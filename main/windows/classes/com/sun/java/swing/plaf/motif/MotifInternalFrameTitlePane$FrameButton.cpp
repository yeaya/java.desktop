#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameTitlePane$FrameButton_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$FrameButton, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$FrameButton_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameTitlePane$FrameButton::*)($MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane$FrameButton::init$))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifInternalFrameTitlePane$FrameButton_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "FrameButton", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$FrameButton_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton",
	"javax.swing.JButton",
	nullptr,
	_MotifInternalFrameTitlePane$FrameButton_FieldInfo_,
	_MotifInternalFrameTitlePane$FrameButton_MethodInfo_,
	nullptr,
	nullptr,
	_MotifInternalFrameTitlePane$FrameButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$FrameButton($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$FrameButton));
}

void MotifInternalFrameTitlePane$FrameButton::init$($MotifInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
	setFocusPainted(false);
	setBorderPainted(false);
}

bool MotifInternalFrameTitlePane$FrameButton::isFocusTraversable() {
	return false;
}

void MotifInternalFrameTitlePane$FrameButton::requestFocus() {
}

$Dimension* MotifInternalFrameTitlePane$FrameButton::getMinimumSize() {
	$init($MotifInternalFrameTitlePane);
	return $MotifInternalFrameTitlePane::buttonDimension;
}

$Dimension* MotifInternalFrameTitlePane$FrameButton::getPreferredSize() {
	$init($MotifInternalFrameTitlePane);
	return $MotifInternalFrameTitlePane::buttonDimension;
}

void MotifInternalFrameTitlePane$FrameButton::paintComponent($Graphics* g) {
	$var($Dimension, d, getSize());
	int32_t maxX = $nc(d)->width - 1;
	int32_t maxY = d->height - 1;
	$nc(g)->setColor(this->this$0->color);
	g->fillRect(1, 1, d->width, d->height);
	bool pressed = $nc($(getModel()))->isPressed();
	g->setColor(pressed ? this->this$0->shadow : this->this$0->highlight);
	g->drawLine(0, 0, maxX, 0);
	g->drawLine(0, 0, 0, maxY);
	g->setColor(pressed ? this->this$0->highlight : this->this$0->shadow);
	g->drawLine(1, maxY, maxX, maxY);
	g->drawLine(maxX, 1, maxX, maxY);
}

MotifInternalFrameTitlePane$FrameButton::MotifInternalFrameTitlePane$FrameButton() {
}

$Class* MotifInternalFrameTitlePane$FrameButton::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$FrameButton, name, initialize, &_MotifInternalFrameTitlePane$FrameButton_ClassInfo_, allocate$MotifInternalFrameTitlePane$FrameButton);
	return class$;
}

$Class* MotifInternalFrameTitlePane$FrameButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com