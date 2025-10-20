#include <javax/swing/text/DefaultCaret$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument$UndoRedoDocumentEvent.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

#undef TRUE

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument$UndoRedoDocumentEvent = ::javax::swing::text::AbstractDocument$UndoRedoDocumentEvent;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Document = ::javax::swing::text::Document;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultCaret$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultCaret;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCaret$Handler, this$0)},
	{}
};

$MethodInfo _DefaultCaret$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/DefaultCaret;)V", nullptr, 0, $method(static_cast<void(DefaultCaret$Handler::*)($DefaultCaret*)>(&DefaultCaret$Handler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"lostOwnership", "(Ljava/awt/datatransfer/Clipboard;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultCaret$Handler_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultCaret$Handler", "javax.swing.text.DefaultCaret", "Handler", 0},
	{}
};

$ClassInfo _DefaultCaret$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultCaret$Handler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener,javax.swing.event.DocumentListener,java.awt.event.ActionListener,java.awt.datatransfer.ClipboardOwner",
	_DefaultCaret$Handler_FieldInfo_,
	_DefaultCaret$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultCaret$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultCaret"
};

$Object* allocate$DefaultCaret$Handler($Class* clazz) {
	return $of($alloc(DefaultCaret$Handler));
}

int32_t DefaultCaret$Handler::hashCode() {
	 return this->$PropertyChangeListener::hashCode();
}

bool DefaultCaret$Handler::equals(Object$* arg0) {
	 return this->$PropertyChangeListener::equals(arg0);
}

$Object* DefaultCaret$Handler::clone() {
	 return this->$PropertyChangeListener::clone();
}

$String* DefaultCaret$Handler::toString() {
	 return this->$PropertyChangeListener::toString();
}

void DefaultCaret$Handler::finalize() {
	this->$PropertyChangeListener::finalize();
}

void DefaultCaret$Handler::init$($DefaultCaret* this$0) {
	$set(this, this$0, this$0);
}

void DefaultCaret$Handler::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->width == 0 || this->this$0->height == 0) {
		if (this->this$0->component != nullptr) {
			$var($TextUI, mapper, $cast($TextUI, $nc(this->this$0->component)->getUI()));
			try {
				$var($Rectangle, r, $nc(mapper)->modelToView(this->this$0->component, this->this$0->dot, this->this$0->dotBias));
				if (r != nullptr && r->width != 0 && r->height != 0) {
					this->this$0->damage(r);
				}
			} catch ($BadLocationException&) {
				$catch();
			}
		}
	}
	this->this$0->visible = !this->this$0->visible;
	this->this$0->repaint();
}

void DefaultCaret$Handler::insertUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->getUpdatePolicy() == 1;
	if (!var$0) {
		bool var$1 = this->this$0->getUpdatePolicy() == 0;
		var$0 = (var$1 && !$SwingUtilities::isEventDispatchThread());
	}
	if (var$0) {
		bool var$2 = $nc(e)->getOffset() <= this->this$0->dot;
		if ((var$2 || $nc(e)->getOffset() <= this->this$0->mark) && this->this$0->selectionTag != nullptr) {
			try {
				$var($Object, var$3, this->this$0->selectionTag);
				int32_t var$4 = $Math::min(this->this$0->dot, this->this$0->mark);
				$nc($($nc(this->this$0->component)->getHighlighter()))->changeHighlight(var$3, var$4, $Math::max(this->this$0->dot, this->this$0->mark));
			} catch ($BadLocationException&) {
				$var($BadLocationException, e1, $catch());
				e1->printStackTrace();
			}
		}
		return;
	}
	int32_t offset = $nc(e)->getOffset();
	int32_t length = e->getLength();
	int32_t newDot = this->this$0->dot;
	int16_t changed = (int16_t)0;
	if ($instanceOf($AbstractDocument$UndoRedoDocumentEvent, e)) {
		this->this$0->setDot(offset + length);
		return;
	}
	if (newDot >= offset) {
		newDot += length;
		changed |= 1;
	}
	int32_t newMark = this->this$0->mark;
	if (newMark >= offset) {
		newMark += length;
		changed |= 2;
	}
	if (changed != 0) {
		$var($Position$Bias, dotBias, this->this$0->dotBias);
		if (this->this$0->dot == offset) {
			$var($Document, doc, $nc(this->this$0->component)->getDocument());
			bool isNewline = false;
			try {
				$var($Segment, s, $new($Segment));
				$nc(doc)->getText(newDot - 1, 1, s);
				isNewline = (s->count > 0 && $nc(s->array)->get(s->offset) == u'\n');
			} catch ($BadLocationException&) {
				$var($BadLocationException, ble, $catch());
				isNewline = false;
			}
			if (isNewline) {
				$init($Position$Bias);
				$assign(dotBias, $Position$Bias::Forward);
			} else {
				$init($Position$Bias);
				$assign(dotBias, $Position$Bias::Backward);
			}
		}
		if (newMark == newDot) {
			this->this$0->setDot(newDot, dotBias);
			this->this$0->ensureValidPosition();
		} else {
			this->this$0->setDot(newMark, this->this$0->markBias);
			if (this->this$0->getDot() == newMark) {
				this->this$0->moveDot(newDot, dotBias);
			}
			this->this$0->ensureValidPosition();
		}
	}
}

