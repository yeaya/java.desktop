#include <javax/swing/JTextArea.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Math.h>
#include <java/util/Set.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea$AccessibleJTextArea.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Set = ::java::util::Set;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTextArea$AccessibleJTextArea = ::javax::swing::JTextArea$AccessibleJTextArea;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;

namespace javax {
	namespace swing {

$NamedAttribute JTextArea_Attribute_var$0[] = {
	{"defaultProperty", 's', "UIClassID"},
	{"description", 's', "A multi-line area that displays plain text."},
	{}
};

$NamedAttribute JTextArea_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextArea_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JTextArea_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JTextArea_Attribute_var$1},
	{}
};

$NamedAttribute JTextArea_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_getAccessibleContext8[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$2},
	{}
};

$NamedAttribute JTextArea_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_getLineCount11[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$3},
	{}
};

$NamedAttribute JTextArea_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_getPreferredScrollableViewportSize16[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$4},
	{}
};

$NamedAttribute JTextArea_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_getScrollableTracksViewportWidth20[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$5},
	{}
};

$NamedAttribute JTextArea_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_getUIClassID23[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$6},
	{}
};

$NamedAttribute JTextArea_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "the number of columns preferred for display"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_setColumns28[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$7},
	{}
};

$NamedAttribute JTextArea_Attribute_var$8[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "should lines be wrapped"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_setLineWrap30[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$8},
	{}
};

$NamedAttribute JTextArea_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "the number of rows preferred for display"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_setRows31[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$9},
	{}
};

$NamedAttribute JTextArea_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "the number of characters to expand tabs to"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_setTabSize32[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$10},
	{}
};

$NamedAttribute JTextArea_Attribute_var$11[] = {
	{"description", 's', "should wrapping occur at word boundaries"},
	{}
};

$CompoundAttribute _JTextArea_MethodAnnotations_setWrapStyleWord33[] = {
	{"Ljava/beans/BeanProperty;", JTextArea_Attribute_var$11},
	{}
};

$FieldInfo _JTextArea_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTextArea, uiClassID)},
	{"rows", "I", nullptr, $PRIVATE, $field(JTextArea, rows)},
	{"columns", "I", nullptr, $PRIVATE, $field(JTextArea, columns)},
	{"columnWidth", "I", nullptr, $PRIVATE, $field(JTextArea, columnWidth)},
	{"rowHeight", "I", nullptr, $PRIVATE, $field(JTextArea, rowHeight)},
	{"wrap", "Z", nullptr, $PRIVATE, $field(JTextArea, wrap)},
	{"word", "Z", nullptr, $PRIVATE, $field(JTextArea, word)},
	{}
};

$MethodInfo _JTextArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextArea::*)()>(&JTextArea::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextArea::*)($String*)>(&JTextArea::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JTextArea::*)(int32_t,int32_t)>(&JTextArea::init$))},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(JTextArea::*)($String*,int32_t,int32_t)>(&JTextArea::init$))},
	{"<init>", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextArea::*)($Document*)>(&JTextArea::init$))},
	{"<init>", "(Ljavax/swing/text/Document;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(JTextArea::*)($Document*,$String*,int32_t,int32_t)>(&JTextArea::init$))},
	{"append", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"createDefaultModel", "()Ljavax/swing/text/Document;", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_getAccessibleContext8},
	{"getColumnWidth", "()I", nullptr, $PROTECTED},
	{"getColumns", "()I", nullptr, $PUBLIC},
	{"getLineCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_getLineCount11},
	{"getLineEndOffset", "(I)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getLineOfOffset", "(I)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getLineStartOffset", "(I)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getLineWrap", "()Z", nullptr, $PUBLIC},
	{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_getPreferredScrollableViewportSize16},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRowHeight", "()I", nullptr, $PROTECTED},
	{"getRows", "()I", nullptr, $PUBLIC},
	{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_getScrollableTracksViewportWidth20},
	{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getTabSize", "()I", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_getUIClassID23},
	{"getWrapStyleWord", "()Z", nullptr, $PUBLIC},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"setColumns", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_setColumns28},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLineWrap", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_setLineWrap30},
	{"setRows", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_setRows31},
	{"setTabSize", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_setTabSize32},
	{"setWrapStyleWord", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTextArea_MethodAnnotations_setWrapStyleWord33},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTextArea::*)($ObjectOutputStream*)>(&JTextArea::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JTextArea_InnerClassesInfo_[] = {
	{"javax.swing.JTextArea$AccessibleJTextArea", "javax.swing.JTextArea", "AccessibleJTextArea", $PROTECTED},
	{}
};

$ClassInfo _JTextArea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTextArea",
	"javax.swing.text.JTextComponent",
	nullptr,
	_JTextArea_FieldInfo_,
	_JTextArea_MethodInfo_,
	nullptr,
	nullptr,
	_JTextArea_InnerClassesInfo_,
	_JTextArea_Annotations_,
	nullptr,
	"javax.swing.JTextArea$AccessibleJTextArea"
};

$Object* allocate$JTextArea($Class* clazz) {
	return $of($alloc(JTextArea));
}

$String* JTextArea::uiClassID = nullptr;

void JTextArea::init$() {
	JTextArea::init$(nullptr, nullptr, 0, 0);
}

void JTextArea::init$($String* text) {
	JTextArea::init$(nullptr, text, 0, 0);
}

void JTextArea::init$(int32_t rows, int32_t columns) {
	JTextArea::init$(nullptr, nullptr, rows, columns);
}

void JTextArea::init$($String* text, int32_t rows, int32_t columns) {
	JTextArea::init$(nullptr, text, rows, columns);
}

void JTextArea::init$($Document* doc) {
	JTextArea::init$(doc, nullptr, 0, 0);
}

void JTextArea::init$($Document* doc$renamed, $String* text, int32_t rows, int32_t columns) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, doc$renamed);
	$JTextComponent::init$();
	this->rows = rows;
	this->columns = columns;
	if (doc == nullptr) {
		$assign(doc, createDefaultModel());
	}
	setDocument(doc);
	if (text != nullptr) {
		setText(text);
		select(0, 0);
	}
	if (rows < 0) {
		$throwNew($IllegalArgumentException, $$str({"rows: "_s, $$str(rows)}));
	}
	if (columns < 0) {
		$throwNew($IllegalArgumentException, $$str({"columns: "_s, $$str(columns)}));
	}
	$LookAndFeel::installProperty(this, "focusTraversalKeysForward"_s, $($JComponent::getManagingFocusForwardTraversalKeys()));
	$LookAndFeel::installProperty(this, "focusTraversalKeysBackward"_s, $($JComponent::getManagingFocusBackwardTraversalKeys()));
}

