#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$MinimizeButton.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $MotifInternalFrameTitlePane$FrameButton = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameTitlePane$MinimizeButton_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$MinimizeButton, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$MinimizeButton_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifInternalFrameTitlePane$MinimizeButton::*)($MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane$MinimizeButton::init$))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifInternalFrameTitlePane$MinimizeButton_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MinimizeButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "MinimizeButton", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "FrameButton", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$MinimizeButton_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$MinimizeButton",
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton",
	nullptr,
	_MotifInternalFrameTitlePane$MinimizeButton_FieldInfo_,
	_MotifInternalFrameTitlePane$MinimizeButton_MethodInfo_,
	nullptr,
	nullptr,
	_MotifInternalFrameTitlePane$MinimizeButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$MinimizeButton($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$MinimizeButton));
}

void MotifInternalFrameTitlePane$MinimizeButton::init$($MotifInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MotifInternalFrameTitlePane$FrameButton::init$(this$0);
}

void MotifInternalFrameTitlePane$MinimizeButton::paintComponent($Graphics* g) {
	$MotifInternalFrameTitlePane$FrameButton::paintComponent(g);
	$nc(g)->setColor(this->this$0->highlight);
	g->drawLine(7, 8, 7, 11);
	g->drawLine(7, 8, 10, 8);
	g->setColor(this->this$0->shadow);
	g->drawLine(8, 11, 10, 11);
	g->drawLine(11, 9, 11, 11);
}

MotifInternalFrameTitlePane$MinimizeButton::MotifInternalFrameTitlePane$MinimizeButton() {
}

$Class* MotifInternalFrameTitlePane$MinimizeButton::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$MinimizeButton, name, initialize, &_MotifInternalFrameTitlePane$MinimizeButton_ClassInfo_, allocate$MotifInternalFrameTitlePane$MinimizeButton);
	return class$;
}

$Class* MotifInternalFrameTitlePane$MinimizeButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com