void DefaultCaret$Handler::removeUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->this$0->getUpdatePolicy() == 1;
	if (!var$0) {
		bool var$1 = this->this$0->getUpdatePolicy() == 0;
		var$0 = (var$1 && !$SwingUtilities::isEventDispatchThread());
	}
	if (var$0) {
		int32_t length = $nc($($nc(this->this$0->component)->getDocument()))->getLength();
		this->this$0->dot = $Math::min(this->this$0->dot, length);
		this->this$0->mark = $Math::min(this->this$0->mark, length);
		bool var$2 = $nc(e)->getOffset() < this->this$0->dot;
		if ((var$2 || $nc(e)->getOffset() < this->this$0->mark) && this->this$0->selectionTag != nullptr) {
			try {
				$var($Object, var$3, this->this$0->selectionTag);
				int32_t var$4 = $Math::min(this->this$0->dot, this->this$0->mark);
				$nc($($nc(this->this$0->component)->getHighlighter()))->changeHighlight(var$3, var$4, $Math::max(this->this$0->dot, this->this$0->mark));
			} catch ($BadLocationException&) {
				$var($BadLocationException, e1, $catch());
				e1->printStackTrace();
			}
		}
		return;
	}
	int32_t offs0 = $nc(e)->getOffset();
	int32_t offs1 = offs0 + e->getLength();
	int32_t newDot = this->this$0->dot;
	bool adjustDotBias = false;
	int32_t newMark = this->this$0->mark;
	bool adjustMarkBias = false;
	if ($instanceOf($AbstractDocument$UndoRedoDocumentEvent, e)) {
		this->this$0->setDot(offs0);
		return;
	}
	if (newDot >= offs1) {
		newDot -= (offs1 - offs0);
		if (newDot == offs1) {
			adjustDotBias = true;
		}
	} else if (newDot >= offs0) {
		newDot = offs0;
		adjustDotBias = true;
	}
	if (newMark >= offs1) {
		newMark -= (offs1 - offs0);
		if (newMark == offs1) {
			adjustMarkBias = true;
		}
	} else if (newMark >= offs0) {
		newMark = offs0;
		adjustMarkBias = true;
	}
	if (newMark == newDot) {
		this->this$0->forceCaretPositionChange = true;
		{
			$var($Throwable, var$5, nullptr);
			try {
				this->this$0->setDot(newDot, $(this->this$0->guessBiasForOffset(newDot, this->this$0->dotBias, this->this$0->dotLTR)));
			} catch ($Throwable&) {
				$assign(var$5, $catch());
			} /*finally*/ {
				this->this$0->forceCaretPositionChange = false;
			}
			if (var$5 != nullptr) {
				$throw(var$5);
			}
		}
		this->this$0->ensureValidPosition();
	} else {
		$var($Position$Bias, dotBias, this->this$0->dotBias);
		$var($Position$Bias, markBias, this->this$0->markBias);
		if (adjustDotBias) {
			$assign(dotBias, this->this$0->guessBiasForOffset(newDot, dotBias, this->this$0->dotLTR));
		}
		if (adjustMarkBias) {
			$assign(markBias, this->this$0->guessBiasForOffset(this->this$0->mark, markBias, this->this$0->markLTR));
		}
		this->this$0->setDot(newMark, markBias);
		if (this->this$0->getDot() == newMark) {
			this->this$0->moveDot(newDot, dotBias);
		}
		this->this$0->ensureValidPosition();
	}
}

