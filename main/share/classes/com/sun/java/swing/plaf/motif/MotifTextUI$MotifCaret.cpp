#include <com/sun/java/swing/plaf/motif/MotifTextUI$MotifCaret.h>

#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifTextUI$MotifCaret_FieldInfo_[] = {
	{"IBeamOverhang", "I", nullptr, $STATIC | $FINAL, $constField(MotifTextUI$MotifCaret, IBeamOverhang)},
	{}
};

$MethodInfo _MotifTextUI$MotifCaret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTextUI$MotifCaret::*)()>(&MotifTextUI$MotifCaret::init$))},
	{"damage", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifTextUI$MotifCaret_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret", "com.sun.java.swing.plaf.motif.MotifTextUI", "MotifCaret", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTextUI$MotifCaret_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret",
	"javax.swing.text.DefaultCaret",
	"javax.swing.plaf.UIResource",
	_MotifTextUI$MotifCaret_FieldInfo_,
	_MotifTextUI$MotifCaret_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTextUI$MotifCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTextUI"
};

$Object* allocate$MotifTextUI$MotifCaret($Class* clazz) {
	return $of($alloc(MotifTextUI$MotifCaret));
}

bool MotifTextUI$MotifCaret::equals(Object$* obj) {
	 return this->$DefaultCaret::equals(obj);
}

$String* MotifTextUI$MotifCaret::toString() {
	 return this->$DefaultCaret::toString();
}

int32_t MotifTextUI$MotifCaret::hashCode() {
	 return this->$DefaultCaret::hashCode();
}

$Object* MotifTextUI$MotifCaret::clone() {
	 return this->$DefaultCaret::clone();
}

void MotifTextUI$MotifCaret::finalize() {
	this->$DefaultCaret::finalize();
}

void MotifTextUI$MotifCaret::init$() {
	$DefaultCaret::init$();
}

void MotifTextUI$MotifCaret::focusGained($FocusEvent* e) {
	$DefaultCaret::focusGained(e);
	$nc($(getComponent()))->repaint();
}

void MotifTextUI$MotifCaret::focusLost($FocusEvent* e) {
	$DefaultCaret::focusLost(e);
	$nc($(getComponent()))->repaint();
}

void MotifTextUI$MotifCaret::damage($Rectangle* r) {
	if (r != nullptr) {
		this->x = r->x - MotifTextUI$MotifCaret::IBeamOverhang - 1;
		this->y = r->y;
		this->width = r->width + (2 * MotifTextUI$MotifCaret::IBeamOverhang) + 3;
		this->height = r->height;
		repaint();
	}
}

void MotifTextUI$MotifCaret::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (isVisible()) {
		try {
			$var($JTextComponent, c, getComponent());
			$var($Color, fg, $nc(c)->hasFocus() ? $nc(c)->getCaretColor() : c->getDisabledTextColor());
			$var($TextUI, mapper, $cast($TextUI, c->getUI()));
			int32_t dot = getDot();
			$var($Rectangle, r, $nc(mapper)->modelToView(c, dot));
			int32_t x0 = $nc(r)->x - MotifTextUI$MotifCaret::IBeamOverhang;
			int32_t x1 = r->x + MotifTextUI$MotifCaret::IBeamOverhang;
			int32_t y0 = r->y + 1;
			int32_t y1 = r->y + r->height - 2;
			$nc(g)->setColor(fg);
			g->drawLine(r->x, y0, r->x, y1);
			g->drawLine(x0, y0, x1, y0);
			g->drawLine(x0, y1, x1, y1);
		} catch ($BadLocationException& e) {
		}
	}
}

MotifTextUI$MotifCaret::MotifTextUI$MotifCaret() {
}

$Class* MotifTextUI$MotifCaret::load$($String* name, bool initialize) {
	$loadClass(MotifTextUI$MotifCaret, name, initialize, &_MotifTextUI$MotifCaret_ClassInfo_, allocate$MotifTextUI$MotifCaret);
	return class$;
}

$Class* MotifTextUI$MotifCaret::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com