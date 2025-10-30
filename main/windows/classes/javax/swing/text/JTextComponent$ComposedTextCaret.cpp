#include <javax/swing/text/JTextComponent$ComposedTextCaret.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/im/InputContext.h>
#include <java/lang/Runnable.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent$DoSetCaretPosition.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $InputContext = ::java::awt::im::InputContext;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$DoSetCaretPosition = ::javax::swing::text::JTextComponent$DoSetCaretPosition;
using $Position = ::javax::swing::text::Position;
using $StyledDocument = ::javax::swing::text::StyledDocument;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$ComposedTextCaret_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$ComposedTextCaret, this$0)},
	{"bg", "Ljava/awt/Color;", nullptr, 0, $field(JTextComponent$ComposedTextCaret, bg)},
	{}
};

$MethodInfo _JTextComponent$ComposedTextCaret_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(JTextComponent$ComposedTextCaret::*)($JTextComponent*)>(&JTextComponent$ComposedTextCaret::init$))},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"positionCaret", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JTextComponent$ComposedTextCaret_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$ComposedTextCaret", "javax.swing.text.JTextComponent", "ComposedTextCaret", 0},
	{}
};

$ClassInfo _JTextComponent$ComposedTextCaret_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$ComposedTextCaret",
	"javax.swing.text.DefaultCaret",
	nullptr,
	_JTextComponent$ComposedTextCaret_FieldInfo_,
	_JTextComponent$ComposedTextCaret_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$ComposedTextCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$ComposedTextCaret($Class* clazz) {
	return $of($alloc(JTextComponent$ComposedTextCaret));
}

void JTextComponent$ComposedTextCaret::init$($JTextComponent* this$0) {
	$set(this, this$0, this$0);
	$DefaultCaret::init$();
}

void JTextComponent$ComposedTextCaret::install($JTextComponent* c) {
	$useLocalCurrentObjectStackCache();
	$DefaultCaret::install(c);
	$var($Document, doc, $nc(c)->getDocument());
	if ($instanceOf($StyledDocument, doc)) {
		$var($StyledDocument, sDoc, $cast($StyledDocument, doc));
		$var($Element, elem, $nc(sDoc)->getCharacterElement($nc(c->composedTextStart)->getOffset()));
		$var($AttributeSet, attr, $nc(elem)->getAttributes());
		$set(this, bg, sDoc->getBackground(attr));
	}
	if (this->bg == nullptr) {
		$set(this, bg, c->getBackground());
	}
}

void JTextComponent$ComposedTextCaret::paint($Graphics* g) {
	if (isVisible()) {
		try {
			$var($Rectangle, r, $nc(this->component)->modelToView(getDot()));
			$nc(g)->setXORMode(this->bg);
			g->drawLine($nc(r)->x, r->y, r->x, r->y + r->height - 1);
			g->setPaintMode();
		} catch ($BadLocationException& e) {
		}
	}
}

void JTextComponent$ComposedTextCaret::positionCaret($MouseEvent* me) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, host, this->component);
	int32_t var$0 = $nc(me)->getX();
	$var($Point, pt, $new($Point, var$0, me->getY()));
	int32_t offset = $nc(host)->viewToModel(pt);
	int32_t composedStartIndex = $nc(host->composedTextStart)->getOffset();
	if ((offset < composedStartIndex) || (offset > $nc(this->this$0->composedTextEnd)->getOffset())) {
		try {
			$var($Position, newPos, $nc($(host->getDocument()))->createPosition(offset));
			$nc($(host->getInputContext()))->endComposition();
			$EventQueue::invokeLater($$new($JTextComponent$DoSetCaretPosition, this->this$0, host, newPos));
		} catch ($BadLocationException& ble) {
			$nc($System::err)->println($of(ble));
		}
	} else {
		$DefaultCaret::positionCaret(me);
	}
}

JTextComponent$ComposedTextCaret::JTextComponent$ComposedTextCaret() {
}

$Class* JTextComponent$ComposedTextCaret::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$ComposedTextCaret, name, initialize, &_JTextComponent$ComposedTextCaret_ClassInfo_, allocate$JTextComponent$ComposedTextCaret);
	return class$;
}

$Class* JTextComponent$ComposedTextCaret::class$ = nullptr;

		} // text
	} // swing
} // javax