$String* JTextArea::getUIClassID() {
	return JTextArea::uiClassID;
}

$Document* JTextArea::createDefaultModel() {
	return $new($PlainDocument);
}

void JTextArea::setTabSize(int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		int32_t old = getTabSize();
		$init($PlainDocument);
		doc->putProperty($PlainDocument::tabSizeAttribute, $($Integer::valueOf(size)));
		firePropertyChange("tabSize"_s, old, size);
	}
}

int32_t JTextArea::getTabSize() {
	$useLocalCurrentObjectStackCache();
	int32_t size = 8;
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		$init($PlainDocument);
		$var($Integer, i, $cast($Integer, doc->getProperty($PlainDocument::tabSizeAttribute)));
		if (i != nullptr) {
			size = i->intValue();
		}
	}
	return size;
}

void JTextArea::setLineWrap(bool wrap) {
	bool old = this->wrap;
	this->wrap = wrap;
	firePropertyChange("lineWrap"_s, old, wrap);
}

bool JTextArea::getLineWrap() {
	return this->wrap;
}

void JTextArea::setWrapStyleWord(bool word) {
	bool old = this->word;
	this->word = word;
	firePropertyChange("wrapStyleWord"_s, old, word);
}

bool JTextArea::getWrapStyleWord() {
	return this->word;
}

int32_t JTextArea::getLineOfOffset(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	if (offset < 0) {
		$throwNew($BadLocationException, "Can\'t translate offset to line"_s, -1);
	} else if (offset > $nc(doc)->getLength()) {
		$throwNew($BadLocationException, "Can\'t translate offset to line"_s, doc->getLength() + 1);
	} else {
		$var($Element, map, $nc($(getDocument()))->getDefaultRootElement());
		return $nc(map)->getElementIndex(offset);
	}
}

int32_t JTextArea::getLineCount() {
	$useLocalCurrentObjectStackCache();
	$var($Element, map, $nc($(getDocument()))->getDefaultRootElement());
	return $nc(map)->getElementCount();
}

int32_t JTextArea::getLineStartOffset(int32_t line) {
	$useLocalCurrentObjectStackCache();
	int32_t lineCount = getLineCount();
	if (line < 0) {
		$throwNew($BadLocationException, "Negative line"_s, -1);
	} else if (line >= lineCount) {
		$throwNew($BadLocationException, "No such line"_s, $nc($(getDocument()))->getLength() + 1);
	} else {
		$var($Element, map, $nc($(getDocument()))->getDefaultRootElement());
		$var($Element, lineElem, $nc(map)->getElement(line));
		return $nc(lineElem)->getStartOffset();
	}
}

int32_t JTextArea::getLineEndOffset(int32_t line) {
	$useLocalCurrentObjectStackCache();
	int32_t lineCount = getLineCount();
	if (line < 0) {
		$throwNew($BadLocationException, "Negative line"_s, -1);
	} else if (line >= lineCount) {
		$throwNew($BadLocationException, "No such line"_s, $nc($(getDocument()))->getLength() + 1);
	} else {
		$var($Element, map, $nc($(getDocument()))->getDefaultRootElement());
		$var($Element, lineElem, $nc(map)->getElement(line));
		int32_t endOffset = $nc(lineElem)->getEndOffset();
		return ((line == lineCount - 1) ? (endOffset - 1) : endOffset);
	}
}

void JTextArea::insert($String* str, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			doc->insertString(pos, str, nullptr);
		} catch ($BadLocationException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
}

void JTextArea::append($String* str) {
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			doc->insertString(doc->getLength(), str, nullptr);
		} catch ($BadLocationException& e) {
		}
	}
}

void JTextArea::replaceRange($String* str, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	if (end < start) {
		$throwNew($IllegalArgumentException, "end before start"_s);
	}
	$var($Document, doc, getDocument());
	if (doc != nullptr) {
		try {
			if ($instanceOf($AbstractDocument, doc)) {
				$nc(($cast($AbstractDocument, doc)))->replace(start, end - start, str, nullptr);
			} else {
				doc->remove(start, end - start);
				doc->insertString(start, str, nullptr);
			}
		} catch ($BadLocationException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
}

int32_t JTextArea::getRows() {
	return this->rows;
}

void JTextArea::setRows(int32_t rows) {
	int32_t oldVal = this->rows;
	if (rows < 0) {
		$throwNew($IllegalArgumentException, "rows less than zero."_s);
	}
	if (rows != oldVal) {
		this->rows = rows;
		invalidate();
	}
}

int32_t JTextArea::getRowHeight() {
	$useLocalCurrentObjectStackCache();
	if (this->rowHeight == 0) {
		$var($FontMetrics, metrics, getFontMetrics($(getFont())));
		this->rowHeight = $nc(metrics)->getHeight();
	}
	return this->rowHeight;
}

int32_t JTextArea::getColumns() {
	return this->columns;
}

void JTextArea::setColumns(int32_t columns) {
	int32_t oldVal = this->columns;
	if (columns < 0) {
		$throwNew($IllegalArgumentException, "columns less than zero."_s);
	}
	if (columns != oldVal) {
		this->columns = columns;
		invalidate();
	}
}

int32_t JTextArea::getColumnWidth() {
	$useLocalCurrentObjectStackCache();
	if (this->columnWidth == 0) {
		$var($FontMetrics, metrics, getFontMetrics($(getFont())));
		this->columnWidth = $nc(metrics)->charWidth(u'm');
	}
	return this->columnWidth;
}

$Dimension* JTextArea::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $JTextComponent::getPreferredSize());
	$assign(d, (d == nullptr) ? $new($Dimension, 400, 400) : d);
	$var($Insets, insets, getInsets());
	if (this->columns != 0) {
		$nc(d)->width = $Math::max(d->width, this->columns * getColumnWidth() + $nc(insets)->left + insets->right);
	}
	if (this->rows != 0) {
		$nc(d)->height = $Math::max(d->height, this->rows * getRowHeight() + $nc(insets)->top + insets->bottom);
	}
	return d;
}

void JTextArea::setFont($Font* f) {
	$JTextComponent::setFont(f);
	this->rowHeight = 0;
	this->columnWidth = 0;
}

$String* JTextArea::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, wrapString, this->wrap ? "true"_s : "false"_s);
	$var($String, wordString, this->word ? "true"_s : "false"_s);
	return $str({$($JTextComponent::paramString()), ",colums="_s, $$str(this->columns), ",columWidth="_s, $$str(this->columnWidth), ",rows="_s, $$str(this->rows), ",rowHeight="_s, $$str(this->rowHeight), ",word="_s, wordString, ",wrap="_s, wrapString});
}

bool JTextArea::getScrollableTracksViewportWidth() {
	return (this->wrap) ? true : $JTextComponent::getScrollableTracksViewportWidth();
}

$Dimension* JTextArea::getPreferredScrollableViewportSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, $JTextComponent::getPreferredScrollableViewportSize());
	$assign(size, (size == nullptr) ? $new($Dimension, 400, 400) : size);
	$var($Insets, insets, getInsets());
	$nc(size)->width = (this->columns == 0) ? size->width : this->columns * getColumnWidth() + $nc(insets)->left + insets->right;
	size->height = (this->rows == 0) ? size->height : this->rows * getRowHeight() + insets->top + insets->bottom;
	return size;
}

int32_t JTextArea::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		{
			return getRowHeight();
		}
	case $SwingConstants::HORIZONTAL:
		{
			return getColumnWidth();
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid orientation: "_s, $$str(orientation)}));
		}
	}
}

void JTextArea::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JTextArea::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$AccessibleContext* JTextArea::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTextArea$AccessibleJTextArea, this));
	}
	return this->accessibleContext;
}

JTextArea::JTextArea() {
}

void clinit$JTextArea($Class* class$) {
	$assignStatic(JTextArea::uiClassID, "TextAreaUI"_s);
}

$Class* JTextArea::load$($String* name, bool initialize) {
	$loadClass(JTextArea, name, initialize, &_JTextArea_ClassInfo_, clinit$JTextArea, allocate$JTextArea);
	return class$;
}

$Class* JTextArea::class$ = nullptr;

	} // swing
} // javax