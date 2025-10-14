#include <javax/swing/text/DefaultEditorKit$PageAction.h>

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
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultEditorKit$PageAction_FieldInfo_[] = {
	{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$PageAction, select)},
	{"left", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$PageAction, left)},
	{}
};

$MethodInfo _DefaultEditorKit$PageAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$PageAction::*)($String*,bool,bool)>(&DefaultEditorKit$PageAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$PageAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$PageAction", "javax.swing.text.DefaultEditorKit", "PageAction", $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$PageAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$PageAction",
	"javax.swing.text.TextAction",
	nullptr,
	_DefaultEditorKit$PageAction_FieldInfo_,
	_DefaultEditorKit$PageAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$PageAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$PageAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$PageAction));
}

void DefaultEditorKit$PageAction::init$($String* nm, bool left, bool select) {
	$TextAction::init$(nm);
	this->select = select;
	this->left = left;
}

void DefaultEditorKit$PageAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		int32_t selectedIndex = 0;
		$var($Rectangle, visible, $new($Rectangle));
		target->computeVisibleRect(visible);
		if (this->left) {
			visible->x = $Math::max(0, visible->x - visible->width);
		} else {
			visible->x += visible->width;
		}
		selectedIndex = target->getCaretPosition();
		if (selectedIndex != -1) {
			if (this->left) {
				selectedIndex = target->viewToModel($$new($Point, visible->x, visible->y));
			} else {
				selectedIndex = target->viewToModel($$new($Point, visible->x + visible->width - 1, visible->y + visible->height - 1));
			}
			$var($Document, doc, target->getDocument());
			if ((selectedIndex != 0) && (selectedIndex > ($nc(doc)->getLength() - 1))) {
				selectedIndex = doc->getLength() - 1;
			} else if (selectedIndex < 0) {
				selectedIndex = 0;
			}
			if (this->select) {
				target->moveCaretPosition(selectedIndex);
			} else {
				target->setCaretPosition(selectedIndex);
			}
		}
	}
}

DefaultEditorKit$PageAction::DefaultEditorKit$PageAction() {
}

$Class* DefaultEditorKit$PageAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$PageAction, name, initialize, &_DefaultEditorKit$PageAction_ClassInfo_, allocate$DefaultEditorKit$PageAction);
	return class$;
}

$Class* DefaultEditorKit$PageAction::class$ = nullptr;

		} // text
	} // swing
} // javax