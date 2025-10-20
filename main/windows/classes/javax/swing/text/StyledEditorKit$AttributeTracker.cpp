#include <javax/swing/text/StyledEditorKit$AttributeTracker.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $CaretListener = ::javax::swing::event::CaretListener;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyledEditorKit$AttributeTracker_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StyledEditorKit;", nullptr, $FINAL | $SYNTHETIC, $field(StyledEditorKit$AttributeTracker, this$0)},
	{}
};

$MethodInfo _StyledEditorKit$AttributeTracker_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/StyledEditorKit;)V", nullptr, 0, $method(static_cast<void(StyledEditorKit$AttributeTracker::*)($StyledEditorKit*)>(&StyledEditorKit$AttributeTracker::init$))},
	{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInputAttributes", "(IILjavax/swing/text/JTextComponent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _StyledEditorKit$AttributeTracker_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$AttributeTracker", "javax.swing.text.StyledEditorKit", "AttributeTracker", 0},
	{}
};

$ClassInfo _StyledEditorKit$AttributeTracker_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyledEditorKit$AttributeTracker",
	"java.lang.Object",
	"javax.swing.event.CaretListener,java.beans.PropertyChangeListener,java.io.Serializable",
	_StyledEditorKit$AttributeTracker_FieldInfo_,
	_StyledEditorKit$AttributeTracker_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$AttributeTracker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$AttributeTracker($Class* clazz) {
	return $of($alloc(StyledEditorKit$AttributeTracker));
}

int32_t StyledEditorKit$AttributeTracker::hashCode() {
	 return this->$CaretListener::hashCode();
}

bool StyledEditorKit$AttributeTracker::equals(Object$* arg0) {
	 return this->$CaretListener::equals(arg0);
}

$Object* StyledEditorKit$AttributeTracker::clone() {
	 return this->$CaretListener::clone();
}

$String* StyledEditorKit$AttributeTracker::toString() {
	 return this->$CaretListener::toString();
}

void StyledEditorKit$AttributeTracker::finalize() {
	this->$CaretListener::finalize();
}

void StyledEditorKit$AttributeTracker::init$($StyledEditorKit* this$0) {
	$set(this, this$0, this$0);
}

void StyledEditorKit$AttributeTracker::updateInputAttributes(int32_t dot, int32_t mark, $JTextComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Document, aDoc, $nc(c)->getDocument());
	if (!($instanceOf($StyledDocument, aDoc))) {
		return;
	}
	int32_t start = $Math::min(dot, mark);
	$var($StyledDocument, doc, $cast($StyledDocument, aDoc));
	$var($Element, run, nullptr);
	$set(this->this$0, currentParagraph, $nc(doc)->getParagraphElement(start));
	if ($nc(this->this$0->currentParagraph)->getStartOffset() == start || dot != mark) {
		$assign(run, doc->getCharacterElement(start));
	} else {
		$assign(run, doc->getCharacterElement($Math::max(start - 1, 0)));
	}
	if (run != this->this$0->currentRun) {
		$set(this->this$0, currentRun, run);
		this->this$0->createInputAttributes(this->this$0->currentRun, $(this->this$0->getInputAttributes()));
	}
}

void StyledEditorKit$AttributeTracker::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, newValue, $nc(evt)->getNewValue());
	$var($Object, source, evt->getSource());
	if (($instanceOf($JTextComponent, source)) && ($instanceOf($Document, newValue))) {
		updateInputAttributes(0, 0, $cast($JTextComponent, source));
	}
}

void StyledEditorKit$AttributeTracker::caretUpdate($CaretEvent* e) {
	int32_t var$0 = $nc(e)->getDot();
	int32_t var$1 = e->getMark();
	updateInputAttributes(var$0, var$1, $cast($JTextComponent, $(e->getSource())));
}

StyledEditorKit$AttributeTracker::StyledEditorKit$AttributeTracker() {
}

$Class* StyledEditorKit$AttributeTracker::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$AttributeTracker, name, initialize, &_StyledEditorKit$AttributeTracker_ClassInfo_, allocate$StyledEditorKit$AttributeTracker);
	return class$;
}

$Class* StyledEditorKit$AttributeTracker::class$ = nullptr;

		} // text
	} // swing
} // javax