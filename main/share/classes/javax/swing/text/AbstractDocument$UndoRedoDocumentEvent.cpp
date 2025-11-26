#include <javax/swing/text/AbstractDocument$UndoRedoDocumentEvent.h>

#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

#undef INSERT
#undef REMOVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$UndoRedoDocumentEvent_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$UndoRedoDocumentEvent, this$0)},
	{"src", "Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;", nullptr, $PRIVATE, $field(AbstractDocument$UndoRedoDocumentEvent, src)},
	{"type", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PRIVATE, $field(AbstractDocument$UndoRedoDocumentEvent, type)},
	{}
};

$MethodInfo _AbstractDocument$UndoRedoDocumentEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Z)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocument$UndoRedoDocumentEvent::*)($AbstractDocument*,$AbstractDocument$DefaultDocumentEvent*,bool)>(&AbstractDocument$UndoRedoDocumentEvent::init$))},
	{"getChange", "(Ljavax/swing/text/Element;)Ljavax/swing/event/DocumentEvent$ElementChange;", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"getSource", "()Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;", nullptr, $PUBLIC},
	{"getType", "()Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDocument$UndoRedoDocumentEvent_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$UndoRedoDocumentEvent", "javax.swing.text.AbstractDocument", "UndoRedoDocumentEvent", 0},
	{}
};

$ClassInfo _AbstractDocument$UndoRedoDocumentEvent_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$UndoRedoDocumentEvent",
	"java.lang.Object",
	"javax.swing.event.DocumentEvent",
	_AbstractDocument$UndoRedoDocumentEvent_FieldInfo_,
	_AbstractDocument$UndoRedoDocumentEvent_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$UndoRedoDocumentEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$UndoRedoDocumentEvent($Class* clazz) {
	return $of($alloc(AbstractDocument$UndoRedoDocumentEvent));
}

void AbstractDocument$UndoRedoDocumentEvent::init$($AbstractDocument* this$0, $AbstractDocument$DefaultDocumentEvent* src, bool isUndo) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, src, nullptr);
	$set(this, type, nullptr);
	$set(this, src, src);
	if (isUndo) {
		$init($DocumentEvent$EventType);
		if ($nc($of($($nc(src)->getType())))->equals($DocumentEvent$EventType::INSERT)) {
			$set(this, type, $DocumentEvent$EventType::REMOVE);
		} else {
			if ($nc($of($(src->getType())))->equals($DocumentEvent$EventType::REMOVE)) {
				$set(this, type, $DocumentEvent$EventType::INSERT);
			} else {
				$set(this, type, src->getType());
			}
		}
	} else {
		$set(this, type, $nc(src)->getType());
	}
}

$AbstractDocument$DefaultDocumentEvent* AbstractDocument$UndoRedoDocumentEvent::getSource() {
	return this->src;
}

int32_t AbstractDocument$UndoRedoDocumentEvent::getOffset() {
	return $nc(this->src)->getOffset();
}

int32_t AbstractDocument$UndoRedoDocumentEvent::getLength() {
	return $nc(this->src)->getLength();
}

$Document* AbstractDocument$UndoRedoDocumentEvent::getDocument() {
	return $nc(this->src)->getDocument();
}

$DocumentEvent$EventType* AbstractDocument$UndoRedoDocumentEvent::getType() {
	return this->type;
}

$DocumentEvent$ElementChange* AbstractDocument$UndoRedoDocumentEvent::getChange($Element* elem) {
	return $nc(this->src)->getChange(elem);
}

AbstractDocument$UndoRedoDocumentEvent::AbstractDocument$UndoRedoDocumentEvent() {
}

$Class* AbstractDocument$UndoRedoDocumentEvent::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$UndoRedoDocumentEvent, name, initialize, &_AbstractDocument$UndoRedoDocumentEvent_ClassInfo_, allocate$AbstractDocument$UndoRedoDocumentEvent);
	return class$;
}

$Class* AbstractDocument$UndoRedoDocumentEvent::class$ = nullptr;

		} // text
	} // swing
} // javax