void DefaultCaret$Handler::changedUpdate($DocumentEvent* e) {
	bool var$0 = this->this$0->getUpdatePolicy() == 1;
	if (!var$0) {
		bool var$1 = this->this$0->getUpdatePolicy() == 0;
		var$0 = (var$1 && !$SwingUtilities::isEventDispatchThread());
	}
	if (var$0) {
		return;
	}
	if ($instanceOf($AbstractDocument$UndoRedoDocumentEvent, e)) {
		int32_t var$2 = $nc(e)->getOffset();
		this->this$0->setDot(var$2 + e->getLength());
	}
}

void DefaultCaret$Handler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, $nc(evt)->getOldValue());
	$var($Object, newValue, evt->getNewValue());
	if (($instanceOf($Document, oldValue)) || ($instanceOf($Document, newValue))) {
		this->this$0->setDot(0);
		if (oldValue != nullptr) {
			$nc(($cast($Document, oldValue)))->removeDocumentListener(this);
		}
		if (newValue != nullptr) {
			$nc(($cast($Document, newValue)))->addDocumentListener(this);
		}
	} else if ("enabled"_s->equals($(evt->getPropertyName()))) {
		$var($Boolean, enabled, $cast($Boolean, evt->getNewValue()));
		if ($nc(this->this$0->component)->isFocusOwner()) {
			$init($Boolean);
			if (enabled == $Boolean::TRUE) {
				if ($nc(this->this$0->component)->isEditable()) {
					this->this$0->setVisible(true);
				}
				this->this$0->setSelectionVisible(true);
			} else {
				this->this$0->setVisible(false);
				this->this$0->setSelectionVisible(false);
			}
		}
	} else if ("caretWidth"_s->equals($(evt->getPropertyName()))) {
		$var($Integer, newWidth, $cast($Integer, evt->getNewValue()));
		if (newWidth != nullptr) {
			this->this$0->caretWidth = newWidth->intValue();
		} else {
			this->this$0->caretWidth = -1;
		}
		this->this$0->repaint();
	} else if ("caretAspectRatio"_s->equals($(evt->getPropertyName()))) {
		$var($Number, newRatio, $cast($Number, evt->getNewValue()));
		if (newRatio != nullptr) {
			this->this$0->aspectRatio = newRatio->floatValue();
		} else {
			this->this$0->aspectRatio = (float)-1;
		}
		this->this$0->repaint();
	}
}

void DefaultCaret$Handler::lostOwnership($Clipboard* clipboard, $Transferable* contents) {
	if (this->this$0->ownsSelection) {
		this->this$0->ownsSelection = false;
		if (this->this$0->component != nullptr && !$nc(this->this$0->component)->hasFocus()) {
			this->this$0->setSelectionVisible(false);
		}
	}
}

DefaultCaret$Handler::DefaultCaret$Handler() {
}

$Class* DefaultCaret$Handler::load$($String* name, bool initialize) {
	$loadClass(DefaultCaret$Handler, name, initialize, &_DefaultCaret$Handler_ClassInfo_, allocate$DefaultCaret$Handler);
	return class$;
}

$Class* DefaultCaret$Handler::class$ = nullptr;

		} // text
	} // swing
} // javax