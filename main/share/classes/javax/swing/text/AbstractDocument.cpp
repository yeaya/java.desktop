#include <javax/swing/text/AbstractDocument.h>

#include <java/awt/font/TextAttribute.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectInputValidation.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/Bidi.h>
#include <java/util/Dictionary.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/AbstractDocument$1.h>
#include <javax/swing/text/AbstractDocument$2.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$AttributeContext.h>
#include <javax/swing/text/AbstractDocument$BidiElement.h>
#include <javax/swing/text/AbstractDocument$BidiRootElement.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEventUndoableWrapper.h>
#include <javax/swing/text/AbstractDocument$DefaultFilterBypass.h>
#include <javax/swing/text/AbstractDocument$ElementEdit.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/DocumentFilter$FilterBypass.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <sun/font/BidiUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BAD_LOCATION
#undef BAD_LOCK_STATE
#undef CHANGE
#undef DIRECTION_DEFAULT_LEFT_TO_RIGHT
#undef DIRECTION_LEFT_TO_RIGHT
#undef DIRECTION_RIGHT_TO_LEFT
#undef DONE
#undef FALSE
#undef INSERT
#undef REMOVE
#undef RUN_DIRECTION
#undef RUN_DIRECTION_LTR
#undef RUN_DIRECTION_RTL
#undef TRUE

