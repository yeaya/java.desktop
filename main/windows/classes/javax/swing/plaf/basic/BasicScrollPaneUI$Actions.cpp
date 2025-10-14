#include <javax/swing/plaf/basic/BasicScrollPaneUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/Scrollable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef SCROLL_DOWN
#undef SCROLL_END
#undef SCROLL_HOME
#undef SCROLL_LEFT
#undef SCROLL_RIGHT
#undef SCROLL_UP
#undef UNIT_SCROLL_DOWN
#undef UNIT_SCROLL_LEFT
#undef UNIT_SCROLL_RIGHT
#undef UNIT_SCROLL_UP
#undef VERTICAL

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollPaneUI$Actions_FieldInfo_[] = {
	{"SCROLL_UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, SCROLL_UP)},
	{"SCROLL_DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, SCROLL_DOWN)},
	{"SCROLL_HOME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, SCROLL_HOME)},
	{"SCROLL_END", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, SCROLL_END)},
	{"UNIT_SCROLL_UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, UNIT_SCROLL_UP)},
	{"UNIT_SCROLL_DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, UNIT_SCROLL_DOWN)},
	{"SCROLL_LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, SCROLL_LEFT)},
	{"SCROLL_RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, SCROLL_RIGHT)},
	{"UNIT_SCROLL_LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, UNIT_SCROLL_LEFT)},
	{"UNIT_SCROLL_RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicScrollPaneUI$Actions, UNIT_SCROLL_RIGHT)},
	{}
};

$MethodInfo _BasicScrollPaneUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicScrollPaneUI$Actions::*)($String*)>(&BasicScrollPaneUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"scroll", "(Ljavax/swing/JScrollPane;IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Actions::*)($JScrollPane*,int32_t,int32_t,bool)>(&BasicScrollPaneUI$Actions::scroll))},
	{"scrollEnd", "(Ljavax/swing/JScrollPane;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Actions::*)($JScrollPane*)>(&BasicScrollPaneUI$Actions::scrollEnd))},
	{"scrollHome", "(Ljavax/swing/JScrollPane;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollPaneUI$Actions::*)($JScrollPane*)>(&BasicScrollPaneUI$Actions::scrollHome))},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$Actions", "javax.swing.plaf.basic.BasicScrollPaneUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicScrollPaneUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicScrollPaneUI$Actions_FieldInfo_,
	_BasicScrollPaneUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$Actions($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$Actions));
}

$String* BasicScrollPaneUI$Actions::SCROLL_UP = nullptr;
$String* BasicScrollPaneUI$Actions::SCROLL_DOWN = nullptr;
$String* BasicScrollPaneUI$Actions::SCROLL_HOME = nullptr;
$String* BasicScrollPaneUI$Actions::SCROLL_END = nullptr;
$String* BasicScrollPaneUI$Actions::UNIT_SCROLL_UP = nullptr;
$String* BasicScrollPaneUI$Actions::UNIT_SCROLL_DOWN = nullptr;
$String* BasicScrollPaneUI$Actions::SCROLL_LEFT = nullptr;
$String* BasicScrollPaneUI$Actions::SCROLL_RIGHT = nullptr;
$String* BasicScrollPaneUI$Actions::UNIT_SCROLL_LEFT = nullptr;
$String* BasicScrollPaneUI$Actions::UNIT_SCROLL_RIGHT = nullptr;

void BasicScrollPaneUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicScrollPaneUI$Actions::actionPerformed($ActionEvent* e) {
	$var($JScrollPane, scrollPane, $cast($JScrollPane, $nc(e)->getSource()));
	bool ltr = $nc($($nc(scrollPane)->getComponentOrientation()))->isLeftToRight();
	$var($String, key, getName());
	if (key == BasicScrollPaneUI$Actions::SCROLL_UP) {
		scroll(scrollPane, $SwingConstants::VERTICAL, -1, true);
	} else if (key == BasicScrollPaneUI$Actions::SCROLL_DOWN) {
		scroll(scrollPane, $SwingConstants::VERTICAL, 1, true);
	} else if (key == BasicScrollPaneUI$Actions::SCROLL_HOME) {
		scrollHome(scrollPane);
	} else if (key == BasicScrollPaneUI$Actions::SCROLL_END) {
		scrollEnd(scrollPane);
	} else if (key == BasicScrollPaneUI$Actions::UNIT_SCROLL_UP) {
		scroll(scrollPane, $SwingConstants::VERTICAL, -1, false);
	} else if (key == BasicScrollPaneUI$Actions::UNIT_SCROLL_DOWN) {
		scroll(scrollPane, $SwingConstants::VERTICAL, 1, false);
	} else if (key == BasicScrollPaneUI$Actions::SCROLL_LEFT) {
		scroll(scrollPane, $SwingConstants::HORIZONTAL, ltr ? -1 : 1, true);
	} else if (key == BasicScrollPaneUI$Actions::SCROLL_RIGHT) {
		scroll(scrollPane, $SwingConstants::HORIZONTAL, ltr ? 1 : -1, true);
	} else if (key == BasicScrollPaneUI$Actions::UNIT_SCROLL_LEFT) {
		scroll(scrollPane, $SwingConstants::HORIZONTAL, ltr ? -1 : 1, false);
	} else if (key == BasicScrollPaneUI$Actions::UNIT_SCROLL_RIGHT) {
		scroll(scrollPane, $SwingConstants::HORIZONTAL, ltr ? 1 : -1, false);
	}
}

void BasicScrollPaneUI$Actions::scrollEnd($JScrollPane* scrollpane) {
	$var($JViewport, vp, $nc(scrollpane)->getViewport());
	$var($Component, view, nullptr);
	if (vp != nullptr && ($assign(view, vp->getView())) != nullptr) {
		$var($Rectangle, visRect, vp->getViewRect());
		$var($Rectangle, bounds, $nc(view)->getBounds());
		if ($nc($(scrollpane->getComponentOrientation()))->isLeftToRight()) {
			vp->setViewPosition($$new($Point, $nc(bounds)->width - $nc(visRect)->width, bounds->height - visRect->height));
		} else {
			vp->setViewPosition($$new($Point, 0, $nc(bounds)->height - $nc(visRect)->height));
		}
	}
}

void BasicScrollPaneUI$Actions::scrollHome($JScrollPane* scrollpane) {
	$var($JViewport, vp, $nc(scrollpane)->getViewport());
	$var($Component, view, nullptr);
	if (vp != nullptr && ($assign(view, vp->getView())) != nullptr) {
		if ($nc($(scrollpane->getComponentOrientation()))->isLeftToRight()) {
			vp->setViewPosition($$new($Point, 0, 0));
		} else {
			$var($Rectangle, visRect, vp->getViewRect());
			$var($Rectangle, bounds, $nc(view)->getBounds());
			vp->setViewPosition($$new($Point, $nc(bounds)->width - $nc(visRect)->width, 0));
		}
	}
}

void BasicScrollPaneUI$Actions::scroll($JScrollPane* scrollpane, int32_t orientation, int32_t direction, bool block) {
	$var($JViewport, vp, $nc(scrollpane)->getViewport());
	$var($Component, view, nullptr);
	if (vp != nullptr && ($assign(view, vp->getView())) != nullptr) {
		$var($Rectangle, visRect, vp->getViewRect());
		$var($Dimension, vSize, $nc(view)->getSize());
		int32_t amount = 0;
		if ($instanceOf($Scrollable, view)) {
			if (block) {
				amount = $nc(($cast($Scrollable, view)))->getScrollableBlockIncrement(visRect, orientation, direction);
			} else {
				amount = $nc(($cast($Scrollable, view)))->getScrollableUnitIncrement(visRect, orientation, direction);
			}
		} else if (block) {
			if (orientation == $SwingConstants::VERTICAL) {
				amount = $nc(visRect)->height;
			} else {
				amount = $nc(visRect)->width;
			}
		} else {
			amount = 10;
		}
		if (orientation == $SwingConstants::VERTICAL) {
			$nc(visRect)->y += (amount * direction);
			if ((visRect->y + visRect->height) > $nc(vSize)->height) {
				visRect->y = $Math::max(0, vSize->height - visRect->height);
			} else if (visRect->y < 0) {
				visRect->y = 0;
			}
		} else if ($nc($(scrollpane->getComponentOrientation()))->isLeftToRight()) {
			$nc(visRect)->x += (amount * direction);
			if ((visRect->x + visRect->width) > $nc(vSize)->width) {
				visRect->x = $Math::max(0, vSize->width - visRect->width);
			} else if (visRect->x < 0) {
				visRect->x = 0;
			}
		} else {
			$nc(visRect)->x -= (amount * direction);
			if (visRect->width > $nc(vSize)->width) {
				visRect->x = vSize->width - visRect->width;
			} else {
				visRect->x = $Math::max(0, $Math::min(vSize->width - visRect->width, visRect->x));
			}
		}
		vp->setViewPosition($($nc(visRect)->getLocation()));
	}
}

BasicScrollPaneUI$Actions::BasicScrollPaneUI$Actions() {
}

void clinit$BasicScrollPaneUI$Actions($Class* class$) {
	$assignStatic(BasicScrollPaneUI$Actions::SCROLL_UP, "scrollUp"_s);
	$assignStatic(BasicScrollPaneUI$Actions::SCROLL_DOWN, "scrollDown"_s);
	$assignStatic(BasicScrollPaneUI$Actions::SCROLL_HOME, "scrollHome"_s);
	$assignStatic(BasicScrollPaneUI$Actions::SCROLL_END, "scrollEnd"_s);
	$assignStatic(BasicScrollPaneUI$Actions::UNIT_SCROLL_UP, "unitScrollUp"_s);
	$assignStatic(BasicScrollPaneUI$Actions::UNIT_SCROLL_DOWN, "unitScrollDown"_s);
	$assignStatic(BasicScrollPaneUI$Actions::SCROLL_LEFT, "scrollLeft"_s);
	$assignStatic(BasicScrollPaneUI$Actions::SCROLL_RIGHT, "scrollRight"_s);
	$assignStatic(BasicScrollPaneUI$Actions::UNIT_SCROLL_LEFT, "unitScrollLeft"_s);
	$assignStatic(BasicScrollPaneUI$Actions::UNIT_SCROLL_RIGHT, "unitScrollRight"_s);
}

$Class* BasicScrollPaneUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$Actions, name, initialize, &_BasicScrollPaneUI$Actions_ClassInfo_, clinit$BasicScrollPaneUI$Actions, allocate$BasicScrollPaneUI$Actions);
	return class$;
}

$Class* BasicScrollPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax