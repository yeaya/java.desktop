#include <com/sun/java/swing/plaf/motif/MotifSplitPaneDivider.h>

#include <com/sun/java/swing/plaf/motif/MotifSplitPaneDivider$MotifMouseHandler.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DragController.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$MouseHandler.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef DEFAULT_CURSOR
#undef HORIZONTAL_SPLIT

using $MotifSplitPaneDivider$MotifMouseHandler = ::com::sun::java::swing::plaf::motif::MotifSplitPaneDivider$MotifMouseHandler;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $UIManager = ::javax::swing::UIManager;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneDivider$DragController = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController;
using $BasicSplitPaneDivider$MouseHandler = ::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifSplitPaneDivider_FieldInfo_[] = {
	{"defaultCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifSplitPaneDivider, defaultCursor)},
	{"minimumThumbSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifSplitPaneDivider, minimumThumbSize)},
	{"defaultDividerSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MotifSplitPaneDivider, defaultDividerSize)},
	{"pad", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(MotifSplitPaneDivider, pad)},
	{"hThumbOffset", "I", nullptr, $PRIVATE, $field(MotifSplitPaneDivider, hThumbOffset)},
	{"vThumbOffset", "I", nullptr, $PRIVATE, $field(MotifSplitPaneDivider, vThumbOffset)},
	{"hThumbWidth", "I", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, hThumbWidth)},
	{"hThumbHeight", "I", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, hThumbHeight)},
	{"vThumbWidth", "I", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, vThumbWidth)},
	{"vThumbHeight", "I", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, vThumbHeight)},
	{"highlightColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, highlightColor)},
	{"shadowColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, shadowColor)},
	{"focusedColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifSplitPaneDivider, focusedColor)},
	{}
};

$MethodInfo _MotifSplitPaneDivider_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifSplitPaneDivider::*)($BasicSplitPaneUI*)>(&MotifSplitPaneDivider::init$))},
	{"getDragger", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider$DragController;", nullptr, $PRIVATE, $method(static_cast<$BasicSplitPaneDivider$DragController*(MotifSplitPaneDivider::*)()>(&MotifSplitPaneDivider::getDragger))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSplitPane", "()Ljavax/swing/JSplitPane;", nullptr, $PRIVATE, $method(static_cast<$JSplitPane*(MotifSplitPaneDivider::*)()>(&MotifSplitPaneDivider::getSplitPane))},
	{"isInThumb", "(II)Z", nullptr, $PRIVATE, $method(static_cast<bool(MotifSplitPaneDivider::*)(int32_t,int32_t)>(&MotifSplitPaneDivider::isInThumb))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBasicSplitPaneUI", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC},
	{"setDividerSize", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifSplitPaneDivider_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifSplitPaneDivider$MotifMouseHandler", "com.sun.java.swing.plaf.motif.MotifSplitPaneDivider", "MotifMouseHandler", $PRIVATE},
	{}
};

$ClassInfo _MotifSplitPaneDivider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifSplitPaneDivider",
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	nullptr,
	_MotifSplitPaneDivider_FieldInfo_,
	_MotifSplitPaneDivider_MethodInfo_,
	nullptr,
	nullptr,
	_MotifSplitPaneDivider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifSplitPaneDivider$MotifMouseHandler"
};

$Object* allocate$MotifSplitPaneDivider($Class* clazz) {
	return $of($alloc(MotifSplitPaneDivider));
}


$Cursor* MotifSplitPaneDivider::defaultCursor = nullptr;

void MotifSplitPaneDivider::init$($BasicSplitPaneUI* ui) {
	$BasicSplitPaneDivider::init$(ui);
	this->hThumbOffset = 30;
	this->vThumbOffset = 40;
	this->hThumbWidth = 12;
	this->hThumbHeight = 18;
	this->vThumbWidth = 18;
	this->vThumbHeight = 12;
	$set(this, highlightColor, $UIManager::getColor("SplitPane.highlight"_s));
	$set(this, shadowColor, $UIManager::getColor("SplitPane.shadow"_s));
	$set(this, focusedColor, $UIManager::getColor("SplitPane.activeThumb"_s));
	setDividerSize(this->hThumbWidth + MotifSplitPaneDivider::pad);
}

void MotifSplitPaneDivider::setDividerSize(int32_t newSize) {
	$var($Insets, insets, getInsets());
	int32_t borderSize = 0;
	if ($nc($(getBasicSplitPaneUI()))->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		if (insets != nullptr) {
			borderSize = insets->left + insets->right;
		}
	} else if (insets != nullptr) {
		borderSize = insets->top + insets->bottom;
	}
	if (newSize < MotifSplitPaneDivider::pad + MotifSplitPaneDivider::minimumThumbSize + borderSize) {
		setDividerSize(MotifSplitPaneDivider::pad + MotifSplitPaneDivider::minimumThumbSize + borderSize);
	} else {
		this->vThumbHeight = (this->hThumbWidth = newSize - MotifSplitPaneDivider::pad - borderSize);
		$BasicSplitPaneDivider::setDividerSize(newSize);
	}
}

