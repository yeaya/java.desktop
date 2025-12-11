#include <javax/swing/text/DefaultStyledDocument.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/font/TextAttribute.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Runnable.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument$AttributeContext.h>
#include <javax/swing/text/AbstractDocument$BranchElement.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument$ElementEdit.h>
#include <javax/swing/text/AbstractDocument$LeafElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultStyledDocument$AbstractChangeHandler.h>
#include <javax/swing/text/DefaultStyledDocument$AttributeUndoableEdit.h>
#include <javax/swing/text/DefaultStyledDocument$ChangeUpdateRunnable.h>
#include <javax/swing/text/DefaultStyledDocument$ElementBuffer.h>
#include <javax/swing/text/DefaultStyledDocument$ElementSpec.h>
#include <javax/swing/text/DefaultStyledDocument$SectionElement.h>
#include <javax/swing/text/DefaultStyledDocument$StyleChangeHandler.h>
#include <javax/swing/text/DefaultStyledDocument$StyleChangeUndoableEdit.h>
#include <javax/swing/text/DefaultStyledDocument$StyleContextChangeHandler.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/undo/AbstractUndoableEdit.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

#undef BUFFER_SIZE_DEFAULT
#undef CHANGE
#undef DEFAULT_STYLE
#undef EMPTY
#undef INSERT
#undef REMOVE
#undef RUN_DIRECTION
#undef TRUE

using $DefaultStyledDocument$ElementSpecArray = $Array<::javax::swing::text::DefaultStyledDocument$ElementSpec>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AbstractDocument$AttributeContext = ::javax::swing::text::AbstractDocument$AttributeContext;
using $AbstractDocument$BranchElement = ::javax::swing::text::AbstractDocument$BranchElement;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $AbstractDocument$ElementEdit = ::javax::swing::text::AbstractDocument$ElementEdit;
using $AbstractDocument$LeafElement = ::javax::swing::text::AbstractDocument$LeafElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultStyledDocument$AbstractChangeHandler = ::javax::swing::text::DefaultStyledDocument$AbstractChangeHandler;
using $DefaultStyledDocument$AttributeUndoableEdit = ::javax::swing::text::DefaultStyledDocument$AttributeUndoableEdit;
using $DefaultStyledDocument$ChangeUpdateRunnable = ::javax::swing::text::DefaultStyledDocument$ChangeUpdateRunnable;
using $DefaultStyledDocument$ElementBuffer = ::javax::swing::text::DefaultStyledDocument$ElementBuffer;
using $DefaultStyledDocument$ElementSpec = ::javax::swing::text::DefaultStyledDocument$ElementSpec;
using $DefaultStyledDocument$SectionElement = ::javax::swing::text::DefaultStyledDocument$SectionElement;
using $DefaultStyledDocument$StyleChangeHandler = ::javax::swing::text::DefaultStyledDocument$StyleChangeHandler;
using $DefaultStyledDocument$StyleChangeUndoableEdit = ::javax::swing::text::DefaultStyledDocument$StyleChangeUndoableEdit;
using $DefaultStyledDocument$StyleContextChangeHandler = ::javax::swing::text::DefaultStyledDocument$StyleContextChangeHandler;
using $Element = ::javax::swing::text::Element;
using $GapContent = ::javax::swing::text::GapContent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Position = ::javax::swing::text::Position;
using $Segment = ::javax::swing::text::Segment;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $Utilities = ::javax::swing::text::Utilities;
using $AbstractUndoableEdit = ::javax::swing::undo::AbstractUndoableEdit;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument_FieldInfo_[] = {
	{"BUFFER_SIZE_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultStyledDocument, BUFFER_SIZE_DEFAULT)},
	{"buffer", "Ljavax/swing/text/DefaultStyledDocument$ElementBuffer;", nullptr, $PROTECTED, $field(DefaultStyledDocument, buffer)},
	{"listeningStyles", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/Style;>;", $PRIVATE | $TRANSIENT, $field(DefaultStyledDocument, listeningStyles)},
	{"styleChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultStyledDocument, styleChangeListener)},
	{"styleContextChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultStyledDocument, styleContextChangeListener)},
	{"updateRunnable", "Ljavax/swing/text/DefaultStyledDocument$ChangeUpdateRunnable;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultStyledDocument, updateRunnable)},
	{}
};

$MethodInfo _DefaultStyledDocument_MethodInfo_[] = {
	{"*addUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*createPosition", "(I)Ljavax/swing/text/Position;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getEndPosition", "()Ljavax/swing/text/Position;", nullptr, $PUBLIC | $FINAL},
	{"*getLength", "()I", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"*getRootElements", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"*getStartPosition", "()Ljavax/swing/text/Position;", nullptr, $PUBLIC | $FINAL},
	{"*getText", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getText", "(IILjavax/swing/text/Segment;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/AbstractDocument$Content;Ljavax/swing/text/StyleContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument::*)($AbstractDocument$Content*,$StyleContext*)>(&DefaultStyledDocument::init$))},
	{"<init>", "(Ljavax/swing/text/StyleContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument::*)($StyleContext*)>(&DefaultStyledDocument::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultStyledDocument::*)()>(&DefaultStyledDocument::init$))},
	{"addDocumentListener", "(Ljavax/swing/event/DocumentListener;)V", nullptr, $PUBLIC},
	{"addStyle", "(Ljava/lang/String;Ljavax/swing/text/Style;)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"create", "([Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, $PROTECTED},
	{"createDefaultRoot", "()Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PROTECTED},
	{"createSpecsForInsertAfterNewline", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;Ljava/util/Vector;II)S", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;Ljava/util/Vector<Ljavax/swing/text/DefaultStyledDocument$ElementSpec;>;II)S", 0},
	{"createStyleChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, 0},
	{"createStyleContextChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, 0},
	{"getBackground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getCharacterElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getDefaultRootElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getFont", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getForeground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getLogicalStyle", "(I)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"getStyleNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"insert", "(I[Ljavax/swing/text/DefaultStyledDocument$ElementSpec;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"*insertString", "(ILjava/lang/String;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED},
	{"*putProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultStyledDocument::*)($ObjectInputStream*)>(&DefaultStyledDocument::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"*remove", "(II)V", nullptr, $PUBLIC},
	{"removeDocumentListener", "(Ljavax/swing/event/DocumentListener;)V", nullptr, $PUBLIC},
	{"removeElement", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC},
	{"removeElementImpl", "(Ljavax/swing/text/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultStyledDocument::*)($Element*)>(&DefaultStyledDocument::removeElementImpl))},
	{"removeStyle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*removeUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/text/AbstractDocument$DefaultDocumentEvent;)V", nullptr, $PROTECTED},
	{"*render", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC},
	{"setCharacterAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC},
	{"setLogicalStyle", "(ILjavax/swing/text/Style;)V", nullptr, $PUBLIC},
	{"setParagraphAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC},
	{"styleChanged", "(Ljavax/swing/text/Style;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateStylesListeningTo", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultStyledDocument_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable", "javax.swing.text.DefaultStyledDocument", "ChangeUpdateRunnable", 0},
	{"javax.swing.text.DefaultStyledDocument$StyleContextChangeHandler", "javax.swing.text.DefaultStyledDocument", "StyleContextChangeHandler", $STATIC},
	{"javax.swing.text.DefaultStyledDocument$StyleChangeHandler", "javax.swing.text.DefaultStyledDocument", "StyleChangeHandler", $STATIC},
	{"javax.swing.text.DefaultStyledDocument$AbstractChangeHandler", "javax.swing.text.DefaultStyledDocument", "AbstractChangeHandler", $STATIC | $ABSTRACT},
	{"javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit", "javax.swing.text.DefaultStyledDocument", "StyleChangeUndoableEdit", $STATIC},
	{"javax.swing.text.DefaultStyledDocument$AttributeUndoableEdit", "javax.swing.text.DefaultStyledDocument", "AttributeUndoableEdit", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultStyledDocument$ElementBuffer", "javax.swing.text.DefaultStyledDocument", "ElementBuffer", $PUBLIC},
	{"javax.swing.text.DefaultStyledDocument$ElementSpec", "javax.swing.text.DefaultStyledDocument", "ElementSpec", $PUBLIC | $STATIC},
	{"javax.swing.text.DefaultStyledDocument$SectionElement", "javax.swing.text.DefaultStyledDocument", "SectionElement", $PROTECTED},
	{}
};

$ClassInfo _DefaultStyledDocument_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument",
	"javax.swing.text.AbstractDocument",
	"javax.swing.text.StyledDocument",
	_DefaultStyledDocument_FieldInfo_,
	_DefaultStyledDocument_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable,javax.swing.text.DefaultStyledDocument$StyleContextChangeHandler,javax.swing.text.DefaultStyledDocument$StyleChangeHandler,javax.swing.text.DefaultStyledDocument$AbstractChangeHandler,javax.swing.text.DefaultStyledDocument$AbstractChangeHandler$DocReference,javax.swing.text.DefaultStyledDocument$StyleChangeUndoableEdit,javax.swing.text.DefaultStyledDocument$AttributeUndoableEdit,javax.swing.text.DefaultStyledDocument$ElementBuffer,javax.swing.text.DefaultStyledDocument$ElementBuffer$ElemChanges,javax.swing.text.DefaultStyledDocument$ElementSpec,javax.swing.text.DefaultStyledDocument$SectionElement"
};

$Object* allocate$DefaultStyledDocument($Class* clazz) {
	return $of($alloc(DefaultStyledDocument));
}

void DefaultStyledDocument::render($Runnable* r) {
	this->$AbstractDocument::render(r);
}

int32_t DefaultStyledDocument::getLength() {
	 return this->$AbstractDocument::getLength();
}

void DefaultStyledDocument::addUndoableEditListener($UndoableEditListener* listener) {
	this->$AbstractDocument::addUndoableEditListener(listener);
}

void DefaultStyledDocument::removeUndoableEditListener($UndoableEditListener* listener) {
	this->$AbstractDocument::removeUndoableEditListener(listener);
}

$Object* DefaultStyledDocument::getProperty(Object$* key) {
	 return this->$AbstractDocument::getProperty(key);
}

void DefaultStyledDocument::putProperty(Object$* key, Object$* value) {
	this->$AbstractDocument::putProperty(key, value);
}

void DefaultStyledDocument::remove(int32_t offs, int32_t len) {
	this->$AbstractDocument::remove(offs, len);
}

void DefaultStyledDocument::insertString(int32_t offs, $String* str, $AttributeSet* a) {
	this->$AbstractDocument::insertString(offs, str, a);
}

$String* DefaultStyledDocument::getText(int32_t offset, int32_t length) {
	 return this->$AbstractDocument::getText(offset, length);
}

void DefaultStyledDocument::getText(int32_t offset, int32_t length, $Segment* txt) {
	this->$AbstractDocument::getText(offset, length, txt);
}

$Position* DefaultStyledDocument::createPosition(int32_t offs) {
	 return this->$AbstractDocument::createPosition(offs);
}

$Position* DefaultStyledDocument::getStartPosition() {
	 return this->$AbstractDocument::getStartPosition();
}

$Position* DefaultStyledDocument::getEndPosition() {
	 return this->$AbstractDocument::getEndPosition();
}

$ElementArray* DefaultStyledDocument::getRootElements() {
	 return this->$AbstractDocument::getRootElements();
}

int32_t DefaultStyledDocument::hashCode() {
	 return this->$AbstractDocument::hashCode();
}

bool DefaultStyledDocument::equals(Object$* arg0) {
	 return this->$AbstractDocument::equals(arg0);
}

$Object* DefaultStyledDocument::clone() {
	 return this->$AbstractDocument::clone();
}

$String* DefaultStyledDocument::toString() {
	 return this->$AbstractDocument::toString();
}

void DefaultStyledDocument::finalize() {
	this->$AbstractDocument::finalize();
}

void DefaultStyledDocument::init$($AbstractDocument$Content* c, $StyleContext* styles) {
	$useLocalCurrentObjectStackCache();
	$AbstractDocument::init$(c, styles);
	$set(this, listeningStyles, $new($Vector));
	$set(this, buffer, $new($DefaultStyledDocument$ElementBuffer, this, $(createDefaultRoot())));
	$init($StyleContext);
	$var($Style, defaultStyle, $nc(styles)->getStyle($StyleContext::DEFAULT_STYLE));
	setLogicalStyle(0, defaultStyle);
}

void DefaultStyledDocument::init$($StyleContext* styles) {
	DefaultStyledDocument::init$($$new($GapContent, DefaultStyledDocument::BUFFER_SIZE_DEFAULT), styles);
}

void DefaultStyledDocument::init$() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractDocument$Content, var$0, static_cast<$AbstractDocument$Content*>($new($GapContent, DefaultStyledDocument::BUFFER_SIZE_DEFAULT)));
	DefaultStyledDocument::init$(var$0, $$new($StyleContext));
}

$Element* DefaultStyledDocument::getDefaultRootElement() {
	return $nc(this->buffer)->getRootElement();
}

void DefaultStyledDocument::create($DefaultStyledDocument$ElementSpecArray* data) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (getLength() != 0) {
					remove(0, getLength());
				}
				writeLock();
				$var($AbstractDocument$Content, c, getContent());
				int32_t n = $nc(data)->length;
				$var($StringBuilder, sb, $new($StringBuilder));
				for (int32_t i = 0; i < n; ++i) {
					$var($DefaultStyledDocument$ElementSpec, es, data->get(i));
					if ($nc(es)->getLength() > 0) {
						$var($chars, var$1, es->getArray());
						int32_t var$2 = es->getOffset();
						sb->append(var$1, var$2, es->getLength());
					}
				}
				$var($UndoableEdit, cEdit, $nc(c)->insertString(0, $(sb->toString())));
				int32_t length = sb->length();
				$init($DocumentEvent$EventType);
				$var($AbstractDocument$DefaultDocumentEvent, evnt, $new($AbstractDocument$DefaultDocumentEvent, this, 0, length, $DocumentEvent$EventType::INSERT));
				evnt->addEdit(cEdit);
				$nc(this->buffer)->create(length, data, evnt);
				$AbstractDocument::insertUpdate(evnt, nullptr);
				evnt->end();
				fireInsertUpdate(evnt);
				fireUndoableEditUpdate($$new($UndoableEditEvent, this, evnt));
			} catch ($BadLocationException& ble) {
				$throwNew($StateInvariantError, "problem initializing"_s);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DefaultStyledDocument::insert(int32_t offset, $DefaultStyledDocument$ElementSpecArray* data) {
	$useLocalCurrentObjectStackCache();
	if (data == nullptr || $nc(data)->length == 0) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			writeLock();
			$var($AbstractDocument$Content, c, getContent());
			int32_t n = $nc(data)->length;
			$var($StringBuilder, sb, $new($StringBuilder));
			for (int32_t i = 0; i < n; ++i) {
				$var($DefaultStyledDocument$ElementSpec, es, data->get(i));
				if ($nc(es)->getLength() > 0) {
					$var($chars, var$2, es->getArray());
					int32_t var$3 = es->getOffset();
					sb->append(var$2, var$3, es->getLength());
				}
			}
			if (sb->length() == 0) {
				return$1 = true;
				goto $finally;
			}
			$var($UndoableEdit, cEdit, $nc(c)->insertString(offset, $(sb->toString())));
			int32_t length = sb->length();
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, evnt, $new($AbstractDocument$DefaultDocumentEvent, this, offset, length, $DocumentEvent$EventType::INSERT));
			evnt->addEdit(cEdit);
			$nc(this->buffer)->insert(offset, length, data, evnt);
			$AbstractDocument::insertUpdate(evnt, nullptr);
			evnt->end();
			fireInsertUpdate(evnt);
			fireUndoableEditUpdate($$new($UndoableEditEvent, this, evnt));
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void DefaultStyledDocument::removeElement($Element* elem) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			writeLock();
			removeElementImpl(elem);
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

void DefaultStyledDocument::removeElementImpl($Element* elem$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, elem$renamed);
	if (!$equals($nc(elem)->getDocument(), this)) {
		$throwNew($IllegalArgumentException, "element doesn\'t belong to document"_s);
	}
	$var($AbstractDocument$BranchElement, parent, $cast($AbstractDocument$BranchElement, $nc(elem)->getParentElement()));
	if (parent == nullptr) {
		$throwNew($IllegalArgumentException, "can\'t remove the root element"_s);
	}
	int32_t startOffset = elem->getStartOffset();
	int32_t removeFrom = startOffset;
	int32_t endOffset = elem->getEndOffset();
	int32_t removeTo = endOffset;
	int32_t lastEndOffset = getLength() + 1;
	$var($AbstractDocument$Content, content, getContent());
	bool atEnd = false;
	bool isComposedText = $Utilities::isComposedTextElement(elem);
	if (endOffset >= lastEndOffset) {
		if (startOffset <= 0) {
			$throwNew($IllegalArgumentException, "can\'t remove the whole content"_s);
		}
		removeTo = lastEndOffset - 1;
		try {
			if ($nc($($nc(content)->getString(startOffset - 1, 1)))->charAt(0) == u'\n') {
				--removeFrom;
			}
		} catch ($BadLocationException& ble) {
			$throwNew($IllegalStateException, static_cast<$Throwable*>(ble));
		}
		atEnd = true;
	}
	int32_t length = removeTo - removeFrom;
	$init($DocumentEvent$EventType);
	$var($AbstractDocument$DefaultDocumentEvent, dde, $new($AbstractDocument$DefaultDocumentEvent, this, removeFrom, length, $DocumentEvent$EventType::REMOVE));
	$var($UndoableEdit, ue, nullptr);
	while ($nc(parent)->getElementCount() == 1) {
		$assign(elem, parent);
		$assign(parent, $cast($AbstractDocument$BranchElement, parent->getParentElement()));
		if (parent == nullptr) {
			$throwNew($IllegalStateException, "invalid element structure"_s);
		}
	}
	$var($ElementArray, removed, $new($ElementArray, {elem}));
	$var($ElementArray, added, $new($ElementArray, 0));
	int32_t index = $nc(parent)->getElementIndex(startOffset);
	parent->replace(index, 1, added);
	dde->addEdit($$new($AbstractDocument$ElementEdit, parent, index, removed, added));
	if (length > 0) {
		try {
			$assign(ue, $nc(content)->remove(removeFrom, length));
			if (ue != nullptr) {
				dde->addEdit(ue);
			}
		} catch ($BadLocationException& ble) {
			$throwNew($IllegalStateException, static_cast<$Throwable*>(ble));
		}
		lastEndOffset -= length;
	}
	if (atEnd) {
		$var($Element, prevLeaf, parent->getElement(parent->getElementCount() - 1));
		while ((prevLeaf != nullptr) && !prevLeaf->isLeaf()) {
			$assign(prevLeaf, prevLeaf->getElement(prevLeaf->getElementCount() - 1));
		}
		if (prevLeaf == nullptr) {
			$throwNew($IllegalStateException, "invalid element structure"_s);
		}
		int32_t prevStartOffset = $nc(prevLeaf)->getStartOffset();
		$var($AbstractDocument$BranchElement, prevParent, $cast($AbstractDocument$BranchElement, prevLeaf->getParentElement()));
		int32_t prevIndex = $nc(prevParent)->getElementIndex(prevStartOffset);
		$var($Element, newElem, nullptr);
		$assign(newElem, createLeafElement(prevParent, $(prevLeaf->getAttributes()), prevStartOffset, lastEndOffset));
		$var($ElementArray, prevRemoved, $new($ElementArray, {prevLeaf}));
		$var($ElementArray, prevAdded, $new($ElementArray, {newElem}));
		prevParent->replace(prevIndex, 1, prevAdded);
		dde->addEdit($$new($AbstractDocument$ElementEdit, prevParent, prevIndex, prevRemoved, prevAdded));
	}
	postRemoveUpdate(dde);
	dde->end();
	fireRemoveUpdate(dde);
	if (!(isComposedText && (ue != nullptr))) {
		fireUndoableEditUpdate($$new($UndoableEditEvent, this, dde));
	}
}

$Style* DefaultStyledDocument::addStyle($String* nm, $Style* parent) {
	$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
	return $nc(styles)->addStyle(nm, parent);
}

void DefaultStyledDocument::removeStyle($String* nm) {
	$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
	$nc(styles)->removeStyle(nm);
}

$Style* DefaultStyledDocument::getStyle($String* nm) {
	$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
	return $nc(styles)->getStyle(nm);
}

$Enumeration* DefaultStyledDocument::getStyleNames() {
	return $nc(($cast($StyleContext, $(getAttributeContext()))))->getStyleNames();
}

void DefaultStyledDocument::setLogicalStyle(int32_t pos, $Style* s) {
	$useLocalCurrentObjectStackCache();
	$var($Element, paragraph, getParagraphElement(pos));
	if ((paragraph != nullptr) && ($instanceOf($AbstractDocument$AbstractElement, paragraph))) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				writeLock();
				$var($DefaultStyledDocument$StyleChangeUndoableEdit, edit, $new($DefaultStyledDocument$StyleChangeUndoableEdit, $cast($AbstractDocument$AbstractElement, paragraph), s));
				$nc(($cast($AbstractDocument$AbstractElement, paragraph)))->setResolveParent(s);
				int32_t p0 = paragraph->getStartOffset();
				int32_t p1 = paragraph->getEndOffset();
				$init($DocumentEvent$EventType);
				$var($AbstractDocument$DefaultDocumentEvent, e, $new($AbstractDocument$DefaultDocumentEvent, this, p0, p1 - p0, $DocumentEvent$EventType::CHANGE));
				e->addEdit(edit);
				e->end();
				fireChangedUpdate(e);
				fireUndoableEditUpdate($$new($UndoableEditEvent, this, e));
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

$Style* DefaultStyledDocument::getLogicalStyle(int32_t p) {
	$useLocalCurrentObjectStackCache();
	$var($Style, s, nullptr);
	$var($Element, paragraph, getParagraphElement(p));
	if (paragraph != nullptr) {
		$var($AttributeSet, a, paragraph->getAttributes());
		$var($AttributeSet, parent, $nc(a)->getResolveParent());
		if ($instanceOf($Style, parent)) {
			$assign(s, $cast($Style, parent));
		}
	}
	return s;
}

void DefaultStyledDocument::setCharacterAttributes(int32_t offset, int32_t length, $AttributeSet* s, bool replace) {
	$useLocalCurrentObjectStackCache();
	if (length == 0) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			writeLock();
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, changes, $new($AbstractDocument$DefaultDocumentEvent, this, offset, length, $DocumentEvent$EventType::CHANGE));
			$nc(this->buffer)->change(offset, length, changes);
			$var($AttributeSet, sCopy, $nc(s)->copyAttributes());
			int32_t lastEnd = 0;
			for (int32_t pos = offset; pos < (offset + length); pos = lastEnd) {
				$var($Element, run, getCharacterElement(pos));
				lastEnd = $nc(run)->getEndOffset();
				if (pos == lastEnd) {
					break;
				}
				$var($MutableAttributeSet, attr, $cast($MutableAttributeSet, run->getAttributes()));
				changes->addEdit($$new($DefaultStyledDocument$AttributeUndoableEdit, run, sCopy, replace));
				if (replace) {
					$nc(attr)->removeAttributes(static_cast<$AttributeSet*>(attr));
				}
				$nc(attr)->addAttributes(s);
			}
			changes->end();
			fireChangedUpdate(changes);
			fireUndoableEditUpdate($$new($UndoableEditEvent, this, changes));
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

void DefaultStyledDocument::setParagraphAttributes(int32_t offset, int32_t length, $AttributeSet* s, bool replace) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			writeLock();
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, changes, $new($AbstractDocument$DefaultDocumentEvent, this, offset, length, $DocumentEvent$EventType::CHANGE));
			$var($AttributeSet, sCopy, $nc(s)->copyAttributes());
			$var($Element, section, getDefaultRootElement());
			int32_t index0 = $nc(section)->getElementIndex(offset);
			int32_t index1 = section->getElementIndex(offset + ((length > 0) ? length - 1 : 0));
			$init($Boolean);
			$init($AbstractDocument);
			bool isI18N = $nc($Boolean::TRUE)->equals($(getProperty($AbstractDocument::I18NProperty)));
			bool hasRuns = false;
			for (int32_t i = index0; i <= index1; ++i) {
				$var($Element, paragraph, section->getElement(i));
				$var($MutableAttributeSet, attr, $cast($MutableAttributeSet, $nc(paragraph)->getAttributes()));
				changes->addEdit($$new($DefaultStyledDocument$AttributeUndoableEdit, paragraph, sCopy, replace));
				if (replace) {
					$nc(attr)->removeAttributes(static_cast<$AttributeSet*>(attr));
				}
				$nc(attr)->addAttributes(s);
				if (isI18N && !hasRuns) {
					$init($TextAttribute);
					hasRuns = (attr->getAttribute($TextAttribute::RUN_DIRECTION) != nullptr);
				}
			}
			if (hasRuns) {
				updateBidi(changes);
			}
			changes->end();
			fireChangedUpdate(changes);
			fireUndoableEditUpdate($$new($UndoableEditEvent, this, changes));
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

$Element* DefaultStyledDocument::getParagraphElement(int32_t pos) {
	$var($Element, e, nullptr);
	for ($assign(e, getDefaultRootElement()); !$nc(e)->isLeaf();) {
		int32_t index = $nc(e)->getElementIndex(pos);
		$assign(e, e->getElement(index));
	}
	if (e != nullptr) {
		return e->getParentElement();
	}
	return e;
}

$Element* DefaultStyledDocument::getCharacterElement(int32_t pos) {
	$var($Element, e, nullptr);
	for ($assign(e, getDefaultRootElement()); !$nc(e)->isLeaf();) {
		int32_t index = $nc(e)->getElementIndex(pos);
		$assign(e, e->getElement(index));
	}
	return e;
}

void DefaultStyledDocument::insertUpdate($AbstractDocument$DefaultDocumentEvent* chng, $AttributeSet* attr$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, attr$renamed);
	int32_t offset = $nc(chng)->getOffset();
	int32_t length = chng->getLength();
	if (attr == nullptr) {
		$init($SimpleAttributeSet);
		$assign(attr, $SimpleAttributeSet::EMPTY);
	}
	$var($Element, paragraph, getParagraphElement(offset + length));
	$var($AttributeSet, pattr, $nc(paragraph)->getAttributes());
	$var($Element, pParagraph, getParagraphElement(offset));
	$var($Element, run, $nc(pParagraph)->getElement(pParagraph->getElementIndex(offset)));
	int32_t endOffset = offset + length;
	bool insertingAtBoundry = ($nc(run)->getEndOffset() == endOffset);
	$var($AttributeSet, cattr, run->getAttributes());
	try {
		$var($Segment, s, $new($Segment));
		$var($Vector, parseBuffer, $new($Vector));
		$var($DefaultStyledDocument$ElementSpec, lastStartSpec, nullptr);
		bool insertingAfterNewline = false;
		int16_t lastStartDirection = $DefaultStyledDocument$ElementSpec::OriginateDirection;
		if (offset > 0) {
			getText(offset - 1, 1, s);
			if ($nc(s->array)->get(s->offset) == u'\n') {
				insertingAfterNewline = true;
				lastStartDirection = createSpecsForInsertAfterNewline(paragraph, pParagraph, pattr, parseBuffer, offset, endOffset);
				for (int32_t counter = parseBuffer->size() - 1; counter >= 0; --counter) {
					$var($DefaultStyledDocument$ElementSpec, spec, $cast($DefaultStyledDocument$ElementSpec, parseBuffer->elementAt(counter)));
					if ($nc(spec)->getType() == $DefaultStyledDocument$ElementSpec::StartTagType) {
						$assign(lastStartSpec, spec);
						break;
					}
				}
			}
		}
		if (!insertingAfterNewline) {
			$assign(pattr, pParagraph->getAttributes());
		}
		getText(offset, length, s);
		$var($chars, txt, s->array);
		int32_t n = s->offset + s->count;
		int32_t lastOffset = s->offset;
		for (int32_t i = s->offset; i < n; ++i) {
			if ($nc(txt)->get(i) == u'\n') {
				int32_t breakOffset = i + 1;
				parseBuffer->addElement($$new($DefaultStyledDocument$ElementSpec, attr, $DefaultStyledDocument$ElementSpec::ContentType, breakOffset - lastOffset));
				parseBuffer->addElement($$new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::EndTagType));
				$assign(lastStartSpec, $new($DefaultStyledDocument$ElementSpec, pattr, $DefaultStyledDocument$ElementSpec::StartTagType));
				parseBuffer->addElement(lastStartSpec);
				lastOffset = breakOffset;
			}
		}
		if (lastOffset < n) {
			parseBuffer->addElement($$new($DefaultStyledDocument$ElementSpec, attr, $DefaultStyledDocument$ElementSpec::ContentType, n - lastOffset));
		}
		$var($DefaultStyledDocument$ElementSpec, first, $cast($DefaultStyledDocument$ElementSpec, parseBuffer->firstElement()));
		int32_t docLength = getLength();
		bool var$0 = $nc(first)->getType() == $DefaultStyledDocument$ElementSpec::ContentType;
		if (var$0 && $nc(cattr)->isEqual(attr)) {
			first->setDirection($DefaultStyledDocument$ElementSpec::JoinPreviousDirection);
		}
		if (lastStartSpec != nullptr) {
			if (insertingAfterNewline) {
				lastStartSpec->setDirection(lastStartDirection);
			} else if (pParagraph->getEndOffset() != endOffset) {
				lastStartSpec->setDirection($DefaultStyledDocument$ElementSpec::JoinFractureDirection);
			} else {
				$var($Element, parent, pParagraph->getParentElement());
				int32_t pParagraphIndex = $nc(parent)->getElementIndex(offset);
				bool var$1 = (pParagraphIndex + 1) < parent->getElementCount();
				if (var$1 && !$nc($(parent->getElement(pParagraphIndex + 1)))->isLeaf()) {
					lastStartSpec->setDirection($DefaultStyledDocument$ElementSpec::JoinNextDirection);
				}
			}
		}
		if (insertingAtBoundry && endOffset < docLength) {
			$var($DefaultStyledDocument$ElementSpec, last, $cast($DefaultStyledDocument$ElementSpec, parseBuffer->lastElement()));
			bool var$3 = $nc(last)->getType() == $DefaultStyledDocument$ElementSpec::ContentType;
			bool var$2 = var$3 && last->getDirection() != $DefaultStyledDocument$ElementSpec::JoinPreviousDirection;
			if (var$2 && ((lastStartSpec == nullptr && (paragraph == pParagraph || insertingAfterNewline)) || (lastStartSpec != nullptr && lastStartSpec->getDirection() != $DefaultStyledDocument$ElementSpec::OriginateDirection))) {
				$var($Element, nextRun, paragraph->getElement(paragraph->getElementIndex(endOffset)));
				bool var$4 = $nc(nextRun)->isLeaf();
				if (var$4 && $nc(attr)->isEqual($(nextRun->getAttributes()))) {
					$nc(last)->setDirection($DefaultStyledDocument$ElementSpec::JoinNextDirection);
				}
			}
		} else if (!insertingAtBoundry && lastStartSpec != nullptr && lastStartSpec->getDirection() == $DefaultStyledDocument$ElementSpec::JoinFractureDirection) {
			$var($DefaultStyledDocument$ElementSpec, last, $cast($DefaultStyledDocument$ElementSpec, parseBuffer->lastElement()));
			bool var$6 = $nc(last)->getType() == $DefaultStyledDocument$ElementSpec::ContentType;
			bool var$5 = var$6 && last->getDirection() != $DefaultStyledDocument$ElementSpec::JoinPreviousDirection;
			if (var$5 && $nc(attr)->isEqual(cattr)) {
				last->setDirection($DefaultStyledDocument$ElementSpec::JoinNextDirection);
			}
		}
		if ($Utilities::isComposedTextAttributeDefined(attr)) {
			$var($MutableAttributeSet, mattr, $cast($MutableAttributeSet, attr));
			$nc(mattr)->addAttributes(cattr);
			$init($AbstractDocument);
			mattr->addAttribute($AbstractDocument::ElementNameAttribute, $AbstractDocument::ContentElementName);
			$init($StyleConstants);
			mattr->addAttribute($StyleConstants::NameAttribute, $AbstractDocument::ContentElementName);
			if (mattr->isDefined("CR"_s)) {
				mattr->removeAttribute("CR"_s);
			}
		}
		$var($DefaultStyledDocument$ElementSpecArray, spec, $new($DefaultStyledDocument$ElementSpecArray, parseBuffer->size()));
		parseBuffer->copyInto(spec);
		$nc(this->buffer)->insert(offset, length, spec, chng);
	} catch ($BadLocationException& bl) {
	}
	$AbstractDocument::insertUpdate(chng, attr);
}

int16_t DefaultStyledDocument::createSpecsForInsertAfterNewline($Element* paragraph, $Element* pParagraph, $AttributeSet* pattr, $Vector* parseBuffer, int32_t offset, int32_t endOffset) {
	$useLocalCurrentObjectStackCache();
	if ($nc(paragraph)->getParentElement() == $nc(pParagraph)->getParentElement()) {
		$var($DefaultStyledDocument$ElementSpec, spec, $new($DefaultStyledDocument$ElementSpec, pattr, $DefaultStyledDocument$ElementSpec::EndTagType));
		$nc(parseBuffer)->addElement(spec);
		$assign(spec, $new($DefaultStyledDocument$ElementSpec, pattr, $DefaultStyledDocument$ElementSpec::StartTagType));
		parseBuffer->addElement(spec);
		if (pParagraph->getEndOffset() != endOffset) {
			return $DefaultStyledDocument$ElementSpec::JoinFractureDirection;
		}
		$var($Element, parent, pParagraph->getParentElement());
		int32_t var$0 = ($nc(parent)->getElementIndex(offset) + 1);
		if (var$0 < parent->getElementCount()) {
			return $DefaultStyledDocument$ElementSpec::JoinNextDirection;
		}
	} else {
		$var($Vector, leftParents, $new($Vector));
		$var($Vector, rightParents, $new($Vector));
		$var($Element, e, pParagraph);
		while (e != nullptr) {
			leftParents->addElement(e);
			$assign(e, e->getParentElement());
		}
		$assign(e, paragraph);
		int32_t leftIndex = -1;
		while (e != nullptr && (leftIndex = leftParents->indexOf(e)) == -1) {
			rightParents->addElement(e);
			$assign(e, e->getParentElement());
		}
		if (e != nullptr) {
			for (int32_t counter = 0; counter < leftIndex; ++counter) {
				$nc(parseBuffer)->addElement($$new($DefaultStyledDocument$ElementSpec, nullptr, $DefaultStyledDocument$ElementSpec::EndTagType));
			}
			$var($DefaultStyledDocument$ElementSpec, spec, nullptr);
			for (int32_t counter = rightParents->size() - 1; counter >= 0; --counter) {
				$assign(spec, $new($DefaultStyledDocument$ElementSpec, $($nc(($cast($Element, $(rightParents->elementAt(counter)))))->getAttributes()), $DefaultStyledDocument$ElementSpec::StartTagType));
				if (counter > 0) {
					spec->setDirection($DefaultStyledDocument$ElementSpec::JoinNextDirection);
				}
				$nc(parseBuffer)->addElement(spec);
			}
			if (rightParents->size() > 0) {
				return $DefaultStyledDocument$ElementSpec::JoinNextDirection;
			}
			return $DefaultStyledDocument$ElementSpec::JoinFractureDirection;
		}
	}
	return $DefaultStyledDocument$ElementSpec::OriginateDirection;
}

void DefaultStyledDocument::removeUpdate($AbstractDocument$DefaultDocumentEvent* chng) {
	$AbstractDocument::removeUpdate(chng);
	int32_t var$0 = $nc(chng)->getOffset();
	$nc(this->buffer)->remove(var$0, chng->getLength(), chng);
}

$AbstractDocument$AbstractElement* DefaultStyledDocument::createDefaultRoot() {
	$useLocalCurrentObjectStackCache();
	writeLock();
	$var($AbstractDocument$BranchElement, section, $new($DefaultStyledDocument$SectionElement, this));
	$var($AbstractDocument$BranchElement, paragraph, $new($AbstractDocument$BranchElement, this, section, nullptr));
	$var($AbstractDocument$LeafElement, brk, $new($AbstractDocument$LeafElement, this, paragraph, nullptr, 0, 1));
	$var($ElementArray, buff, $new($ElementArray, 1));
	buff->set(0, brk);
	paragraph->replace(0, 0, buff);
	buff->set(0, paragraph);
	section->replace(0, 0, buff);
	writeUnlock();
	return section;
}

$Color* DefaultStyledDocument::getForeground($AttributeSet* attr) {
	$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
	return $nc(styles)->getForeground(attr);
}

$Color* DefaultStyledDocument::getBackground($AttributeSet* attr) {
	$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
	return $nc(styles)->getBackground(attr);
}

$Font* DefaultStyledDocument::getFont($AttributeSet* attr) {
	$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
	return $nc(styles)->getFont(attr);
}

void DefaultStyledDocument::styleChanged($Style* style) {
	if (getLength() != 0) {
		if (this->updateRunnable == nullptr) {
			$set(this, updateRunnable, $new($DefaultStyledDocument$ChangeUpdateRunnable, this));
		}
		$synchronized(this->updateRunnable) {
			if (!$nc(this->updateRunnable)->isPending) {
				$SwingUtilities::invokeLater(this->updateRunnable);
				$nc(this->updateRunnable)->isPending = true;
			}
		}
	}
}

void DefaultStyledDocument::addDocumentListener($DocumentListener* listener) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->listeningStyles) {
		$load($DocumentListener);
		int32_t oldDLCount = $nc(this->listenerList)->getListenerCount($DocumentListener::class$);
		$AbstractDocument::addDocumentListener(listener);
		if (oldDLCount == 0) {
			if (this->styleContextChangeListener == nullptr) {
				$set(this, styleContextChangeListener, createStyleContextChangeListener());
			}
			if (this->styleContextChangeListener != nullptr) {
				$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
				$var($List, staleListeners, $DefaultStyledDocument$AbstractChangeHandler::getStaleListeners(this->styleContextChangeListener));
				{
					$var($Iterator, i$, $nc(staleListeners)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($ChangeListener, l, $cast($ChangeListener, i$->next()));
						{
							$nc(styles)->removeChangeListener(l);
						}
					}
				}
				$nc(styles)->addChangeListener(this->styleContextChangeListener);
			}
			updateStylesListeningTo();
		}
	}
}

void DefaultStyledDocument::removeDocumentListener($DocumentListener* listener) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->listeningStyles) {
		$AbstractDocument::removeDocumentListener(listener);
		$load($DocumentListener);
		if ($nc(this->listenerList)->getListenerCount($DocumentListener::class$) == 0) {
			for (int32_t counter = $nc(this->listeningStyles)->size() - 1; counter >= 0; --counter) {
				$nc(($cast($Style, $($nc(this->listeningStyles)->elementAt(counter)))))->removeChangeListener(this->styleChangeListener);
			}
			$nc(this->listeningStyles)->removeAllElements();
			if (this->styleContextChangeListener != nullptr) {
				$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
				$nc(styles)->removeChangeListener(this->styleContextChangeListener);
			}
		}
	}
}

$ChangeListener* DefaultStyledDocument::createStyleChangeListener() {
	return $new($DefaultStyledDocument$StyleChangeHandler, this);
}

$ChangeListener* DefaultStyledDocument::createStyleContextChangeListener() {
	return $new($DefaultStyledDocument$StyleContextChangeHandler, this);
}

void DefaultStyledDocument::updateStylesListeningTo() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->listeningStyles) {
		$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
		if (this->styleChangeListener == nullptr) {
			$set(this, styleChangeListener, createStyleChangeListener());
		}
		if (this->styleChangeListener != nullptr && styles != nullptr) {
			$var($Enumeration, styleNames, styles->getStyleNames());
			$var($Vector, v, $cast($Vector, $nc(this->listeningStyles)->clone()));
			$nc(this->listeningStyles)->removeAllElements();
			$var($List, staleListeners, $DefaultStyledDocument$AbstractChangeHandler::getStaleListeners(this->styleChangeListener));
			while ($nc(styleNames)->hasMoreElements()) {
				$var($String, name, $cast($String, styleNames->nextElement()));
				$var($Style, aStyle, styles->getStyle(name));
				int32_t index = $nc(v)->indexOf(aStyle);
				$nc(this->listeningStyles)->addElement(aStyle);
				if (index == -1) {
					{
						$var($Iterator, i$, $nc(staleListeners)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ChangeListener, l, $cast($ChangeListener, i$->next()));
							{
								$nc(aStyle)->removeChangeListener(l);
							}
						}
					}
					$nc(aStyle)->addChangeListener(this->styleChangeListener);
				} else {
					v->removeElementAt(index);
				}
			}
			for (int32_t counter = $nc(v)->size() - 1; counter >= 0; --counter) {
				$var($Style, aStyle, $cast($Style, v->elementAt(counter)));
				$nc(aStyle)->removeChangeListener(this->styleChangeListener);
			}
			if ($nc(this->listeningStyles)->size() == 0) {
				$set(this, styleChangeListener, nullptr);
			}
		}
	}
}

void DefaultStyledDocument::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$set(this, listeningStyles, $new($Vector));
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	$set(this, buffer, $cast($DefaultStyledDocument$ElementBuffer, $nc(f)->get("buffer"_s, ($Object*)nullptr)));
	$load($DocumentListener);
	if (this->styleContextChangeListener == nullptr && $nc(this->listenerList)->getListenerCount($DocumentListener::class$) > 0) {
		$set(this, styleContextChangeListener, createStyleContextChangeListener());
		if (this->styleContextChangeListener != nullptr) {
			$var($StyleContext, styles, $cast($StyleContext, getAttributeContext()));
			$nc(styles)->addChangeListener(this->styleContextChangeListener);
		}
		updateStylesListeningTo();
	}
}

DefaultStyledDocument::DefaultStyledDocument() {
}

$Class* DefaultStyledDocument::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument, name, initialize, &_DefaultStyledDocument_ClassInfo_, allocate$DefaultStyledDocument);
	return class$;
}

$Class* DefaultStyledDocument::class$ = nullptr;

		} // text
	} // swing
} // javax