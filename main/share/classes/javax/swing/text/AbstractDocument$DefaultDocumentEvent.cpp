#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>

#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument$UndoRedoDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

#undef INSERT
#undef REMOVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $UIManager = ::javax::swing::UIManager;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$UndoRedoDocumentEvent = ::javax::swing::text::AbstractDocument$UndoRedoDocumentEvent;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$DefaultDocumentEvent_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$DefaultDocumentEvent, this$0)},
	{"offset", "I", nullptr, $PRIVATE, $field(AbstractDocument$DefaultDocumentEvent, offset)},
	{"length", "I", nullptr, $PRIVATE, $field(AbstractDocument$DefaultDocumentEvent, length)},
	{"changeLookup", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/text/Element;Ljavax/swing/event/DocumentEvent$ElementChange;>;", $PRIVATE, $field(AbstractDocument$DefaultDocumentEvent, changeLookup)},
	{"type", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PRIVATE, $field(AbstractDocument$DefaultDocumentEvent, type)},
	{}
};

$MethodInfo _AbstractDocument$DefaultDocumentEvent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/AbstractDocument;IILjavax/swing/event/DocumentEvent$EventType;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocument$DefaultDocumentEvent::*)($AbstractDocument*,int32_t,int32_t,$DocumentEvent$EventType*)>(&AbstractDocument$DefaultDocumentEvent::init$))},
	{"addEdit", "(Ljavax/swing/undo/UndoableEdit;)Z", nullptr, $PUBLIC},
	{"getChange", "(Ljavax/swing/text/Element;)Ljavax/swing/event/DocumentEvent$ElementChange;", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"getPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRedoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC},
	{"getUndoPresentationName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSignificant", "()Z", nullptr, $PUBLIC},
	{"redo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotRedoException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undo", "()V", nullptr, $PUBLIC, nullptr, "javax.swing.undo.CannotUndoException"},
	{}
};

$InnerClassInfo _AbstractDocument$DefaultDocumentEvent_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$DefaultDocumentEvent", "javax.swing.text.AbstractDocument", "DefaultDocumentEvent", $PUBLIC},
	{}
};

$ClassInfo _AbstractDocument$DefaultDocumentEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AbstractDocument$DefaultDocumentEvent",
	"javax.swing.undo.CompoundEdit",
	"javax.swing.event.DocumentEvent",
	_AbstractDocument$DefaultDocumentEvent_FieldInfo_,
	_AbstractDocument$DefaultDocumentEvent_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$DefaultDocumentEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$DefaultDocumentEvent($Class* clazz) {
	return $of($alloc(AbstractDocument$DefaultDocumentEvent));
}

int32_t AbstractDocument$DefaultDocumentEvent::hashCode() {
	 return this->$CompoundEdit::hashCode();
}

bool AbstractDocument$DefaultDocumentEvent::equals(Object$* arg0) {
	 return this->$CompoundEdit::equals(arg0);
}

$Object* AbstractDocument$DefaultDocumentEvent::clone() {
	 return this->$CompoundEdit::clone();
}

void AbstractDocument$DefaultDocumentEvent::finalize() {
	this->$CompoundEdit::finalize();
}

void AbstractDocument$DefaultDocumentEvent::init$($AbstractDocument* this$0, int32_t offs, int32_t len, $DocumentEvent$EventType* type) {
	$set(this, this$0, this$0);
	$CompoundEdit::init$();
	this->offset = offs;
	this->length = len;
	$set(this, type, type);
}

$String* AbstractDocument$DefaultDocumentEvent::toString() {
	return $nc(this->edits)->toString();
}

bool AbstractDocument$DefaultDocumentEvent::addEdit($UndoableEdit* anEdit) {
	$useLocalCurrentObjectStackCache();
	if ((this->changeLookup == nullptr) && ($nc(this->edits)->size() > 10)) {
		$set(this, changeLookup, $new($Hashtable));
		int32_t n = $nc(this->edits)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Object, o, $nc(this->edits)->elementAt(i));
			if ($instanceOf($DocumentEvent$ElementChange, o)) {
				$var($DocumentEvent$ElementChange, ec, $cast($DocumentEvent$ElementChange, o));
				$nc(this->changeLookup)->put($($nc(ec)->getElement()), ec);
			}
		}
	}
	if ((this->changeLookup != nullptr) && ($instanceOf($DocumentEvent$ElementChange, anEdit))) {
		$var($DocumentEvent$ElementChange, ec, $cast($DocumentEvent$ElementChange, anEdit));
		$nc(this->changeLookup)->put($($nc(ec)->getElement()), ec);
	}
	return $CompoundEdit::addEdit(anEdit);
}

