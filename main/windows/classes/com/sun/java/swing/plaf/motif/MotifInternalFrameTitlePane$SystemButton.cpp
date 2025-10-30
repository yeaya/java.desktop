#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$SystemButton.h>

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

$FieldInfo _MotifInternalFrameTitlePane$SystemButton_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$SystemButton, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$SystemButton_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifInternalFrameTitlePane$SystemButton::*)($MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane$SystemButton::init$))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifInternalFrameTitlePane$SystemButton_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$SystemButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "SystemButton", $PRIVATE},
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton", "com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane", "FrameButton", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$SystemButton_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$SystemButton",
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton",
	nullptr,
	_MotifInternalFrameTitlePane$SystemButton_FieldInfo_,
	_MotifInternalFrameTitlePane$SystemButton_MethodInfo_,
	nullptr,
	nullptr,
	_MotifInternalFrameTitlePane$SystemButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$SystemButton($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$SystemButton));
}

void MotifInternalFrameTitlePane$SystemButton::init$($MotifInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MotifInternalFrameTitlePane$FrameButton::init$(this$0);
}

bool MotifInternalFrameTitlePane$SystemButton::isFocusTraversable() {
	return false;
}

void MotifInternalFrameTitlePane$SystemButton::requestFocus() {
}

void MotifInternalFrameTitlePane$SystemButton::paintComponent($Graphics* g) {
	$MotifInternalFrameTitlePane$FrameButton::paintComponent(g);
	$nc(g)->setColor(this->this$0->highlight);
	g->drawLine(4, 8, 4, 11);
	g->drawLine(4, 8, 19 - 5, 8);
	g->setColor(this->this$0->shadow);
	g->drawLine(5, 11, 19 - 5, 11);
	g->drawLine(19 - 5, 9, 19 - 5, 11);
}

MotifInternalFrameTitlePane$SystemButton::MotifInternalFrameTitlePane$SystemButton() {
}

$Class* MotifInternalFrameTitlePane$SystemButton::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$SystemButton, name, initialize, &_MotifInternalFrameTitlePane$SystemButton_ClassInfo_, allocate$MotifInternalFrameTitlePane$SystemButton);
	return class$;
}

$Class* MotifInternalFrameTitlePane$SystemButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com