#include <com/apple/laf/AquaCaret.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaHighlighter.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY
#undef TRUE

using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaHighlighter = ::com::apple::laf::AquaHighlighter;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $TextUI = ::javax::swing::plaf::TextUI;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Document = ::javax::swing::text::Document;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaCaret_FieldInfo_[] = {
	{"isMultiLineEditor", "Z", nullptr, $PRIVATE, $field(AquaCaret, isMultiLineEditor)},
	{"mFocused", "Z", nullptr, $PRIVATE, $field(AquaCaret, mFocused)},
	{"fPainting", "Z", nullptr, $PRIVATE, $field(AquaCaret, fPainting)},
	{"shouldSelectAllOnFocus", "Z", nullptr, $PRIVATE, $field(AquaCaret, shouldSelectAllOnFocus)},
	{}
};

$MethodInfo _AquaCaret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaCaret::*)()>(&AquaCaret::init$))},
	{"damage", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getSelectionPainter", "()Ljavax/swing/text/Highlighter$HighlightPainter;", nullptr, $PROTECTED},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AquaCaret_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaCaret",
	"javax.swing.text.DefaultCaret",
	"javax.swing.plaf.UIResource,java.beans.PropertyChangeListener",
	_AquaCaret_FieldInfo_,
	_AquaCaret_MethodInfo_
};

$Object* allocate$AquaCaret($Class* clazz) {
	return $of($alloc(AquaCaret));
}

bool AquaCaret::equals(Object$* obj) {
	 return this->$DefaultCaret::equals(obj);
}

$String* AquaCaret::toString() {
	 return this->$DefaultCaret::toString();
}

int32_t AquaCaret::hashCode() {
	 return this->$DefaultCaret::hashCode();
}

$Object* AquaCaret::clone() {
	 return this->$DefaultCaret::clone();
}

void AquaCaret::finalize() {
	this->$DefaultCaret::finalize();
}

void AquaCaret::init$() {
	$DefaultCaret::init$();
	this->mFocused = false;
	this->fPainting = false;
	this->shouldSelectAllOnFocus = true;
}

void AquaCaret::install($JTextComponent* c) {
	$DefaultCaret::install(c);
	this->isMultiLineEditor = $instanceOf($JTextArea, c) || $instanceOf($JEditorPane, c);
	$nc(c)->addPropertyChangeListener(this);
}

void AquaCaret::deinstall($JTextComponent* c) {
	$nc(c)->removePropertyChangeListener(this);
	$DefaultCaret::deinstall(c);
}

$Highlighter$HighlightPainter* AquaCaret::getSelectionPainter() {
	return $AquaHighlighter::getInstance();
}

void AquaCaret::setVisible(bool e) {
	if (e) {
		int32_t var$0 = getDot();
		e = var$0 == getMark();
	}
	$DefaultCaret::setVisible(e);
}

void AquaCaret::fireStateChanged() {
	if (this->mFocused) {
		setVisible($nc($(getComponent()))->isEditable());
	}
	$DefaultCaret::fireStateChanged();
}

void AquaCaret::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(evt)->getPropertyName());
	$init($AquaFocusHandler);
	if ($nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(propertyName)) {
		$var($JTextComponent, comp, $cast($JTextComponent, evt->getSource()));
		$init($Boolean);
		if ($equals(evt->getNewValue(), $Boolean::TRUE)) {
			setVisible($nc(comp)->hasFocus());
		} else {
			setVisible(false);
		}
		int32_t var$0 = getDot();
		if (var$0 != getMark()) {
			$var($JTextComponent, var$1, comp);
			int32_t var$2 = getDot();
			$nc($($cast($TextUI, $nc(comp)->getUI())))->damageRange(var$1, var$2, getMark());
		}
	}
}

void AquaCaret::focusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, component, getComponent());
	bool var$0 = !$nc(component)->isEnabled();
	if (var$0 || !$nc(component)->isEditable()) {
		$DefaultCaret::focusGained(e);
		return;
	}
	this->mFocused = true;
	if (!this->shouldSelectAllOnFocus) {
		this->shouldSelectAllOnFocus = true;
		$DefaultCaret::focusGained(e);
		return;
	}
	if (this->isMultiLineEditor) {
		$DefaultCaret::focusGained(e);
		return;
	}
	int32_t end = $nc($($nc(component)->getDocument()))->getLength();
	int32_t dot = getDot();
	int32_t mark = getMark();
	if (dot == mark) {
		if (dot == 0) {
			component->setCaretPosition(end);
			component->moveCaretPosition(0);
		} else if (dot == end) {
			component->setCaretPosition(0);
			component->moveCaretPosition(end);
		}
	}
	$DefaultCaret::focusGained(e);
}

void AquaCaret::focusLost($FocusEvent* e) {
	this->mFocused = false;
	this->shouldSelectAllOnFocus = true;
	if (this->isMultiLineEditor) {
		setVisible(false);
		$nc($(getComponent()))->repaint();
	} else {
		$DefaultCaret::focusLost(e);
	}
}

void AquaCaret::mousePressed($MouseEvent* e) {
	bool var$0 = !$nc(e)->isPopupTrigger();
	if (var$0) {
		bool var$1 = $SwingUtilities::isLeftMouseButton(e);
		var$0 = !(var$1 && e->getClickCount() == 3);
	}
	if (var$0) {
		$DefaultCaret::mousePressed(e);
		this->shouldSelectAllOnFocus = false;
	}
}

void AquaCaret::damage($Rectangle* r) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (r == nullptr || this->fPainting) {
			return;
		}
		this->x = $nc(r)->x - 4;
		this->y = r->y;
		this->width = 10;
		this->height = r->height;
		$var($Rectangle, caretRect, $new($Rectangle, this->x, this->y, this->width, this->height));
		$var($Border, border, $nc($(getComponent()))->getBorder());
		if (border != nullptr) {
			$var($Rectangle, alloc, $nc($(getComponent()))->getBounds());
			$nc(alloc)->x = (alloc->y = 0);
			$var($Insets, borderInsets, border->getBorderInsets($(getComponent())));
			alloc->x += $nc(borderInsets)->left;
			alloc->y += borderInsets->top;
			alloc->width -= borderInsets->left + borderInsets->right;
			alloc->height -= borderInsets->top + borderInsets->bottom;
			$Rectangle2D::intersect(caretRect, alloc, caretRect);
		}
		this->x = caretRect->x;
		this->y = caretRect->y;
		this->width = $Math::max(caretRect->width, 1);
		this->height = $Math::max(caretRect->height, 1);
		repaint();
	}
}

void AquaCaret::paint($Graphics* g) {
	if (isVisible()) {
		this->fPainting = true;
		$DefaultCaret::paint(g);
		this->fPainting = false;
	}
}

AquaCaret::AquaCaret() {
}

$Class* AquaCaret::load$($String* name, bool initialize) {
	$loadClass(AquaCaret, name, initialize, &_AquaCaret_ClassInfo_, allocate$AquaCaret);
	return class$;
}

$Class* AquaCaret::class$ = nullptr;

		} // laf
	} // apple
} // com