void MotifSplitPaneDivider::paint($Graphics* g) {
	$var($Color, bgColor, getBackground());
	$var($Dimension, size, getSize());
	$nc(g)->setColor($(getBackground()));
	g->fillRect(0, 0, $nc(size)->width, size->height);
	if ($nc($(getBasicSplitPaneUI()))->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		int32_t center = $nc(size)->width / 2;
		int32_t x = center - this->hThumbWidth / 2;
		int32_t y = this->hThumbOffset;
		g->setColor(this->shadowColor);
		g->drawLine(center - 1, 0, center - 1, size->height);
		g->setColor(this->highlightColor);
		g->drawLine(center, 0, center, size->height);
		g->setColor(($nc(this->splitPane)->hasFocus()) ? this->focusedColor : $(getBackground()));
		g->fillRect(x + 1, y + 1, this->hThumbWidth - 2, this->hThumbHeight - 1);
		g->setColor(this->highlightColor);
		g->drawLine(x, y, x + this->hThumbWidth - 1, y);
		g->drawLine(x, y + 1, x, y + this->hThumbHeight - 1);
		g->setColor(this->shadowColor);
		g->drawLine(x + 1, y + this->hThumbHeight - 1, x + this->hThumbWidth - 1, y + this->hThumbHeight - 1);
		g->drawLine(x + this->hThumbWidth - 1, y + 1, x + this->hThumbWidth - 1, y + this->hThumbHeight - 2);
	} else {
		int32_t center = $nc(size)->height / 2;
		int32_t x = size->width - this->vThumbOffset;
		int32_t y = size->height / 2 - this->vThumbHeight / 2;
		g->setColor(this->shadowColor);
		g->drawLine(0, center - 1, size->width, center - 1);
		g->setColor(this->highlightColor);
		g->drawLine(0, center, size->width, center);
		g->setColor(($nc(this->splitPane)->hasFocus()) ? this->focusedColor : $(getBackground()));
		g->fillRect(x + 1, y + 1, this->vThumbWidth - 1, this->vThumbHeight - 1);
		g->setColor(this->highlightColor);
		g->drawLine(x, y, x + this->vThumbWidth, y);
		g->drawLine(x, y + 1, x, y + this->vThumbHeight);
		g->setColor(this->shadowColor);
		g->drawLine(x + 1, y + this->vThumbHeight, x + this->vThumbWidth, y + this->vThumbHeight);
		g->drawLine(x + this->vThumbWidth, y + 1, x + this->vThumbWidth, y + this->vThumbHeight - 1);
	}
	$BasicSplitPaneDivider::paint(g);
}

$Dimension* MotifSplitPaneDivider::getMinimumSize() {
	return getPreferredSize();
}

void MotifSplitPaneDivider::setBasicSplitPaneUI($BasicSplitPaneUI* newUI) {
	if (this->splitPane != nullptr) {
		$nc(this->splitPane)->removePropertyChangeListener(this);
		if (this->mouseHandler != nullptr) {
			$nc(this->splitPane)->removeMouseListener(this->mouseHandler);
			$nc(this->splitPane)->removeMouseMotionListener(this->mouseHandler);
			removeMouseListener(this->mouseHandler);
			removeMouseMotionListener(this->mouseHandler);
			$set(this, mouseHandler, nullptr);
		}
	}
	$set(this, splitPaneUI, newUI);
	if (newUI != nullptr) {
		$set(this, splitPane, newUI->getSplitPane());
		if (this->splitPane != nullptr) {
			if (this->mouseHandler == nullptr) {
				$set(this, mouseHandler, $new($MotifSplitPaneDivider$MotifMouseHandler, this));
			}
			$nc(this->splitPane)->addMouseListener(this->mouseHandler);
			$nc(this->splitPane)->addMouseMotionListener(this->mouseHandler);
			addMouseListener(this->mouseHandler);
			addMouseMotionListener(this->mouseHandler);
			$nc(this->splitPane)->addPropertyChangeListener(this);
			if ($nc(this->splitPane)->isOneTouchExpandable()) {
				oneTouchExpandableChanged();
			}
		}
	} else {
		$set(this, splitPane, nullptr);
	}
}

bool MotifSplitPaneDivider::isInThumb(int32_t x, int32_t y) {
	$var($Dimension, size, getSize());
	int32_t thumbX = 0;
	int32_t thumbY = 0;
	int32_t thumbWidth = 0;
	int32_t thumbHeight = 0;
	if ($nc($(getBasicSplitPaneUI()))->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) {
		int32_t center = $nc(size)->width / 2;
		thumbX = center - this->hThumbWidth / 2;
		thumbY = this->hThumbOffset;
		thumbWidth = this->hThumbWidth;
		thumbHeight = this->hThumbHeight;
	} else {
		int32_t center = $nc(size)->height / 2;
		thumbX = size->width - this->vThumbOffset;
		thumbY = size->height / 2 - this->vThumbHeight / 2;
		thumbWidth = this->vThumbWidth;
		thumbHeight = this->vThumbHeight;
	}
	return (x >= thumbX && x < (thumbX + thumbWidth) && y >= thumbY && y < (thumbY + thumbHeight));
}

$BasicSplitPaneDivider$DragController* MotifSplitPaneDivider::getDragger() {
	return this->dragger;
}

$JSplitPane* MotifSplitPaneDivider::getSplitPane() {
	return this->splitPane;
}

void clinit$MotifSplitPaneDivider($Class* class$) {
	$assignStatic(MotifSplitPaneDivider::defaultCursor, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
}

MotifSplitPaneDivider::MotifSplitPaneDivider() {
}

$Class* MotifSplitPaneDivider::load$($String* name, bool initialize) {
	$loadClass(MotifSplitPaneDivider, name, initialize, &_MotifSplitPaneDivider_ClassInfo_, clinit$MotifSplitPaneDivider, allocate$MotifSplitPaneDivider);
	return class$;
}

$Class* MotifSplitPaneDivider::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com