void AbstractDocument$DefaultDocumentEvent::redo() {
	$useLocalCurrentObjectStackCache();
	this->this$0->writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$CompoundEdit::redo();
			$var($AbstractDocument$UndoRedoDocumentEvent, ev, $new($AbstractDocument$UndoRedoDocumentEvent, this->this$0, this, false));
			$init($DocumentEvent$EventType);
			if (this->type == $DocumentEvent$EventType::INSERT) {
				this->this$0->fireInsertUpdate(ev);
			} else {
				if (this->type == $DocumentEvent$EventType::REMOVE) {
					this->this$0->fireRemoveUpdate(ev);
				} else {
					this->this$0->fireChangedUpdate(ev);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->this$0->writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument$DefaultDocumentEvent::undo() {
	$useLocalCurrentObjectStackCache();
	this->this$0->writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$CompoundEdit::undo();
			$var($AbstractDocument$UndoRedoDocumentEvent, ev, $new($AbstractDocument$UndoRedoDocumentEvent, this->this$0, this, true));
			$init($DocumentEvent$EventType);
			if (this->type == $DocumentEvent$EventType::REMOVE) {
				this->this$0->fireInsertUpdate(ev);
			} else {
				if (this->type == $DocumentEvent$EventType::INSERT) {
					this->this$0->fireRemoveUpdate(ev);
				} else {
					this->this$0->fireChangedUpdate(ev);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->this$0->writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool AbstractDocument$DefaultDocumentEvent::isSignificant() {
	return true;
}

$String* AbstractDocument$DefaultDocumentEvent::getPresentationName() {
	$var($DocumentEvent$EventType, type, getType());
	$init($DocumentEvent$EventType);
	if (type == $DocumentEvent$EventType::INSERT) {
		return $UIManager::getString("AbstractDocument.additionText"_s);
	}
	if (type == $DocumentEvent$EventType::REMOVE) {
		return $UIManager::getString("AbstractDocument.deletionText"_s);
	}
	return $UIManager::getString("AbstractDocument.styleChangeText"_s);
}

$String* AbstractDocument$DefaultDocumentEvent::getUndoPresentationName() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($UIManager::getString("AbstractDocument.undoText"_s)), " "_s}));
	return $concat(var$0, $(getPresentationName()));
}

$String* AbstractDocument$DefaultDocumentEvent::getRedoPresentationName() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($UIManager::getString("AbstractDocument.redoText"_s)), " "_s}));
	return $concat(var$0, $(getPresentationName()));
}

$DocumentEvent$EventType* AbstractDocument$DefaultDocumentEvent::getType() {
	return this->type;
}

int32_t AbstractDocument$DefaultDocumentEvent::getOffset() {
	return this->offset;
}

int32_t AbstractDocument$DefaultDocumentEvent::getLength() {
	return this->length;
}

$Document* AbstractDocument$DefaultDocumentEvent::getDocument() {
	return this->this$0;
}

$DocumentEvent$ElementChange* AbstractDocument$DefaultDocumentEvent::getChange($Element* elem) {
	$useLocalCurrentObjectStackCache();
	if (this->changeLookup != nullptr) {
		return $cast($DocumentEvent$ElementChange, $nc(this->changeLookup)->get(elem));
	}
	int32_t n = $nc(this->edits)->size();
	for (int32_t i = 0; i < n; ++i) {
		$var($Object, o, $nc(this->edits)->elementAt(i));
		if ($instanceOf($DocumentEvent$ElementChange, o)) {
			$var($DocumentEvent$ElementChange, c, $cast($DocumentEvent$ElementChange, o));
			if ($nc($of(elem))->equals($($nc(c)->getElement()))) {
				return c;
			}
		}
	}
	return nullptr;
}

AbstractDocument$DefaultDocumentEvent::AbstractDocument$DefaultDocumentEvent() {
}

$Class* AbstractDocument$DefaultDocumentEvent::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$DefaultDocumentEvent, name, initialize, &_AbstractDocument$DefaultDocumentEvent_ClassInfo_, allocate$AbstractDocument$DefaultDocumentEvent);
	return class$;
}

$Class* AbstractDocument$DefaultDocumentEvent::class$ = nullptr;

		} // text
	} // swing
} // javax