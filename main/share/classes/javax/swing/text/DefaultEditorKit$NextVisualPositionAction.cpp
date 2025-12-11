#include <javax/swing/text/DefaultEditorKit$NextVisualPositionAction.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef NORTH
#undef SOUTH

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingConstants = ::javax::swing::SwingConstants;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$NextVisualPositionAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$NextVisualPositionAction, select)},
	{"direction", "I", nullptr, $PRIVATE, $field(DefaultEditorKit$NextVisualPositionAction, direction)},
	{}
};

$MethodInfo _DefaultEditorKit$NextVisualPositionAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ZI)V", nullptr, 0, $method(static_cast<void(DefaultEditorKit$NextVisualPositionAction::*)($String*,bool,int32_t)>(&DefaultEditorKit$NextVisualPositionAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$NextVisualPositionAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$NextVisualPositionAction", "javax.swing.text.DefaultEditorKit", "NextVisualPositionAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$NextVisualPositionAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$NextVisualPositionAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$NextVisualPositionAction_FieldInfo_,
	_DefaultEditorKit$NextVisualPositionAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$NextVisualPositionAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$NextVisualPositionAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$NextVisualPositionAction));
}

void DefaultEditorKit$NextVisualPositionAction::init$($String* nm, bool select, int32_t direction) {
	$TextAction::init$(nm);
	this->select = select;
	this->direction = direction;
}

void DefaultEditorKit$NextVisualPositionAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($Caret, caret, target->getCaret());
		$var($DefaultCaret, bidiCaret, ($instanceOf($DefaultCaret, caret)) ? $cast($DefaultCaret, caret) : ($DefaultCaret*)nullptr);
		int32_t dot = $nc(caret)->getDot();
		$var($Position$BiasArray, bias, $new($Position$BiasArray, 1));
		$var($Point, magicPosition, caret->getMagicCaretPosition());
		try {
			if (magicPosition == nullptr && (this->direction == $SwingConstants::NORTH || this->direction == $SwingConstants::SOUTH)) {
				$var($Rectangle, r, (bidiCaret != nullptr) ? $nc($($cast($TextUI, target->getUI())))->modelToView(target, dot, $($nc(bidiCaret)->getDotBias())) : target->modelToView(dot));
				$assign(magicPosition, $new($Point, $nc(r)->x, r->y));
			}
			$var($NavigationFilter, filter, target->getNavigationFilter());
			if (filter != nullptr) {
				$init($Position$Bias);
				dot = filter->getNextVisualPositionFrom(target, dot, (bidiCaret != nullptr) ? $($nc(bidiCaret)->getDotBias()) : $Position$Bias::Forward, this->direction, bias);
			} else {
				$init($Position$Bias);
				dot = $nc($($cast($TextUI, target->getUI())))->getNextVisualPositionFrom(target, dot, (bidiCaret != nullptr) ? $($nc(bidiCaret)->getDotBias()) : $Position$Bias::Forward, this->direction, bias);
			}
			if (bias->get(0) == nullptr) {
				$init($Position$Bias);
				bias->set(0, $Position$Bias::Forward);
			}
			if (bidiCaret != nullptr) {
				if (this->select) {
					bidiCaret->moveDot(dot, bias->get(0));
				} else {
					bidiCaret->setDot(dot, bias->get(0));
				}
			} else if (this->select) {
				caret->moveDot(dot);
			} else {
				caret->setDot(dot);
			}
			if (magicPosition != nullptr && (this->direction == $SwingConstants::NORTH || this->direction == $SwingConstants::SOUTH)) {
				$nc($(target->getCaret()))->setMagicCaretPosition(magicPosition);
			}
		} catch ($BadLocationException& ex) {
		}
	}
}

DefaultEditorKit$NextVisualPositionAction::DefaultEditorKit$NextVisualPositionAction() {
}

$Class* DefaultEditorKit$NextVisualPositionAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$NextVisualPositionAction, name, initialize, &_DefaultEditorKit$NextVisualPositionAction_ClassInfo_, allocate$DefaultEditorKit$NextVisualPositionAction);
	return class$;
}

$Class* DefaultEditorKit$NextVisualPositionAction::class$ = nullptr;

		} // text
	} // swing
} // javax