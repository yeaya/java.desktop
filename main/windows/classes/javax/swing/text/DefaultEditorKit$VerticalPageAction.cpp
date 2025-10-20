#include <javax/swing/text/DefaultEditorKit$VerticalPageAction.h>

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
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef VERTICAL

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$VerticalPageAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$VerticalPageAction, select)},
	{"direction", "I", nullptr, $PRIVATE, $field(DefaultEditorKit$VerticalPageAction, direction)},
	{}
};

$MethodInfo _DefaultEditorKit$VerticalPageAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$VerticalPageAction::*)($String*,int32_t,bool)>(&DefaultEditorKit$VerticalPageAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"constrainOffset", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultEditorKit$VerticalPageAction::*)($JTextComponent*,int32_t)>(&DefaultEditorKit$VerticalPageAction::constrainOffset))},
	{"constrainY", "(Ljavax/swing/text/JTextComponent;II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultEditorKit$VerticalPageAction::*)($JTextComponent*,int32_t,int32_t)>(&DefaultEditorKit$VerticalPageAction::constrainY))},
	{"getAdjustedY", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Rectangle;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultEditorKit$VerticalPageAction::*)($JTextComponent*,$Rectangle*,int32_t)>(&DefaultEditorKit$VerticalPageAction::getAdjustedY))},
	{}
};

$InnerClassInfo _DefaultEditorKit$VerticalPageAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$VerticalPageAction", "javax.swing.text.DefaultEditorKit", "VerticalPageAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$VerticalPageAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$VerticalPageAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$VerticalPageAction_FieldInfo_,
	_DefaultEditorKit$VerticalPageAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$VerticalPageAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$VerticalPageAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$VerticalPageAction));
}

void DefaultEditorKit$VerticalPageAction::init$($String* nm, int32_t direction, bool select) {
	$TextAction::init$(nm);
	this->select = select;
	this->direction = direction;
}

void DefaultEditorKit$VerticalPageAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($Rectangle, visible, target->getVisibleRect());
		$var($Rectangle, newVis, $new($Rectangle, visible));
		int32_t selectedIndex = target->getCaretPosition();
		int32_t scrollAmount = this->direction * target->getScrollableBlockIncrement(visible, $SwingConstants::VERTICAL, this->direction);
		int32_t initialY = $nc(visible)->y;
		$var($Caret, caret, target->getCaret());
		$var($Point, magicPosition, $nc(caret)->getMagicCaretPosition());
		if (selectedIndex != -1) {
			try {
				$var($Rectangle, dotBounds, target->modelToView(selectedIndex));
				int32_t x = (magicPosition != nullptr) ? $nc(magicPosition)->x : $nc(dotBounds)->x;
				int32_t h = dotBounds->height;
				if (h > 0) {
					scrollAmount = $div(scrollAmount, h) * h;
				}
				newVis->y = constrainY(target, initialY + scrollAmount, visible->height);
				int32_t newIndex = 0;
				if (visible->contains(dotBounds->x, dotBounds->y)) {
					newIndex = target->viewToModel($$new($Point, x, constrainY(target, dotBounds->y + scrollAmount, 0)));
				} else if (this->direction == -1) {
					newIndex = target->viewToModel($$new($Point, x, newVis->y));
				} else {
					newIndex = target->viewToModel($$new($Point, x, newVis->y + visible->height));
				}
				newIndex = constrainOffset(target, newIndex);
				if (newIndex != selectedIndex) {
					int32_t newY = getAdjustedY(target, newVis, newIndex);
					if (this->direction == -1 && newY <= initialY || this->direction == 1 && newY >= initialY) {
						newVis->y = newY;
						if (this->select) {
							target->moveCaretPosition(newIndex);
						} else {
							target->setCaretPosition(newIndex);
						}
					}
				} else if (this->direction == -1 && newVis->y <= initialY || this->direction == 1 && newVis->y >= initialY) {
					newVis->y = initialY;
				}
			} catch ($BadLocationException&) {
				$catch();
			}
		} else {
			newVis->y = constrainY(target, initialY + scrollAmount, visible->height);
		}
		if (magicPosition != nullptr) {
			caret->setMagicCaretPosition(magicPosition);
		}
		target->scrollRectToVisible(newVis);
	}
}

int32_t DefaultEditorKit$VerticalPageAction::constrainY($JTextComponent* target, int32_t y, int32_t vis) {
	if (y < 0) {
		y = 0;
	} else if (y + vis > $nc(target)->getHeight()) {
		y = $Math::max(0, target->getHeight() - vis);
	}
	return y;
}

int32_t DefaultEditorKit$VerticalPageAction::constrainOffset($JTextComponent* text, int32_t offset) {
	$var($Document, doc, $nc(text)->getDocument());
	if ((offset != 0) && (offset > $nc(doc)->getLength())) {
		offset = doc->getLength();
	}
	if (offset < 0) {
		offset = 0;
	}
	return offset;
}

int32_t DefaultEditorKit$VerticalPageAction::getAdjustedY($JTextComponent* text, $Rectangle* visible, int32_t index) {
	int32_t result = $nc(visible)->y;
	try {
		$var($Rectangle, dotBounds, $nc(text)->modelToView(index));
		if ($nc(dotBounds)->y < visible->y) {
			result = dotBounds->y;
		} else if ((dotBounds->y > visible->y + visible->height) || (dotBounds->y + dotBounds->height > visible->y + visible->height)) {
			result = dotBounds->y + dotBounds->height - visible->height;
		}
	} catch ($BadLocationException&) {
		$catch();
	}
	return result;
}

DefaultEditorKit$VerticalPageAction::DefaultEditorKit$VerticalPageAction() {
}

$Class* DefaultEditorKit$VerticalPageAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$VerticalPageAction, name, initialize, &_DefaultEditorKit$VerticalPageAction_ClassInfo_, allocate$DefaultEditorKit$VerticalPageAction);
	return class$;
}

$Class* DefaultEditorKit$VerticalPageAction::class$ = nullptr;

		} // text
	} // swing
} // javax