using $EventListenerArray = $Array<::java::util::EventListener>;
using $DocumentListenerArray = $Array<::javax::swing::event::DocumentListener>;
using $UndoableEditListenerArray = $Array<::javax::swing::event::UndoableEditListener>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectInputValidation = ::java::io::ObjectInputValidation;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Bidi = ::java::text::Bidi;
using $Dictionary = ::java::util::Dictionary;
using $EventListener = ::java::util::EventListener;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $AbstractDocument$1 = ::javax::swing::text::AbstractDocument$1;
using $AbstractDocument$2 = ::javax::swing::text::AbstractDocument$2;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AbstractDocument$AttributeContext = ::javax::swing::text::AbstractDocument$AttributeContext;
using $AbstractDocument$BidiElement = ::javax::swing::text::AbstractDocument$BidiElement;
using $AbstractDocument$BidiRootElement = ::javax::swing::text::AbstractDocument$BidiRootElement;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $AbstractDocument$DefaultDocumentEventUndoableWrapper = ::javax::swing::text::AbstractDocument$DefaultDocumentEventUndoableWrapper;
using $AbstractDocument$DefaultFilterBypass = ::javax::swing::text::AbstractDocument$DefaultFilterBypass;
using $AbstractDocument$ElementEdit = ::javax::swing::text::AbstractDocument$ElementEdit;
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $DocumentFilter$FilterBypass = ::javax::swing::text::DocumentFilter$FilterBypass;
using $Element = ::javax::swing::text::Element;
using $Position = ::javax::swing::text::Position;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $Utilities = ::javax::swing::text::Utilities;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;
using $BidiUtils = ::sun::font::BidiUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument_FieldInfo_[] = {
	{"numReaders", "I", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument, numReaders)},
	{"currWriter", "Ljava/lang/Thread;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument, currWriter)},
	{"numWriters", "I", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument, numWriters)},
	{"notifyingListeners", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument, notifyingListeners)},
	{"defaultI18NProperty", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocument, defaultI18NProperty)},
	{"documentProperties", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(AbstractDocument, documentProperties)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(AbstractDocument, listenerList)},
	{"data", "Ljavax/swing/text/AbstractDocument$Content;", nullptr, $PRIVATE, $field(AbstractDocument, data)},
	{"context", "Ljavax/swing/text/AbstractDocument$AttributeContext;", nullptr, $PRIVATE, $field(AbstractDocument, context)},
	{"bidiRoot", "Ljavax/swing/text/AbstractDocument$BranchElement;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument, bidiRoot)},
	{"documentFilter", "Ljavax/swing/text/DocumentFilter;", nullptr, $PRIVATE, $field(AbstractDocument, documentFilter)},
	{"filterBypass", "Ljavax/swing/text/DocumentFilter$FilterBypass;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument, filterBypass)},
	{"BAD_LOCK_STATE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractDocument, BAD_LOCK_STATE)},
	{"BAD_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractDocument, BAD_LOCATION)},
	{"ParagraphElementName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractDocument, ParagraphElementName)},
	{"ContentElementName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractDocument, ContentElementName)},
	{"SectionElementName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractDocument, SectionElementName)},
	{"BidiElementName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractDocument, BidiElementName)},
	{"ElementNameAttribute", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractDocument, ElementNameAttribute)},
	{"I18NProperty", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AbstractDocument, I18NProperty)},
	{"MultiByteProperty", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(AbstractDocument, MultiByteProperty)},
	{"AsyncLoadPriority", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AbstractDocument, AsyncLoadPriority)},
	{}
};

$MethodInfo _AbstractDocument_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getDefaultRootElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/AbstractDocument$Content;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDocument::*)($AbstractDocument$Content*)>(&AbstractDocument::init$))},
	{"<init>", "(Ljavax/swing/text/AbstractDocument$Content;Ljavax/swing/text/AbstractDocument$AttributeContext;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDocument::*)($AbstractDocument$Content*,$AbstractDocument$AttributeContext*)>(&AbstractDocument::init$))},
	{"addDocumentListener", "(Ljavax/swing/event/DocumentListener;)V", nullptr, $PUBLIC},
	{"addUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC},
	{"calculateBidiLevels", "(II)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(AbstractDocument::*)(int32_t,int32_t)>(&AbstractDocument::calculateBidiLevels))},
	{"createBranchElement", "(Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/Element;", nullptr, $PROTECTED},
	{"createLeafElement", "(Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;II)Ljavax/swing/text/Element;", nullptr, $PROTECTED},
	{"createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.swing.text.BadLocationException"},
	{"dump", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"fireChangedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PROTECTED},
	{"fireInsertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PROTECTED},
	{"fireRemoveUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PROTECTED},
	{"fireUndoableEditUpdate", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PROTECTED},
	{"getAsynchronousLoadPriority", "()I", nullptr, $PUBLIC},
	{"getAttributeContext", "()Ljavax/swing/text/AbstractDocument$AttributeContext;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$AbstractDocument$AttributeContext*(AbstractDocument::*)()>(&AbstractDocument::getAttributeContext))},
	{"getBidiRootElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getContent", "()Ljavax/swing/text/AbstractDocument$Content;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$AbstractDocument$Content*(AbstractDocument::*)()>(&AbstractDocument::getContent))},
	{"getCurrentWriter", "()Ljava/lang/Thread;", nullptr, $PROTECTED | $FINAL | $SYNCHRONIZED, $method(static_cast<$Thread*(AbstractDocument::*)()>(&AbstractDocument::getCurrentWriter))},
	{"getDocumentFilter", "()Ljavax/swing/text/DocumentFilter;", nullptr, $PUBLIC},
	{"getDocumentListeners", "()[Ljavax/swing/event/DocumentListener;", nullptr, $PUBLIC},
	{"getDocumentProperties", "()Ljava/util/Dictionary;", "()Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC},
	{"getEndPosition", "()Ljavax/swing/text/Position;", nullptr, $PUBLIC | $FINAL},
	{"getFilterBypass", "()Ljavax/swing/text/DocumentFilter$FilterBypass;", nullptr, $PRIVATE, $method(static_cast<$DocumentFilter$FilterBypass*(AbstractDocument::*)()>(&AbstractDocument::getFilterBypass))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"getRootElements", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getStartPosition", "()Ljavax/swing/text/Position;", nullptr, $PUBLIC | $FINAL},
	{"getText", "(II)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getText", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getUndoableEditListeners", "()[Ljavax/swing/event/UndoableEditListener;", nullptr, $PUBLIC},
	{"handleInsertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument::*)(int32_t,$String*,$AttributeSet*)>(&AbstractDocument::handleInsertString)), "javax.swing.text.BadLocationException"},
	{"handleRemove", "(II)V", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"insertUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED},
	{"isLeftToRight", "(Ljavax/swing/text/Document;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Document*,int32_t,int32_t)>(&AbstractDocument::isLeftToRight))},
	{"postRemoveUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PROTECTED},
	{"putProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL},
	{"readLock", "()V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractDocument::*)()>(&AbstractDocument::readLock))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument::*)($ObjectInputStream*)>(&AbstractDocument::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"readUnlock", "()V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractDocument::*)()>(&AbstractDocument::readUnlock))},
	{"remove", "(II)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"removeDocumentListener", "(Ljavax/swing/event/DocumentListener;)V", nullptr, $PUBLIC},
	{"removeUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PROTECTED},
	{"render", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"replace", "(IILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"setAsynchronousLoadPriority", "(I)V", nullptr, $PUBLIC},
	{"setDocumentFilter", "(Ljavax/swing/text/DocumentFilter;)V", nullptr, $PUBLIC},
	{"setDocumentProperties", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateBidi", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, 0},
	{"writeLock", "()V", nullptr, $PROTECTED | $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractDocument::*)()>(&AbstractDocument::writeLock))},
	{"writeUnlock", "()V", nullptr, $PROTECTED | $FINAL | $SYNCHRONIZED, $method(static_cast<void(AbstractDocument::*)()>(&AbstractDocument::writeUnlock))},
	{}
};

$InnerClassInfo _AbstractDocument_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$DefaultFilterBypass", "javax.swing.text.AbstractDocument", "DefaultFilterBypass", $PRIVATE},
	{"javax.swing.text.AbstractDocument$ElementEdit", "javax.swing.text.AbstractDocument", "ElementEdit", $PUBLIC | $STATIC},
	{"javax.swing.text.AbstractDocument$UndoRedoDocumentEvent", "javax.swing.text.AbstractDocument", "UndoRedoDocumentEvent", 0},
	{"javax.swing.text.AbstractDocument$DefaultDocumentEventUndoableWrapper", "javax.swing.text.AbstractDocument", "DefaultDocumentEventUndoableWrapper", 0},
	{"javax.swing.text.AbstractDocument$DefaultDocumentEvent", "javax.swing.text.AbstractDocument", "DefaultDocumentEvent", $PUBLIC},
	{"javax.swing.text.AbstractDocument$BidiElement", "javax.swing.text.AbstractDocument", "BidiElement", 0},
	{"javax.swing.text.AbstractDocument$BidiRootElement", "javax.swing.text.AbstractDocument", "BidiRootElement", 0},
	{"javax.swing.text.AbstractDocument$LeafElement", "javax.swing.text.AbstractDocument", "LeafElement", $PUBLIC},
	{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
	{"javax.swing.text.AbstractDocument$AbstractElement", "javax.swing.text.AbstractDocument", "AbstractElement", $PUBLIC | $ABSTRACT},
	{"javax.swing.text.AbstractDocument$AttributeContext", "javax.swing.text.AbstractDocument", "AttributeContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AbstractDocument$Content", "javax.swing.text.AbstractDocument", "Content", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AbstractDocument$2", nullptr, nullptr, 0},
	{"javax.swing.text.AbstractDocument$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDocument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.AbstractDocument",
	"java.lang.Object",
	"javax.swing.text.Document,java.io.Serializable",
	_AbstractDocument_FieldInfo_,
	_AbstractDocument_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument$DefaultFilterBypass,javax.swing.text.AbstractDocument$ElementEdit,javax.swing.text.AbstractDocument$UndoRedoDocumentEvent,javax.swing.text.AbstractDocument$DefaultDocumentEventUndoableWrapper,javax.swing.text.AbstractDocument$DefaultDocumentEvent,javax.swing.text.AbstractDocument$BidiElement,javax.swing.text.AbstractDocument$BidiRootElement,javax.swing.text.AbstractDocument$LeafElement,javax.swing.text.AbstractDocument$BranchElement,javax.swing.text.AbstractDocument$AbstractElement,javax.swing.text.AbstractDocument$AttributeContext,javax.swing.text.AbstractDocument$Content,javax.swing.text.AbstractDocument$2,javax.swing.text.AbstractDocument$1"
};

$Object* allocate$AbstractDocument($Class* clazz) {
	return $of($alloc(AbstractDocument));
}

int32_t AbstractDocument::hashCode() {
	 return this->$Document::hashCode();
}

bool AbstractDocument::equals(Object$* arg0) {
	 return this->$Document::equals(arg0);
}

$Object* AbstractDocument::clone() {
	 return this->$Document::clone();
}

$String* AbstractDocument::toString() {
	 return this->$Document::toString();
}

void AbstractDocument::finalize() {
	this->$Document::finalize();
}

$Boolean* AbstractDocument::defaultI18NProperty = nullptr;
$String* AbstractDocument::BAD_LOCK_STATE = nullptr;
$String* AbstractDocument::BAD_LOCATION = nullptr;
$String* AbstractDocument::ParagraphElementName = nullptr;
$String* AbstractDocument::ContentElementName = nullptr;
$String* AbstractDocument::SectionElementName = nullptr;
$String* AbstractDocument::BidiElementName = nullptr;
$String* AbstractDocument::ElementNameAttribute = nullptr;
$String* AbstractDocument::I18NProperty = nullptr;
$Object* AbstractDocument::MultiByteProperty = nullptr;
$String* AbstractDocument::AsyncLoadPriority = nullptr;

void AbstractDocument::init$($AbstractDocument$Content* data) {
	AbstractDocument::init$(data, $($StyleContext::getDefaultStyleContext()));
}

void AbstractDocument::init$($AbstractDocument$Content* data, $AbstractDocument$AttributeContext* context) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, documentProperties, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	$set(this, data, data);
	$set(this, context, context);
	$set(this, bidiRoot, $new($AbstractDocument$BidiRootElement, this));
	if (AbstractDocument::defaultI18NProperty == nullptr) {
		$var($String, o, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AbstractDocument$1, this)))));
		if (o != nullptr) {
			$assignStatic(AbstractDocument::defaultI18NProperty, $Boolean::valueOf(o));
		} else {
			$init($Boolean);
			$assignStatic(AbstractDocument::defaultI18NProperty, $Boolean::FALSE);
		}
	}
	putProperty(AbstractDocument::I18NProperty, AbstractDocument::defaultI18NProperty);
	writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ElementArray, p, $new($ElementArray, 1));
			p->set(0, $$new($AbstractDocument$BidiElement, this, this->bidiRoot, 0, 1, 0));
			$nc(this->bidiRoot)->replace(0, 0, p);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Dictionary* AbstractDocument::getDocumentProperties() {
	if (this->documentProperties == nullptr) {
		$set(this, documentProperties, $new($Hashtable, 2));
	}
	return this->documentProperties;
}

void AbstractDocument::setDocumentProperties($Dictionary* x) {
	$set(this, documentProperties, x);
}

void AbstractDocument::fireInsertUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->notifyingListeners = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
			for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
				$load($DocumentListener);
				if ($equals(listeners->get(i), $DocumentListener::class$)) {
					$nc(($cast($DocumentListener, listeners->get(i + 1))))->insertUpdate(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->notifyingListeners = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument::fireChangedUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->notifyingListeners = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
			for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
				$load($DocumentListener);
				if ($equals(listeners->get(i), $DocumentListener::class$)) {
					$nc(($cast($DocumentListener, listeners->get(i + 1))))->changedUpdate(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->notifyingListeners = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument::fireRemoveUpdate($DocumentEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->notifyingListeners = true;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
			for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
				$load($DocumentListener);
				if ($equals(listeners->get(i), $DocumentListener::class$)) {
					$nc(($cast($DocumentListener, listeners->get(i + 1))))->removeUpdate(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->notifyingListeners = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument::fireUndoableEditUpdate($UndoableEditEvent* e$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($UndoableEditEvent, e, e$renamed);
	if ($instanceOf($AbstractDocument$DefaultDocumentEvent, $($nc(e)->getEdit()))) {
		$var($Object, var$0, e->getSource());
		$assign(e, $new($UndoableEditEvent, var$0, static_cast<$UndoableEdit*>(static_cast<$AbstractUndoableEdit*>(static_cast<$CompoundEdit*>(static_cast<$AbstractDocument$DefaultDocumentEvent*>($$new($AbstractDocument$DefaultDocumentEventUndoableWrapper, this, $cast($AbstractDocument$DefaultDocumentEvent, $(e->getEdit())))))))));
	}
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($UndoableEditListener);
		if ($equals(listeners->get(i), $UndoableEditListener::class$)) {
			$nc(($cast($UndoableEditListener, listeners->get(i + 1))))->undoableEditHappened(e);
		}
	}
}

$EventListenerArray* AbstractDocument::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

int32_t AbstractDocument::getAsynchronousLoadPriority() {
	$var($Integer, loadPriority, $cast($Integer, getProperty(AbstractDocument::AsyncLoadPriority)));
	if (loadPriority != nullptr) {
		return loadPriority->intValue();
	}
	return -1;
}

void AbstractDocument::setAsynchronousLoadPriority(int32_t p) {
	$var($Integer, loadPriority, (p >= 0) ? $Integer::valueOf(p) : ($Integer*)nullptr);
	putProperty(AbstractDocument::AsyncLoadPriority, loadPriority);
}

void AbstractDocument::setDocumentFilter($DocumentFilter* filter) {
	$set(this, documentFilter, filter);
}

$DocumentFilter* AbstractDocument::getDocumentFilter() {
	return this->documentFilter;
}

void AbstractDocument::render($Runnable* r) {
	readLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(r)->run();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			readUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t AbstractDocument::getLength() {
	return $nc(this->data)->length() - 1;
}

void AbstractDocument::addDocumentListener($DocumentListener* listener) {
	$load($DocumentListener);
	$nc(this->listenerList)->add($DocumentListener::class$, listener);
}

void AbstractDocument::removeDocumentListener($DocumentListener* listener) {
	$load($DocumentListener);
	$nc(this->listenerList)->remove($DocumentListener::class$, listener);
}

$DocumentListenerArray* AbstractDocument::getDocumentListeners() {
	$load($DocumentListener);
	return $fcast($DocumentListenerArray, $nc(this->listenerList)->getListeners($DocumentListener::class$));
}

void AbstractDocument::addUndoableEditListener($UndoableEditListener* listener) {
	$load($UndoableEditListener);
	$nc(this->listenerList)->add($UndoableEditListener::class$, listener);
}

void AbstractDocument::removeUndoableEditListener($UndoableEditListener* listener) {
	$load($UndoableEditListener);
	$nc(this->listenerList)->remove($UndoableEditListener::class$, listener);
}

$UndoableEditListenerArray* AbstractDocument::getUndoableEditListeners() {
	$load($UndoableEditListener);
	return $fcast($UndoableEditListenerArray, $nc(this->listenerList)->getListeners($UndoableEditListener::class$));
}

$Object* AbstractDocument::getProperty(Object$* key) {
	return $of($nc($(getDocumentProperties()))->get(key));
}

void AbstractDocument::putProperty(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (value != nullptr) {
		$nc($(getDocumentProperties()))->put(key, value);
	} else {
		$nc($(getDocumentProperties()))->remove(key);
	}
	$init($TextAttribute);
	$init($Boolean);
	if ($equals(key, $TextAttribute::RUN_DIRECTION) && $nc($Boolean::TRUE)->equals($(getProperty(AbstractDocument::I18NProperty)))) {
		writeLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$init($DocumentEvent$EventType);
				$var($AbstractDocument$DefaultDocumentEvent, e, $new($AbstractDocument$DefaultDocumentEvent, this, 0, getLength(), $DocumentEvent$EventType::INSERT));
				updateBidi(e);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				writeUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void AbstractDocument::remove(int32_t offs, int32_t len) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentFilter, filter, getDocumentFilter());
	writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (filter != nullptr) {
				filter->remove($(getFilterBypass()), offs, len);
			} else {
				handleRemove(offs, len);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument::handleRemove(int32_t offs, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (len > 0) {
		if (offs < 0 || (offs + len) > getLength()) {
			$throwNew($BadLocationException, "Invalid remove"_s, getLength() + 1);
		}
		$init($DocumentEvent$EventType);
		$var($AbstractDocument$DefaultDocumentEvent, chng, $new($AbstractDocument$DefaultDocumentEvent, this, offs, len, $DocumentEvent$EventType::REMOVE));
		bool isComposedTextElement = false;
		isComposedTextElement = $Utilities::isComposedTextElement(this, offs);
		removeUpdate(chng);
		$var($UndoableEdit, u, $nc(this->data)->remove(offs, len));
		if (u != nullptr) {
			chng->addEdit(u);
		}
		postRemoveUpdate(chng);
		chng->end();
		fireRemoveUpdate(chng);
		if ((u != nullptr) && !isComposedTextElement) {
			fireUndoableEditUpdate($$new($UndoableEditEvent, this, chng));
		}
	}
}

void AbstractDocument::replace(int32_t offset, int32_t length, $String* text, $AttributeSet* attrs) {
	$useLocalCurrentObjectStackCache();
	if (length == 0 && (text == nullptr || $nc(text)->length() == 0)) {
		return;
	}
	$var($DocumentFilter, filter, getDocumentFilter());
	writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (filter != nullptr) {
				filter->replace($(getFilterBypass()), offset, length, text, attrs);
			} else {
				if (length > 0) {
					remove(offset, length);
				}
				if (text != nullptr && text->length() > 0) {
					insertString(offset, text, attrs);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument::insertString(int32_t offs, $String* str, $AttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	if ((str == nullptr) || ($nc(str)->length() == 0)) {
		return;
	}
	if (offs > getLength()) {
		$throwNew($BadLocationException, "Invalid insert"_s, getLength());
	}
	$var($DocumentFilter, filter, getDocumentFilter());
	writeLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (filter != nullptr) {
				filter->insertString($(getFilterBypass()), offs, str, a);
			} else {
				handleInsertString(offs, str, a);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AbstractDocument::handleInsertString(int32_t offs, $String* str, $AttributeSet* a) {
	$useLocalCurrentObjectStackCache();
	if ((str == nullptr) || ($nc(str)->length() == 0)) {
		return;
	}
	$var($UndoableEdit, u, $nc(this->data)->insertString(offs, str));
	$init($DocumentEvent$EventType);
	$var($AbstractDocument$DefaultDocumentEvent, e, $new($AbstractDocument$DefaultDocumentEvent, this, offs, $nc(str)->length(), $DocumentEvent$EventType::INSERT));
	if (u != nullptr) {
		e->addEdit(u);
	}
	$init($Boolean);
	if ($nc($of($(getProperty(AbstractDocument::I18NProperty))))->equals($Boolean::FALSE)) {
		$init($TextAttribute);
		$var($Object, d, getProperty($TextAttribute::RUN_DIRECTION));
		if ((d != nullptr) && ($of(d)->equals($TextAttribute::RUN_DIRECTION_RTL))) {
			putProperty(AbstractDocument::I18NProperty, $Boolean::TRUE);
		} else {
			$var($chars, chars, $nc(str)->toCharArray());
			if ($SwingUtilities2::isComplexLayout(chars, 0, chars->length)) {
				putProperty(AbstractDocument::I18NProperty, $Boolean::TRUE);
			}
		}
	}
	insertUpdate(e, a);
	e->end();
	fireInsertUpdate(e);
	$init($StyleConstants);
	if (u != nullptr && (a == nullptr || !$nc(a)->isDefined($StyleConstants::ComposedTextAttribute))) {
		fireUndoableEditUpdate($$new($UndoableEditEvent, this, e));
	}
}

$String* AbstractDocument::getText(int32_t offset, int32_t length) {
	if (length < 0) {
		$throwNew($BadLocationException, "Length must be positive"_s, length);
	}
	$var($String, str, $nc(this->data)->getString(offset, length));
	return str;
}

void AbstractDocument::getText(int32_t offset, int32_t length, $Segment* txt) {
	if (length < 0) {
		$throwNew($BadLocationException, "Length must be positive"_s, length);
	}
	$nc(this->data)->getChars(offset, length, txt);
}

$Position* AbstractDocument::createPosition(int32_t offs) {
	$synchronized(this) {
		return $nc(this->data)->createPosition(offs);
	}
}

$Position* AbstractDocument::getStartPosition() {
	$var($Position, p, nullptr);
	try {
		$assign(p, createPosition(0));
	} catch ($BadLocationException& bl) {
		$assign(p, nullptr);
	}
	return p;
}

$Position* AbstractDocument::getEndPosition() {
	$var($Position, p, nullptr);
	try {
		$assign(p, createPosition($nc(this->data)->length()));
	} catch ($BadLocationException& bl) {
		$assign(p, nullptr);
	}
	return p;
}

$ElementArray* AbstractDocument::getRootElements() {
	$useLocalCurrentObjectStackCache();
	$var($ElementArray, elems, $new($ElementArray, 2));
	elems->set(0, $(getDefaultRootElement()));
	elems->set(1, $(getBidiRootElement()));
	return elems;
}

$DocumentFilter$FilterBypass* AbstractDocument::getFilterBypass() {
	if (this->filterBypass == nullptr) {
		$set(this, filterBypass, $new($AbstractDocument$DefaultFilterBypass, this));
	}
	return this->filterBypass;
}

$Element* AbstractDocument::getBidiRootElement() {
	return this->bidiRoot;
}

bool AbstractDocument::isLeftToRight($Document* doc, int32_t p0, int32_t p1) {
	$init(AbstractDocument);
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	if ($nc($Boolean::TRUE)->equals($($nc(doc)->getProperty(AbstractDocument::I18NProperty)))) {
		if ($instanceOf(AbstractDocument, doc)) {
			$var(AbstractDocument, adoc, $cast(AbstractDocument, doc));
			$var($Element, bidiRoot, $nc(adoc)->getBidiRootElement());
			int32_t index = $nc(bidiRoot)->getElementIndex(p0);
			$var($Element, bidiElem, bidiRoot->getElement(index));
			if ($nc(bidiElem)->getEndOffset() >= p1) {
				$var($AttributeSet, bidiAttrs, bidiElem->getAttributes());
				return (($StyleConstants::getBidiLevel(bidiAttrs) % 2) == 0);
			}
		}
	}
	return true;
}

$AbstractDocument$AttributeContext* AbstractDocument::getAttributeContext() {
	return this->context;
}

void AbstractDocument::insertUpdate($AbstractDocument$DefaultDocumentEvent* chng, $AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	if ($nc($of($(getProperty(AbstractDocument::I18NProperty))))->equals($Boolean::TRUE)) {
		updateBidi(chng);
	}
	$init($DocumentEvent$EventType);
	bool var$0 = $nc(chng)->type == $DocumentEvent$EventType::INSERT && chng->getLength() > 0;
	if (var$0 && !$nc($Boolean::TRUE)->equals($(getProperty(AbstractDocument::MultiByteProperty)))) {
		$var($Segment, segment, $SegmentCache::getSharedSegment());
		try {
			int32_t var$1 = chng->getOffset();
			getText(var$1, chng->getLength(), segment);
			$nc(segment)->first();
			do {
				if ((int32_t)segment->current() > 255) {
					putProperty(AbstractDocument::MultiByteProperty, $Boolean::TRUE);
					break;
				}
			} while (segment->next() != $Segment::DONE);
		} catch ($BadLocationException& ble) {
		}
		$SegmentCache::releaseSharedSegment(segment);
	}
}

void AbstractDocument::removeUpdate($AbstractDocument$DefaultDocumentEvent* chng) {
}

void AbstractDocument::postRemoveUpdate($AbstractDocument$DefaultDocumentEvent* chng) {
	$init($Boolean);
	if ($nc($of($(getProperty(AbstractDocument::I18NProperty))))->equals($Boolean::TRUE)) {
		updateBidi(chng);
	}
}

void AbstractDocument::updateBidi($AbstractDocument$DefaultDocumentEvent* chng) {
	$useLocalCurrentObjectStackCache();
	int32_t firstPStart = 0;
	int32_t lastPEnd = 0;
	$init($DocumentEvent$EventType);
	if ($nc(chng)->type == $DocumentEvent$EventType::INSERT || $nc(chng)->type == $DocumentEvent$EventType::CHANGE) {
		int32_t chngStart = chng->getOffset();
		int32_t chngEnd = chngStart + chng->getLength();
		firstPStart = $nc($(getParagraphElement(chngStart)))->getStartOffset();
		lastPEnd = $nc($(getParagraphElement(chngEnd)))->getEndOffset();
	} else {
		if (chng->type == $DocumentEvent$EventType::REMOVE) {
			$var($Element, paragraph, getParagraphElement(chng->getOffset()));
			firstPStart = $nc(paragraph)->getStartOffset();
			lastPEnd = paragraph->getEndOffset();
		} else {
			$throwNew($Error, "Internal error: unknown event type."_s);
		}
	}
	$var($bytes, levels, calculateBidiLevels(firstPStart, lastPEnd));
	$var($Vector, newElements, $new($Vector));
	int32_t firstSpanStart = firstPStart;
	int32_t removeFromIndex = 0;
	if (firstSpanStart > 0) {
		int32_t prevElemIndex = $nc(this->bidiRoot)->getElementIndex(firstPStart - 1);
		removeFromIndex = prevElemIndex;
		$var($Element, prevElem, $nc(this->bidiRoot)->getElement(prevElemIndex));
		int32_t prevLevel = $StyleConstants::getBidiLevel($($nc(prevElem)->getAttributes()));
		if (prevLevel == $nc(levels)->get(0)) {
			firstSpanStart = $nc(prevElem)->getStartOffset();
		} else if ($nc(prevElem)->getEndOffset() > firstPStart) {
			newElements->addElement($$new($AbstractDocument$BidiElement, this, this->bidiRoot, prevElem->getStartOffset(), firstPStart, prevLevel));
		} else {
			++removeFromIndex;
		}
	}
	int32_t firstSpanEnd = 0;
	while ((firstSpanEnd < $nc(levels)->length) && (levels->get(firstSpanEnd) == levels->get(0))) {
		++firstSpanEnd;
	}
	int32_t lastSpanEnd = lastPEnd;
	$var($Element, newNextElem, nullptr);
	int32_t removeToIndex = $nc(this->bidiRoot)->getElementCount() - 1;
	if (lastSpanEnd <= getLength()) {
		int32_t nextElemIndex = $nc(this->bidiRoot)->getElementIndex(lastPEnd);
		removeToIndex = nextElemIndex;
		$var($Element, nextElem, $nc(this->bidiRoot)->getElement(nextElemIndex));
		int32_t nextLevel = $StyleConstants::getBidiLevel($($nc(nextElem)->getAttributes()));
		if (nextLevel == $nc(levels)->get(levels->length - 1)) {
			lastSpanEnd = $nc(nextElem)->getEndOffset();
		} else if ($nc(nextElem)->getStartOffset() < lastPEnd) {
			$assign(newNextElem, $new($AbstractDocument$BidiElement, this, this->bidiRoot, lastPEnd, nextElem->getEndOffset(), nextLevel));
		} else {
			--removeToIndex;
		}
	}
	int32_t lastSpanStart = $nc(levels)->length;
	while ((lastSpanStart > firstSpanEnd) && (levels->get(lastSpanStart - 1) == levels->get(levels->length - 1))) {
		--lastSpanStart;
	}
	if ((firstSpanEnd == lastSpanStart) && (levels->get(0) == levels->get(levels->length - 1))) {
		newElements->addElement($$new($AbstractDocument$BidiElement, this, this->bidiRoot, firstSpanStart, lastSpanEnd, levels->get(0)));
	} else {
		newElements->addElement($$new($AbstractDocument$BidiElement, this, this->bidiRoot, firstSpanStart, firstSpanEnd + firstPStart, levels->get(0)));
		for (int32_t i = firstSpanEnd; i < lastSpanStart;) {
			int32_t j = 0;
			for (j = i; (j < levels->length) && (levels->get(j) == levels->get(i)); ++j) {
			}
			newElements->addElement($$new($AbstractDocument$BidiElement, this, this->bidiRoot, firstPStart + i, firstPStart + j, (int32_t)levels->get(i)));
			i = j;
		}
		newElements->addElement($$new($AbstractDocument$BidiElement, this, this->bidiRoot, lastSpanStart + firstPStart, lastSpanEnd, levels->get(levels->length - 1)));
	}
	if (newNextElem != nullptr) {
		newElements->addElement(newNextElem);
	}
	int32_t removedElemCount = 0;
	if ($nc(this->bidiRoot)->getElementCount() > 0) {
		removedElemCount = removeToIndex - removeFromIndex + 1;
	}
	$var($ElementArray, removedElems, $new($ElementArray, removedElemCount));
	for (int32_t i = 0; i < removedElemCount; ++i) {
		removedElems->set(i, $($nc(this->bidiRoot)->getElement(removeFromIndex + i)));
	}
	$var($ElementArray, addedElems, $new($ElementArray, newElements->size()));
	newElements->copyInto(addedElems);
	$var($AbstractDocument$ElementEdit, ee, $new($AbstractDocument$ElementEdit, this->bidiRoot, removeFromIndex, removedElems, addedElems));
	$nc(chng)->addEdit(ee);
	$nc(this->bidiRoot)->replace(removeFromIndex, removedElems->length, addedElems);
}

$bytes* AbstractDocument::calculateBidiLevels(int32_t firstPStart, int32_t lastPEnd) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, levels, $new($bytes, lastPEnd - firstPStart));
	int32_t levelsEnd = 0;
	$var($Boolean, defaultDirection, nullptr);
	$init($TextAttribute);
	$var($Object, d, getProperty($TextAttribute::RUN_DIRECTION));
	if ($instanceOf($Boolean, d)) {
		$assign(defaultDirection, $cast($Boolean, d));
	}
	for (int32_t o = firstPStart; o < lastPEnd;) {
		$var($Element, p, getParagraphElement(o));
		int32_t pStart = $nc(p)->getStartOffset();
		int32_t pEnd = p->getEndOffset();
		$var($Boolean, direction, defaultDirection);
		$assign(d, $nc($(p->getAttributes()))->getAttribute($TextAttribute::RUN_DIRECTION));
		if ($instanceOf($Boolean, d)) {
			$assign(direction, $cast($Boolean, d));
		}
		$var($Segment, seg, $SegmentCache::getSharedSegment());
		try {
			getText(pStart, pEnd - pStart, seg);
		} catch ($BadLocationException& e) {
			$throwNew($Error, $$str({"Internal error: "_s, $(e->toString())}));
		}
		$var($Bidi, bidiAnalyzer, nullptr);
		int32_t bidiflag = $Bidi::DIRECTION_DEFAULT_LEFT_TO_RIGHT;
		if (direction != nullptr) {
			if ($nc($TextAttribute::RUN_DIRECTION_LTR)->equals(direction)) {
				bidiflag = $Bidi::DIRECTION_LEFT_TO_RIGHT;
			} else {
				bidiflag = $Bidi::DIRECTION_RIGHT_TO_LEFT;
			}
		}
		$assign(bidiAnalyzer, $new($Bidi, $nc(seg)->array, seg->offset, nullptr, 0, seg->count, bidiflag));
		$BidiUtils::getLevels(bidiAnalyzer, levels, levelsEnd);
		levelsEnd += bidiAnalyzer->getLength();
		o = p->getEndOffset();
		$SegmentCache::releaseSharedSegment(seg);
	}
	if (levelsEnd != levels->length) {
		$throwNew($Error, "levelsEnd assertion failed."_s);
	}
	return levels;
}

void AbstractDocument::dump($PrintStream* out) {
	$var($Element, root, getDefaultRootElement());
	if ($instanceOf($AbstractDocument$AbstractElement, root)) {
		$nc(($cast($AbstractDocument$AbstractElement, root)))->dump(out, 0);
	}
	$nc(this->bidiRoot)->dump(out, 0);
}

$AbstractDocument$Content* AbstractDocument::getContent() {
	return this->data;
}

$Element* AbstractDocument::createLeafElement($Element* parent, $AttributeSet* a, int32_t p0, int32_t p1) {
	return $new($AbstractDocument$LeafElement, this, parent, a, p0, p1);
}

$Element* AbstractDocument::createBranchElement($Element* parent, $AttributeSet* a) {
	return $new($AbstractDocument$BranchElement, this, parent, a);
}

$Thread* AbstractDocument::getCurrentWriter() {
	$synchronized(this) {
		return this->currWriter;
	}
}

void AbstractDocument::writeLock() {
	$synchronized(this) {
		try {
			while ((this->numReaders > 0) || (this->currWriter != nullptr)) {
				if ($Thread::currentThread() == this->currWriter) {
					if (this->notifyingListeners) {
						$throwNew($IllegalStateException, "Attempt to mutate in notification"_s);
					}
					++this->numWriters;
					return;
				}
				$of(this)->wait();
			}
			$set(this, currWriter, $Thread::currentThread());
			this->numWriters = 1;
		} catch ($InterruptedException& e) {
			$throwNew($Error, "Interrupted attempt to acquire write lock"_s);
		}
	}
}

void AbstractDocument::writeUnlock() {
	$synchronized(this) {
		if (--this->numWriters <= 0) {
			this->numWriters = 0;
			$set(this, currWriter, nullptr);
			$of(this)->notifyAll();
		}
	}
}

void AbstractDocument::readLock() {
	$synchronized(this) {
		try {
			while (this->currWriter != nullptr) {
				if (this->currWriter == $Thread::currentThread()) {
					return;
				}
				$of(this)->wait();
			}
			this->numReaders += 1;
		} catch ($InterruptedException& e) {
			$throwNew($Error, "Interrupted attempt to acquire read lock"_s);
		}
	}
}

void AbstractDocument::readUnlock() {
	$synchronized(this) {
		if (this->currWriter == $Thread::currentThread()) {
			return;
		}
		if (this->numReaders <= 0) {
			$throwNew($StateInvariantError, AbstractDocument::BAD_LOCK_STATE);
		}
		this->numReaders -= 1;
		$of(this)->notify();
	}
}

void AbstractDocument::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, documentProperties, $cast($Dictionary, $nc(f)->get("documentProperties"_s, ($Object*)nullptr)));
	$set(this, listenerList, $new($EventListenerList));
	$set(this, data, $cast($AbstractDocument$Content, f->get("data"_s, ($Object*)nullptr)));
	$set(this, context, $cast($AbstractDocument$AttributeContext, f->get("context"_s, ($Object*)nullptr)));
	$set(this, documentFilter, $cast($DocumentFilter, f->get("documentFilter"_s, ($Object*)nullptr)));
	$set(this, bidiRoot, $new($AbstractDocument$BidiRootElement, this));
	{
		$var($Throwable, var$0, nullptr);
		try {
			writeLock();
			$var($ElementArray, p, $new($ElementArray, 1));
			p->set(0, $$new($AbstractDocument$BidiElement, this, this->bidiRoot, 0, 1, 0));
			$nc(this->bidiRoot)->replace(0, 0, p);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	s->registerValidation($$new($AbstractDocument$2, this), 0);
}

void clinit$AbstractDocument($Class* class$) {
	$assignStatic(AbstractDocument::BAD_LOCK_STATE, "document lock failure"_s);
	$assignStatic(AbstractDocument::BAD_LOCATION, "document location failure"_s);
	$assignStatic(AbstractDocument::ParagraphElementName, "paragraph"_s);
	$assignStatic(AbstractDocument::ContentElementName, "content"_s);
	$assignStatic(AbstractDocument::SectionElementName, "section"_s);
	$assignStatic(AbstractDocument::BidiElementName, "bidi level"_s);
	$assignStatic(AbstractDocument::ElementNameAttribute, "$ename"_s);
	$assignStatic(AbstractDocument::I18NProperty, "i18n"_s);
	$assignStatic(AbstractDocument::AsyncLoadPriority, "load priority"_s);
	$assignStatic(AbstractDocument::MultiByteProperty, "multiByte"_s);
}

AbstractDocument::AbstractDocument() {
}

$Class* AbstractDocument::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument, name, initialize, &_AbstractDocument_ClassInfo_, clinit$AbstractDocument, allocate$AbstractDocument);
	return class$;
}

$Class* AbstractDocument::class$ = nullptr;

		} // text
	} // swing
} // javax