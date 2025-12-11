#include <com/sun/java/swing/plaf/motif/MotifBorders$InternalFrameBorder.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

#undef BORDER_SIZE
#undef CORNER_SIZE

using $MotifBorders$FrameBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$FrameBorder;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifBorders$InternalFrameBorder_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(MotifBorders$InternalFrameBorder, frame$)},
	{"CORNER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifBorders$InternalFrameBorder, CORNER_SIZE)},
	{}
};

$MethodInfo _MotifBorders$InternalFrameBorder_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifBorders$InternalFrameBorder::*)($JInternalFrame*)>(&MotifBorders$InternalFrameBorder::init$))},
	{"drawBottomBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"drawLeftBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"drawRightBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"drawTopBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)Z", nullptr, $PROTECTED},
	{"frame", "()Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"isActiveFrame", "()Z", nullptr, $PROTECTED},
	{"resizePartWidth", "()I", nullptr, $PUBLIC},
	{"setFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifBorders$InternalFrameBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifBorders$InternalFrameBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "InternalFrameBorder", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder", "com.sun.java.swing.plaf.motif.MotifBorders", "FrameBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifBorders$InternalFrameBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifBorders$InternalFrameBorder",
	"com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder",
	nullptr,
	_MotifBorders$InternalFrameBorder_FieldInfo_,
	_MotifBorders$InternalFrameBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MotifBorders$InternalFrameBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifBorders"
};

$Object* allocate$MotifBorders$InternalFrameBorder($Class* clazz) {
	return $of($alloc(MotifBorders$InternalFrameBorder));
}

void MotifBorders$InternalFrameBorder::init$($JInternalFrame* aFrame) {
	$MotifBorders$FrameBorder::init$(aFrame);
	$set(this, frame$, aFrame);
}

void MotifBorders$InternalFrameBorder::setFrame($JInternalFrame* aFrame) {
	$set(this, frame$, aFrame);
}

$JInternalFrame* MotifBorders$InternalFrameBorder::frame() {
	return this->frame$;
}

int32_t MotifBorders$InternalFrameBorder::resizePartWidth() {
	if (!$nc(this->frame$)->isResizable()) {
		return 0;
	}
	return $MotifBorders$FrameBorder::BORDER_SIZE;
}

bool MotifBorders$InternalFrameBorder::drawTopBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $MotifBorders$FrameBorder::drawTopBorder(c, g, x, y, width, height);
	if (var$0 && $nc(this->frame$)->isResizable()) {
		$nc(g)->setColor($(getFrameShadow()));
		g->drawLine(MotifBorders$InternalFrameBorder::CORNER_SIZE - 1, y + 1, MotifBorders$InternalFrameBorder::CORNER_SIZE - 1, y + 4);
		g->drawLine(width - MotifBorders$InternalFrameBorder::CORNER_SIZE - 1, y + 1, width - MotifBorders$InternalFrameBorder::CORNER_SIZE - 1, y + 4);
		g->setColor($(getFrameHighlight()));
		g->drawLine(MotifBorders$InternalFrameBorder::CORNER_SIZE, y, MotifBorders$InternalFrameBorder::CORNER_SIZE, y + 4);
		g->drawLine(width - MotifBorders$InternalFrameBorder::CORNER_SIZE, y, width - MotifBorders$InternalFrameBorder::CORNER_SIZE, y + 4);
		return true;
	}
	return false;
}

bool MotifBorders$InternalFrameBorder::drawLeftBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $MotifBorders$FrameBorder::drawLeftBorder(c, g, x, y, width, height);
	if (var$0 && $nc(this->frame$)->isResizable()) {
		$nc(g)->setColor($(getFrameHighlight()));
		int32_t topY = y + MotifBorders$InternalFrameBorder::CORNER_SIZE;
		g->drawLine(x, topY, x + 4, topY);
		int32_t bottomY = height - MotifBorders$InternalFrameBorder::CORNER_SIZE;
		g->drawLine(x + 1, bottomY, x + 5, bottomY);
		g->setColor($(getFrameShadow()));
		g->drawLine(x + 1, topY - 1, x + 5, topY - 1);
		g->drawLine(x + 1, bottomY - 1, x + 5, bottomY - 1);
		return true;
	}
	return false;
}

bool MotifBorders$InternalFrameBorder::drawRightBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $MotifBorders$FrameBorder::drawRightBorder(c, g, x, y, width, height);
	if (var$0 && $nc(this->frame$)->isResizable()) {
		int32_t startX = width - $nc($(getBorderInsets(c)))->right;
		$nc(g)->setColor($(getFrameHighlight()));
		int32_t topY = y + MotifBorders$InternalFrameBorder::CORNER_SIZE;
		g->drawLine(startX, topY, width - 2, topY);
		int32_t bottomY = height - MotifBorders$InternalFrameBorder::CORNER_SIZE;
		g->drawLine(startX + 1, bottomY, startX + 3, bottomY);
		g->setColor($(getFrameShadow()));
		g->drawLine(startX + 1, topY - 1, width - 2, topY - 1);
		g->drawLine(startX + 1, bottomY - 1, startX + 3, bottomY - 1);
		return true;
	}
	return false;
}

bool MotifBorders$InternalFrameBorder::drawBottomBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $MotifBorders$FrameBorder::drawBottomBorder(c, g, x, y, width, height);
	if (var$0 && $nc(this->frame$)->isResizable()) {
		int32_t startY = height - $nc($(getBorderInsets(c)))->bottom;
		$nc(g)->setColor($(getFrameShadow()));
		g->drawLine(MotifBorders$InternalFrameBorder::CORNER_SIZE - 1, startY + 1, MotifBorders$InternalFrameBorder::CORNER_SIZE - 1, height - 1);
		g->drawLine(width - MotifBorders$InternalFrameBorder::CORNER_SIZE, startY + 1, width - MotifBorders$InternalFrameBorder::CORNER_SIZE, height - 1);
		g->setColor($(getFrameHighlight()));
		g->drawLine(MotifBorders$InternalFrameBorder::CORNER_SIZE, startY, MotifBorders$InternalFrameBorder::CORNER_SIZE, height - 2);
		g->drawLine(width - MotifBorders$InternalFrameBorder::CORNER_SIZE + 1, startY, width - MotifBorders$InternalFrameBorder::CORNER_SIZE + 1, height - 2);
		return true;
	}
	return false;
}

bool MotifBorders$InternalFrameBorder::isActiveFrame() {
	return $nc(this->frame$)->isSelected();
}

MotifBorders$InternalFrameBorder::MotifBorders$InternalFrameBorder() {
}

$Class* MotifBorders$InternalFrameBorder::load$($String* name, bool initialize) {
	$loadClass(MotifBorders$InternalFrameBorder, name, initialize, &_MotifBorders$InternalFrameBorder_ClassInfo_, allocate$MotifBorders$InternalFrameBorder);
	return class$;
}

$Class* MotifBorders$InternalFrameBorder::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com